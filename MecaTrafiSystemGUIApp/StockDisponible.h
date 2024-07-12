#pragma once

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MecaTrafiSystemModel;
	using namespace MecaTrafiSystemService;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de StockDisponible
	/// </summary>
	public ref class StockDisponible : public System::Windows::Forms::Form
	{
	public:
		StockDisponible(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~StockDisponible()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartTornillo;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartRodamiento;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartMotorAC;



	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartPoleas;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartFaja;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartMotorDC;



	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chartTornillo = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartRodamiento = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartMotorAC = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartPoleas = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartFaja = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartMotorDC = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTornillo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartRodamiento))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMotorAC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPoleas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartFaja))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMotorDC))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(589, 64);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Productos disponibles:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 54);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Tornillos";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 471);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 54);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Poleas";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(623, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(277, 54);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Rodamiento";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(621, 471);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 54);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Faja";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1230, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(230, 54);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Motor AC";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(1228, 471);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(232, 54);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Motor DC";
			// 
			// chartTornillo
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartTornillo->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartTornillo->Legends->Add(legend1);
			this->chartTornillo->Location = System::Drawing::Point(37, 206);
			this->chartTornillo->Name = L"chartTornillo";
			this->chartTornillo->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Tornillos";
			this->chartTornillo->Series->Add(series1);
			this->chartTornillo->Size = System::Drawing::Size(300, 235);
			this->chartTornillo->TabIndex = 30;
			this->chartTornillo->Text = L"chartTornillo";
			// 
			// chartRodamiento
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartRodamiento->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartRodamiento->Legends->Add(legend2);
			this->chartRodamiento->Location = System::Drawing::Point(632, 206);
			this->chartRodamiento->Name = L"chartRodamiento";
			this->chartRodamiento->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Rodamiento";
			this->chartRodamiento->Series->Add(series2);
			this->chartRodamiento->Size = System::Drawing::Size(300, 235);
			this->chartRodamiento->TabIndex = 31;
			this->chartRodamiento->Text = L"chartRodamiento";
			// 
			// chartMotorAC
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartMotorAC->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartMotorAC->Legends->Add(legend3);
			this->chartMotorAC->Location = System::Drawing::Point(1225, 206);
			this->chartMotorAC->Name = L"chartMotorAC";
			this->chartMotorAC->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"MotorAC";
			this->chartMotorAC->Series->Add(series3);
			this->chartMotorAC->Size = System::Drawing::Size(300, 235);
			this->chartMotorAC->TabIndex = 32;
			this->chartMotorAC->Text = L"chartMotorAC";
			// 
			// chartPoleas
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartPoleas->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartPoleas->Legends->Add(legend4);
			this->chartPoleas->Location = System::Drawing::Point(37, 535);
			this->chartPoleas->Name = L"chartPoleas";
			this->chartPoleas->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series4->Legend = L"Legend1";
			series4->Name = L"Poleas";
			this->chartPoleas->Series->Add(series4);
			this->chartPoleas->Size = System::Drawing::Size(300, 235);
			this->chartPoleas->TabIndex = 33;
			this->chartPoleas->Text = L"chartPoleas";
			// 
			// chartFaja
			// 
			chartArea5->Name = L"ChartArea1";
			this->chartFaja->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chartFaja->Legends->Add(legend5);
			this->chartFaja->Location = System::Drawing::Point(632, 535);
			this->chartFaja->Name = L"chartFaja";
			this->chartFaja->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series5->Legend = L"Legend1";
			series5->Name = L"Faja";
			this->chartFaja->Series->Add(series5);
			this->chartFaja->Size = System::Drawing::Size(300, 235);
			this->chartFaja->TabIndex = 34;
			this->chartFaja->Text = L"chartFaja";
			// 
			// chartMotorDC
			// 
			chartArea6->Name = L"ChartArea1";
			this->chartMotorDC->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chartMotorDC->Legends->Add(legend6);
			this->chartMotorDC->Location = System::Drawing::Point(1225, 535);
			this->chartMotorDC->Name = L"chartMotorDC";
			this->chartMotorDC->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series6->Legend = L"Legend1";
			series6->Name = L"MotorDC";
			this->chartMotorDC->Series->Add(series6);
			this->chartMotorDC->Size = System::Drawing::Size(300, 235);
			this->chartMotorDC->TabIndex = 35;
			this->chartMotorDC->Text = L"chartMotorDC";
			// 
			// StockDisponible
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1590, 782);
			this->Controls->Add(this->chartMotorDC);
			this->Controls->Add(this->chartFaja);
			this->Controls->Add(this->chartPoleas);
			this->Controls->Add(this->chartMotorAC);
			this->Controls->Add(this->chartRodamiento);
			this->Controls->Add(this->chartTornillo);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"StockDisponible";
			this->Load += gcnew System::EventHandler(this, &StockDisponible::StockDisponible_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartTornillo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartRodamiento))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMotorAC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPoleas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartFaja))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMotorDC))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StockDisponible_Load(System::Object^ sender, System::EventArgs^ e) {
		//Stock Tornillos
		List<MechanicComponent^>^ tornillo = Service::Queryalltornillos();
		for (int i = 0; i < tornillo->Count; i++) {
			chartTornillo->Series["Tornillos"]->Points->Add(tornillo[i]->Stock);
			chartTornillo->Series["Tornillos"]->Points[i]->LegendText = tornillo[i]->Name;
			chartTornillo->Series["Tornillos"]->Points[i]->Label = "" + tornillo[i]->Stock;
		}

		//Stock Poleas
		List<MechanicComponent^>^ poleas = Service::Queryallfpoleas();
		for (int i = 0; i < poleas->Count; i++) {
			chartPoleas->Series["Poleas"]->Points->Add(poleas[i]->Stock);
			chartPoleas->Series["Poleas"]->Points[i]->LegendText = poleas[i]->Name;
			chartPoleas->Series["Poleas"]->Points[i]->Label = "" + poleas[i]->Stock;
		}

		//Stock Faja
		List<MechanicComponent^>^ faja = Service::Queryallfajas();
		for (int i = 0; i < faja->Count; i++) {
			chartFaja->Series["Faja"]->Points->Add(faja[i]->Stock);
			chartFaja->Series["Faja"]->Points[i]->LegendText = faja[i]->Name;
			chartFaja->Series["Faja"]->Points[i]->Label = "" + faja[i]->Stock;
		}

		//Stock Rodamiento
		List<MechanicComponent^>^ rodamiento = Service::Queryallrodamientos();
		for (int i = 0; i < rodamiento->Count; i++) {
			chartRodamiento->Series["Rodamiento"]->Points->Add(rodamiento[i]->Stock);
			chartRodamiento->Series["Rodamiento"]->Points[i]->LegendText = rodamiento[i]->Name;
			chartRodamiento->Series["Rodamiento"]->Points[i]->Label = "" + rodamiento[i]->Stock;
		}
		/*
		//Stock Motor AC
		List<MechanicComponent^>^ tornillo = Service::Queryalltornillos();
		for (int i = 0; i < tornillo->Count; i++) {
			chartTornillo->Series["Tornillos"]->Points->Add(tornillo[i]->Stock);
			chartTornillo->Series["Tornillos"]->Points[i]->LegendText = tornillo[i]->Name;
			chartTornillo->Series["Tornillos"]->Points[i]->Label = "" + tornillo[i]->Stock;
		}

		//Stock Motor DC
		List<MechanicComponent^>^ tornillo = Service::Queryalltornillos();
		for (int i = 0; i < tornillo->Count; i++) {
			chartTornillo->Series["Tornillos"]->Points->Add(tornillo[i]->Stock);
			chartTornillo->Series["Tornillos"]->Points[i]->LegendText = tornillo[i]->Name;
			chartTornillo->Series["Tornillos"]->Points[i]->Label = "" + tornillo[i]->Stock;
		}
		*/
	}
};
}