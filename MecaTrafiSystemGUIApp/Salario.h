#pragma once

namespace MecaTrafiSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace MecaTrafiSystemService;
	using namespace MecaTrafiSystemModel;

	/// <summary>
	/// Resumen de RobotsReportForm
	/// </summary>
	public ref class RobotsReportForm : public System::Windows::Forms::Form
	{
	private:
		List<Employee^>^ robotList = gcnew List<Employee^>();
		// determines number lines of text each row should allow:
		static int iRowHeight = 1;
		StringFormat^ strFormat;	// to format the grid rows.
		ArrayList^ arrColumnLefts;	// left coordinates of columns
		ArrayList^ arrColumnWidths;	// column widths
		int iCellHeight;			// datagridview cell dimensions
		int iTotalWidth;
		int iRow;					// counter
		bool bFirstPage;			// to check whether we are printing first page
		bool bNewPage;				// to check whether we are printing a new page
		int iHeaderHeight;			// header height
		String^ reportTitle = "Reporte de Robots";

	public:
		RobotsReportForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			cmbSpeed->SelectedIndex = 0;
			arrColumnLefts = gcnew ArrayList();
			arrColumnWidths = gcnew ArrayList();
			iCellHeight = 0;
			iTotalWidth = 0;
			iRow = 0;
			bFirstPage = false;
			bNewPage = false;
			iHeaderHeight = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RobotsReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtBrand;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbSpeed;
	private: System::Windows::Forms::DataGridView^ dgvRobots;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotBrand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotSpeed;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::Button^ btnPreview;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBrand = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbSpeed = (gcnew System::Windows::Forms::ComboBox());
			this->dgvRobots = (gcnew System::Windows::Forms::DataGridView());
			this->RobotId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotBrand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotSpeed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->btnPreview = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Marca:";
			// 
			// txtBrand
			// 
			this->txtBrand->Location = System::Drawing::Point(189, 47);
			this->txtBrand->Name = L"txtBrand";
			this->txtBrand->Size = System::Drawing::Size(334, 31);
			this->txtBrand->TabIndex = 1;
			this->txtBrand->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RobotsReportForm::txtBrand_KeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(653, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Velocidad mínima:";
			// 
			// cmbSpeed
			// 
			this->cmbSpeed->FormattingEnabled = true;
			this->cmbSpeed->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10"
			});
			this->cmbSpeed->Location = System::Drawing::Point(875, 45);
			this->cmbSpeed->Name = L"cmbSpeed";
			this->cmbSpeed->Size = System::Drawing::Size(176, 33);
			this->cmbSpeed->TabIndex = 3;
			// 
			// dgvRobots
			// 
			this->dgvRobots->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRobots->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->RobotId, this->RobotBrand,
					this->RobotSpeed
			});
			this->dgvRobots->Location = System::Drawing::Point(74, 208);
			this->dgvRobots->Name = L"dgvRobots";
			this->dgvRobots->RowHeadersWidth = 82;
			this->dgvRobots->RowTemplate->Height = 33;
			this->dgvRobots->Size = System::Drawing::Size(990, 458);
			this->dgvRobots->TabIndex = 4;
			// 
			// RobotId
			// 
			this->RobotId->HeaderText = L"Id";
			this->RobotId->MinimumWidth = 10;
			this->RobotId->Name = L"RobotId";
			this->RobotId->Width = 50;
			// 
			// RobotBrand
			// 
			this->RobotBrand->HeaderText = L"Marca";
			this->RobotBrand->MinimumWidth = 10;
			this->RobotBrand->Name = L"RobotBrand";
			this->RobotBrand->Width = 300;
			// 
			// RobotSpeed
			// 
			this->RobotSpeed->HeaderText = L"Velocidad";
			this->RobotSpeed->MinimumWidth = 10;
			this->RobotSpeed->Name = L"RobotSpeed";
			this->RobotSpeed->Width = 200;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(74, 123);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(334, 41);
			this->btnSearch->TabIndex = 5;
			this->btnSearch->Text = L"Consultar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &RobotsReportForm::btnSearch_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->Location = System::Drawing::Point(755, 123);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(309, 41);
			this->btnPrint->TabIndex = 6;
			this->btnPrint->Text = L"Imprimir";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &RobotsReportForm::btnPrint_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &RobotsReportForm::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &RobotsReportForm::printDocument1_PrintPage);
			// 
			// btnPreview
			// 
			this->btnPreview->Location = System::Drawing::Point(452, 123);
			this->btnPreview->Name = L"btnPreview";
			this->btnPreview->Size = System::Drawing::Size(261, 41);
			this->btnPreview->TabIndex = 7;
			this->btnPreview->Text = L"Vista preliminar";
			this->btnPreview->UseVisualStyleBackColor = true;
			this->btnPreview->Click += gcnew System::EventHandler(this, &RobotsReportForm::btnPreview_Click);
			// 
			// RobotsReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1161, 726);
			this->Controls->Add(this->btnPreview);
			this->Controls->Add(this->btnPrint);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->dgvRobots);
			this->Controls->Add(this->cmbSpeed);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtBrand);
			this->Controls->Add(this->label1);
			this->Name = L"RobotsReportForm";
			this->Text = L"RobotsReportForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:

		System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {

		}
		void FillDGVRobots() {
			dgvRobots->Rows->Clear();
			for (int i = 0; i < robotList->Count; i++) {
				dgvRobots->Rows->Add(gcnew array<String^>{
					"" + robotList[i]->Id,
						robotList[i]->Name,
						"" + robotList[i]->Lastname});
			}
		}




	private: System::Void txtBrand_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	}
	private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
		// open the print dialog
		PrintDialog^ printDialog = gcnew PrintDialog();
		printDialog->Document = printDocument1;
		printDialog->UseEXDialog = true;

		// get the document
		if (System::Windows::Forms::DialogResult::OK == printDialog->ShowDialog()) {
			printDocument1->DocumentName = "Patient Page Print";
			printDocument1->Print();
		}
	}
	private: System::Void btnPreview_Click(System::Object^ sender, System::EventArgs^ e) {
		// open the print preview dialog - this will do all the required work
		PrintPreviewDialog^ objPPdialog = gcnew PrintPreviewDialog();
		objPPdialog->Document = printDocument1;
		objPPdialog->ShowDialog();
	}
	private: System::Void printDocument1_BeginPrint(System::Object^ sender, System::Drawing::Printing::PrintEventArgs^ e) {
		try {
			strFormat = gcnew StringFormat();
			// horizontal alignment
			strFormat->Alignment = StringAlignment::Near;
			// vertical alignment
			strFormat->LineAlignment = StringAlignment::Center;
			// text needs trimming to the nearest character, and an ellipsis is inserted at the end of a trimmed line
			strFormat->Trimming = StringTrimming::EllipsisCharacter;

			arrColumnLefts->Clear();
			arrColumnWidths->Clear();
			iCellHeight = 0;
			iRow = 0;
			bFirstPage = true;
			bNewPage = true;

			// calculating total width
			iTotalWidth = 0;
			for each (DataGridViewColumn ^ dgvGridCol in dgvRobots->Columns) {
				iTotalWidth += dgvGridCol->Width;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
		try {
			// e->MarginBounds gives printed page dimensions within the margins
			int iLeftMargin = e->MarginBounds.Left;
			int iTopMargin = e->MarginBounds.Top;
			// flag to indicate more pages need printing:
			bool bMorePagesToPrint = false;
			int iTmpWidth = 0;

			// for the first page, set cell width and header height
			if (bFirstPage) {
				for each (DataGridViewColumn ^ GridCol in dgvRobots->Columns) {
					// set column widths relative to the margin bounds:
					iTmpWidth = CalculateColWidth(GridCol->Width, e->MarginBounds.Width);
					// MeasureString measure string when drawn with specified font
					iHeaderHeight = (int)(e->Graphics->MeasureString(
						GridCol->HeaderText,
						GridCol->InheritedStyle->Font,
						iTmpWidth).Height) + 11;
					// save width and height of headers
					arrColumnLefts->Add(iLeftMargin);
					arrColumnWidths->Add(iTmpWidth);
					// move the margin
					iLeftMargin += iTmpWidth;
				}
			}

			// loop through each line of the DataGridView
			while (iRow < dgvRobots->Rows->Count) {
				DataGridViewRow^ gridRow = dgvRobots->Rows[iRow];
				// set cell height
				iCellHeight = (gridRow->Height * (iRowHeight)) + 7;	// 7 is margin
				int iCount = 0;
				// set some flags when page needs changing:
				if (iTopMargin + iCellHeight >= e->MarginBounds.Height + e->MarginBounds.Top) {
					bNewPage = true;
					bFirstPage = false;
					bMorePagesToPrint = true;
					break;
				}
				else {
					if (bNewPage) {
						// draw the header 
						e->Graphics->DrawString(
							reportTitle,
							gcnew System::Drawing::Font(dgvRobots->Font->Name, 16.0F, FontStyle::Bold, dgvRobots->Font->Unit),
							Brushes::Black,
							(float)e->MarginBounds.Left,
							(float)e->MarginBounds.Top - e->Graphics->MeasureString(
								reportTitle,
								gcnew System::Drawing::Font(dgvRobots->Font, FontStyle::Bold),
								e->MarginBounds.Width).Height
						);


						e->Graphics->DrawImage(gcnew Bitmap("Resources/Logo2.jpeg"), 60, 20);

						// draw today's dateTime
						String^ strDate = DateTime::Now.ToLongDateString() + " " + DateTime::Now.ToShortTimeString();
						e->Graphics->DrawString(
							strDate,
							gcnew System::Drawing::Font(dgvRobots->Font, FontStyle::Bold),
							Brushes::Black,
							e->MarginBounds.Left + (e->MarginBounds.Width - e->Graphics->MeasureString(
								strDate,
								gcnew System::Drawing::Font(dgvRobots->Font, FontStyle::Bold),
								e->MarginBounds.Width).Width),
							e->MarginBounds.Top - e->Graphics->MeasureString(
								reportTitle,
								gcnew System::Drawing::Font(dgvRobots->Font, FontStyle::Bold),
								e->MarginBounds.Width).Height + 10
						);

						// Draw the DataGridView's header row
						iTopMargin = e->MarginBounds.Top + 10;
						for each (DataGridViewColumn ^ gridCol in dgvRobots->Columns) {
							// Fill the header rectangle
							e->Graphics->FillRectangle(
								gcnew SolidBrush(Color::LightGray),
								Rectangle(
									(int)arrColumnLefts[iCount],
									iTopMargin,
									(int)arrColumnWidths[iCount],
									iHeaderHeight
								)
							);
							// Draw the header rectangle
							e->Graphics->DrawRectangle(
								Pens::Black,
								Rectangle(
									(int)arrColumnLefts[iCount],
									iTopMargin,
									(int)arrColumnWidths[iCount],
									iHeaderHeight
								)
							);
							// Draw the header text
							e->Graphics->DrawString(
								gridCol->HeaderText,
								gridCol->InheritedStyle->Font,
								gcnew SolidBrush(
									gridCol->InheritedStyle->ForeColor),
								Rectangle(
									(int)arrColumnLefts[iCount],
									iTopMargin,
									(int)arrColumnWidths[iCount],
									iHeaderHeight
								),
								strFormat
							);

							iCount++;
						}
						bNewPage = false;
						iTopMargin += iHeaderHeight;
					} // END if(bNewPage)

					iCount = 0;

					// Draw text of subsequent rows on this page
					for each (DataGridViewCell ^ cel in gridRow->Cells) {
						if (cel->Value != nullptr) {
							e->Graphics->DrawString(
								cel->Value->ToString(),
								cel->InheritedStyle->Font,
								gcnew SolidBrush(cel->InheritedStyle->ForeColor),
								Rectangle(
									(int)arrColumnLefts[iCount],
									iTopMargin,
									(int)arrColumnWidths[iCount],
									iCellHeight
								),
								strFormat
							);
						}

						// Draw cell borders
						e->Graphics->DrawRectangle(
							Pens::Black,
							Rectangle(
								(int)arrColumnLefts[iCount],
								iTopMargin,
								(int)arrColumnWidths[iCount],
								iCellHeight
							)
						);
						iCount++;
					}
				} // END else
				iRow++;
				iTopMargin += iCellHeight;
			} // END while

			 // if more lines are present, // if more lines are present, invoke printDocument1_PrintPage() again
			if (bMorePagesToPrint) {
				e->HasMorePages = true;
			}
			else {
				e->HasMorePages = false;
			}
		} // END try

		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: int CalculateColWidth(int gridColWidth, int marginWidth)
	{

		int thisWidth = 1;
		// Math::Floor returns the largest integer less than or equal to the specified double.
		thisWidth = (int)(System::Math::Floor(
			(double)(
				(double)gridColWidth / (double)iTotalWidth * (double)marginWidth
				)
		)
			);
		return thisWidth;
	}
	};
}
