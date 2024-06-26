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
	/// Resumen de ReportesCompraAdmin
	/// </summary>
	public ref class ReportesCompraAdmin : public System::Windows::Forms::Form
	{
	public:
		ReportesCompraAdmin(void)
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
		~ReportesCompraAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ OrdersCompraChart;
	protected:


	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->OrdersCompraChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrdersCompraChart))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(85, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(779, 484);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// OrdersCompraChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->OrdersCompraChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			legend1->Title = L"Monto Total";
			this->OrdersCompraChart->Legends->Add(legend1);
			this->OrdersCompraChart->Location = System::Drawing::Point(178, 81);
			this->OrdersCompraChart->Name = L"OrdersCompraChart";
			this->OrdersCompraChart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Monto Total";
			this->OrdersCompraChart->Series->Add(series1);
			this->OrdersCompraChart->Size = System::Drawing::Size(572, 421);
			this->OrdersCompraChart->TabIndex = 2;
			this->OrdersCompraChart->Text = L"chart1";
			// 
			// ReportesCompraAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(928, 582);
			this->Controls->Add(this->OrdersCompraChart);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ReportesCompraAdmin";
			this->Text = L"ReportesCompraAdmin";
			this->Load += gcnew System::EventHandler(this, &ReportesCompraAdmin::ReportesCompraAdmin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OrdersCompraChart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReportesCompraAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
		List <PurchaseOrder^>^ ordersList = Service::QueryAllPurchaseOrders();
		for (int i = 0; i < ordersList->Count; i++) {
			OrdersCompraChart->Series["Monto Total"]->Points->Add(ordersList[i]->TotalPrice);
			OrdersCompraChart->Series["Monto Total"]->Points[i]->AxisLabel = "" + ordersList[i]->id;
			OrdersCompraChart->Series["Monto Total"]->Points[i]->Label = "" + ordersList[i]->TotalPrice;
		}
	}
	};
}
