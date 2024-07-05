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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartGanancias;
	private: System::Windows::Forms::Label^ label2;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chartGanancias = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(747, 90);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"Componente";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(399, 285);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"RomanS_IV25", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(324, 34);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gráfico de Ventas";
			// 
			// chartGanancias
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartGanancias->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartGanancias->Legends->Add(legend4);
			this->chartGanancias->Location = System::Drawing::Point(51, 90);
			this->chartGanancias->Name = L"chartGanancias";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Quantity";
			this->chartGanancias->Series->Add(series4);
			this->chartGanancias->Size = System::Drawing::Size(478, 285);
			this->chartGanancias->TabIndex = 3;
			this->chartGanancias->Text = L"Ganancia Total";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"RomanS_IV25", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(741, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(385, 34);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Productos disponibles";
			// 
			// ReportePedidos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1569, 754);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chartGanancias);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"ReportePedidos";
			this->Text = L"ReportePedidos";
			this->Load += gcnew System::EventHandler(this, &ReportePedidos::ReportePedidos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartGanancias))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReportePedidos_Load(System::Object^ sender, System::EventArgs^ e) {
		List<SaleOrder^>^ pedidoList = Service::QueryAllOrders();
		List<MechanicComponent^>^ componente = Service::Queryalltornillos();

		for (int i = 0; i < pedidoList->Count; i++) {
			//Ganancia del monto total
			for (int j = 0; j < pedidoList[i]->OrderMeca->Count; j++) {
				chartGanancias->Series["Quantity"]->Points->Add(pedidoList[i]->OrderMeca[j]->Quantity);
				chartGanancias->Series["Quantity"]->Points[j]->AxisLabel = "" + pedidoList[i]->OrderMeca[j]->componente->Name;
				chartGanancias->Series["Quantity"]->Points[j]->Label = "" + pedidoList[i]->OrderMeca[j]->Quantity;
			}
		}

		for (int i = 0; i < componente->Count; i++) {
			//Ver stock de Tornillos
			chart1->Series["Componente"]->Points->Add(componente[i]->Stock);
			chart1->Series["Componente"]->Points[i]->LegendText = componente[i]->Name;
			chart1->Series["Componente"]->Points[i]->Label = "" + componente[i]->Stock;

		}

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
