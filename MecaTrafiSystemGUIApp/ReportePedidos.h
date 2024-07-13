#pragma once

#include "StockForm.h"

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
	/// Resumen de ReportePedidos
	/// </summary>
	public ref class ReportePedidos : public System::Windows::Forms::Form
	{
	public:
		ReportePedidos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReportePedidos()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartGanancias;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartVentas;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnVerSTOCK;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartClientes;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartGanancias = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartVentas = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnVerSTOCK = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chartClientes = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVentas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartClientes))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(104, 124);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Componente";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(402, 285);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// chartGanancias
			// 
			chartArea2->Name = L"ChartArea1";
			this->chartGanancias->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chartGanancias->Legends->Add(legend2);
			this->chartGanancias->Location = System::Drawing::Point(671, 124);
			this->chartGanancias->Name = L"chartGanancias";
			this->chartGanancias->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Quantity";
			this->chartGanancias->Series->Add(series2);
			this->chartGanancias->Size = System::Drawing::Size(478, 285);
			this->chartGanancias->TabIndex = 3;
			this->chartGanancias->Text = L"Ganancia Total";
			// 
			// chartVentas
			// 
			chartArea3->Name = L"ChartArea1";
			this->chartVentas->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chartVentas->Legends->Add(legend3);
			this->chartVentas->Location = System::Drawing::Point(1172, 124);
			this->chartVentas->Name = L"chartVentas";
			this->chartVentas->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"Ventas";
			this->chartVentas->Series->Add(series3);
			this->chartVentas->Size = System::Drawing::Size(411, 285);
			this->chartVentas->TabIndex = 5;
			this->chartVentas->Text = L"Grafico de Ventas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(496, 64);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Gráfico de compras";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(891, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(445, 64);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Gráfico de ventas";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Location = System::Drawing::Point(204, 594);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(256, 75);
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// btnVerSTOCK
			// 
			this->btnVerSTOCK->BackColor = System::Drawing::Color::SandyBrown;
			this->btnVerSTOCK->Font = (gcnew System::Drawing::Font(L"Gadugi", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerSTOCK->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVerSTOCK->Location = System::Drawing::Point(184, 571);
			this->btnVerSTOCK->Name = L"btnVerSTOCK";
			this->btnVerSTOCK->Size = System::Drawing::Size(256, 75);
			this->btnVerSTOCK->TabIndex = 26;
			this->btnVerSTOCK->Text = L"Stock Disponible";
			this->btnVerSTOCK->UseVisualStyleBackColor = false;
			this->btnVerSTOCK->Click += gcnew System::EventHandler(this, &ReportePedidos::btnVerSTOCK_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(660, 520);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 192);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Gráfico de \r\n  clientes \r\nregistrados";
			// 
			// chartClientes
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartClientes->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartClientes->Legends->Add(legend4);
			this->chartClientes->Location = System::Drawing::Point(999, 483);
			this->chartClientes->Name = L"chartClientes";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"ClienteRegistrado";
			this->chartClientes->Series->Add(series4);
			this->chartClientes->Size = System::Drawing::Size(562, 300);
			this->chartClientes->TabIndex = 28;
			this->chartClientes->Text = L"Clientes";
			// 
			// ReportePedidos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1595, 807);
			this->Controls->Add(this->chartClientes);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnVerSTOCK);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chartVentas);
			this->Controls->Add(this->chartGanancias);
			this->Controls->Add(this->chart1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"ReportePedidos";
			this->Load += gcnew System::EventHandler(this, &ReportePedidos::ReportePedidos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartVentas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartClientes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReportePedidos_Load(System::Object^ sender, System::EventArgs^ e) {



		//Gráfico de ventas
		List<SaleOrder^>^ pedidoList = Service::QueryAllOrders();
		for (int i = 0; i < pedidoList->Count; i++) {
			for (int j = 0; j < pedidoList[i]->OrderMeca->Count; j++) {
				chartGanancias->Series["Quantity"]->Points->Add(pedidoList[i]->OrderMeca[j]->Quantity);
				chartGanancias->Series["Quantity"]->Points[j]->AxisLabel = "" + pedidoList[i]->OrderMeca[j]->componente->Name;
				chartGanancias->Series["Quantity"]->Points[j]->Label = "" + pedidoList[i]->OrderMeca[j]->Quantity;

				chartVentas->Series["Ventas"]->Points->Add(pedidoList[i]->OrderMeca[j]->Quantity);
				chartVentas->Series["Ventas"]->Points[j]->LegendText = pedidoList[i]->OrderMeca[j]->componente->Name;
				chartVentas->Series["Ventas"]->Points[j]->Label = "" + pedidoList[i]->OrderMeca[j]->Quantity;
			}
		}

		//Gráfico de clientes
		List<Client^>^ cliente = Service::Queryallcliente();
		/*for (int i = 0; i < cliente->Count; i++) {
			chartGanancias->Series["ClienteRegistrado"]->Points->Add(cliente[i]->Ciclo);
			chartGanancias->Series["ClienteRegistrado"]->Points[i]->AxisLabel = "" + cliente[i];
			chartGanancias->Series["ClienteRegistrado"]->Points[i]->Label = "" + cliente[i]->Ciclo;

		}*/

		List<MechanicComponent^>^ componente = Service::Queryalltornillos();
		for (int i = 0; i < componente->Count; i++) {
			//Ver stock de Tornillos
			chart1->Series["Componente"]->Points->Add(componente[i]->Stock);
			chart1->Series["Componente"]->Points[i]->LegendText = componente[i]->Name;
			chart1->Series["Componente"]->Points[i]->Label = "" + componente[i]->Stock;

		}

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnVerSTOCK_Click(System::Object^ sender, System::EventArgs^ e) {
		StockForm^ VerStock = gcnew StockForm();
		VerStock->Show();
	}
	};
}