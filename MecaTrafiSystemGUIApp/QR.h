#pragma once

#include <opencv2/opencv.hpp>
#include "opencv2/videoio.hpp"
#include <iostream>
#include <zbar.h>

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	using namespace System::Runtime::InteropServices;
	using namespace MecaTrafiSystemModel;
	using namespace MecaTrafiSystemService;
	using namespace cv;
	using namespace zbar;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picboxOutput;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->picboxOutput = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picboxOutput))->BeginInit();
			this->SuspendLayout();
			// 
			// picboxOutput
			// 
			this->picboxOutput->Dock = System::Windows::Forms::DockStyle::Top;
			this->picboxOutput->Location = System::Drawing::Point(0, 0);
			this->picboxOutput->Name = L"picboxOutput";
			this->picboxOutput->Size = System::Drawing::Size(805, 365);
			this->picboxOutput->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picboxOutput->TabIndex = 0;
			this->picboxOutput->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 582);
			this->Controls->Add(this->picboxOutput);
			this->Name = L"Form1";
			this->Text = L"OpenCV Stream V1.0";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picboxOutput))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region LocalVariables
	private: Thread^ StreamThreadHandle;
#pragma endregion

#pragma region delegates
	private: delegate void UPDATE_FRAME(Bitmap^ b);

	private: void UpdateFrame(Bitmap^ b)
	{
		picboxOutput->Image = b;
	}
#pragma endregion

#pragma region ThreadsFunctions
	private: void StreamThread()
	{
		int camera_device = 0;
		VideoCapture capture;
		Mat frame;

		// Inicializar el escáner ZBar
		ImageScanner scanner;
		scanner.set_config(ZBAR_NONE, ZBAR_CFG_ENABLE, 1);

		//Open the camera. make sure you plug in the camera or use built-in camera will do.
		capture.open(camera_device);
		if (!capture.isOpened())
		{
			MessageBox::Show("Error! No Camera is found.");
			return;
		}

		//Keep reading the frame. Here is only a simple demonstration on how to stream the camera,
		//it could be  modified such that it could handle all possible errors
		while (capture.read(frame))
		{
			if (frame.empty())
			{
				break;
			}

			// Convertir a escala de grises
			Mat gray;
			cvtColor(frame, gray, COLOR_BGR2GRAY);

			// Convertir la imagen OpenCV a una imagen ZBar
			int width = gray.cols;
			int height = gray.rows;
			uchar* raw = (uchar*)gray.data;
			zbar::Image image(width, height, "Y800", raw, width * height);

			// Escanear la imagen
			int n = scanner.scan(image);

			// Procesar los resultados
			for (zbar::Image::SymbolIterator symbol = image.symbol_begin(); symbol != image.symbol_end(); ++symbol)
			{
				std::cout << "Tipo: " << symbol->get_type_name() << std::endl;
				std::cout << "Código: " << symbol->get_data() << std::endl;

				// Crear una nueva instancia de MechanicComponent
				MechanicComponent^ codigo = gcnew MechanicComponent();

				// Asignar el nombre (Name) utilizando el valor del código de barras
				codigo->Name = gcnew System::String(symbol->get_data().c_str());
				// Mostrar un mensaje de código de barras detectado
				System::Windows::Forms::MessageBox::Show(codigo->Name, "Código de barras detectado");
			}

			Bitmap^ b = gcnew Bitmap(frame.cols, frame.rows, frame.step, Imaging::PixelFormat::Format24bppRgb, System::IntPtr(frame.data));

			// Update to the picturebox 
			if (picboxOutput->InvokeRequired)
			{
				//Since this is a thread which is not the same thread that created the picboxOutput, 
				//we need to use delegate to update
				UPDATE_FRAME^ cb = gcnew UPDATE_FRAME(this, &Form1::UpdateFrame);

				// Invoke the delegate update function
				Control::Invoke(cb, b);
			}
			else
			{
				// in case the picboxOuput is created at the same thread, invoke is not required.
				UpdateFrame(b);
			}
		}
	}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

		// During the Form loading, We create a thread to run the OpenCV
		StreamThreadHandle = gcnew Thread(gcnew ThreadStart(this, &Form1::StreamThread));
		StreamThreadHandle->Start();
	}

	private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		//We need to kill the thread if Form is closed
		if (StreamThreadHandle != nullptr)
		{
			if (true == StreamThreadHandle->IsAlive)
			{
				StreamThreadHandle->Abort();
			}
		}
	}
	};
}
