#pragma once
#include "Header Files/Predictie_decese.h"
#include <string>

namespace tEST23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeceseForm
	/// </summary>
	public ref class DeceseForm : public System::Windows::Forms::Form
	{
	public:
		DeceseForm(void)
		{
			InitializeComponent();
			GenerateGraph();
			HidePredictie();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeceseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: Guna::UI::WinForms::GunaGradient2Panel^ CazuriPanel;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaGradientTileButton^ gunaGradientTileButton1;
	private: Guna::UI::WinForms::GunaGradient2Panel^ PredictiePanel;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox3;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox2;
	private: Guna::UI::WinForms::GunaTextBox^ gunaTextBox1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel4;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel5;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::LineAnnotation^ lineAnnotation1 = (gcnew System::Windows::Forms::DataVisualization::Charting::LineAnnotation());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeceseForm::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->CazuriPanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaGradientTileButton1 = (gcnew Guna::UI::WinForms::GunaGradientTileButton());
			this->PredictiePanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaTextBox3 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox2 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaTextBox1 = (gcnew Guna::UI::WinForms::GunaTextBox());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel5 = (gcnew Guna::UI::WinForms::GunaLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->CazuriPanel->SuspendLayout();
			this->PredictiePanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			lineAnnotation1->LineColor = System::Drawing::Color::Transparent;
			lineAnnotation1->Name = L"LineAnnotation1";
			this->chart1->Annotations->Add(lineAnnotation1);
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->chart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->chart1->BackImageTransparentColor = System::Drawing::Color::Transparent;
			this->chart1->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Unscaled;
			this->chart1->BackSecondaryColor = System::Drawing::Color::Transparent;
			this->chart1->BorderlineColor = System::Drawing::Color::Transparent;
			this->chart1->BorderSkin->BackColor = System::Drawing::Color::Black;
			this->chart1->BorderSkin->PageColor = System::Drawing::Color::DarkRed;
			chartArea1->AxisX->InterlacedColor = System::Drawing::Color::Maroon;
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Months;
			chartArea1->AxisX->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Months;
			chartArea1->AxisX->LabelStyle->ForeColor = System::Drawing::Color::Violet;
			chartArea1->AxisX->LabelStyle->IsEndLabelVisible = false;
			chartArea1->AxisX->LabelStyle->TruncatedLabels = true;
			chartArea1->AxisX->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			chartArea1->AxisX->LineWidth = 3;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::Color::Transparent;
			chartArea1->AxisX->MinorGrid->LineColor = System::Drawing::Color::Transparent;
			chartArea1->AxisX->TitleForeColor = System::Drawing::Color::DarkRed;
			chartArea1->AxisX2->LineColor = System::Drawing::Color::DarkRed;
			chartArea1->AxisY->InterlacedColor = System::Drawing::Color::Transparent;
			chartArea1->AxisY->IsInterlaced = true;
			chartArea1->AxisY->LabelStyle->ForeColor = System::Drawing::Color::Violet;
			chartArea1->AxisY->LabelStyle->Interval = 0;
			chartArea1->AxisY->LabelStyle->IntervalOffset = 0;
			chartArea1->AxisY->LabelStyle->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisY->LabelStyle->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisY->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			chartArea1->AxisY->LineWidth = 3;
			chartArea1->AxisY->MajorGrid->Interval = 0;
			chartArea1->AxisY->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			chartArea1->AxisY->MajorTickMark->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
			chartArea1->AxisY2->LineColor = System::Drawing::Color::Maroon;
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			chartArea1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			chartArea1->BorderColor = System::Drawing::Color::IndianRed;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Alignment = System::Drawing::StringAlignment::Far;
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->ForeColor = System::Drawing::Color::Violet;
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(42, 21);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::TopBottom;
			series1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			series1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			series1->LabelBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->LabelBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->LabelForeColor = System::Drawing::Color::DarkRed;
			series1->Legend = L"Legend1";
			series1->MarkerBorderColor = System::Drawing::Color::DarkSlateGray;
			series1->MarkerColor = System::Drawing::Color::DarkTurquoise;
			series1->MarkerSize = 10;
			series1->MarkerStyle = System::Windows::Forms::DataVisualization::Charting::MarkerStyle::Circle;
			series1->Name = L"Series1";
			series1->ShadowColor = System::Drawing::Color::Purple;
			series1->ShadowOffset = 5;
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Single;
			series1->YValuesPerPoint = 6;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(973, 343);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			this->chart1->TextAntiAliasingQuality = System::Windows::Forms::DataVisualization::Charting::TextAntiAliasingQuality::Normal;
			// 
			// CazuriPanel
			// 
			this->CazuriPanel->AutoSize = true;
			this->CazuriPanel->BackColor = System::Drawing::Color::Transparent;
			this->CazuriPanel->Controls->Add(this->gunaLabel1);
			this->CazuriPanel->Controls->Add(this->gunaGradientTileButton1);
			this->CazuriPanel->GradientColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->CazuriPanel->GradientColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->CazuriPanel->GradientMode = System::Drawing::Drawing2D::LinearGradientMode::Vertical;
			this->CazuriPanel->Location = System::Drawing::Point(42, 395);
			this->CazuriPanel->Name = L"CazuriPanel";
			this->CazuriPanel->Radius = 10;
			this->CazuriPanel->Size = System::Drawing::Size(353, 220);
			this->CazuriPanel->TabIndex = 14;
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->gunaLabel1->ForeColor = System::Drawing::Color::Violet;
			this->gunaLabel1->Location = System::Drawing::Point(32, 19);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(267, 28);
			this->gunaLabel1->TabIndex = 2;
			this->gunaLabel1->Text = L"Predicție pentru luna ianuarie";
			// 
			// gunaGradientTileButton1
			// 
			this->gunaGradientTileButton1->Animated = true;
			this->gunaGradientTileButton1->AnimationHoverSpeed = 0.06F;
			this->gunaGradientTileButton1->AnimationSpeed = 0.02F;
			this->gunaGradientTileButton1->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientTileButton1->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientTileButton1->BaseColor2 = System::Drawing::Color::MediumSeaGreen;
			this->gunaGradientTileButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientTileButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientTileButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 13.75F, System::Drawing::FontStyle::Bold));
			this->gunaGradientTileButton1->ForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientTileButton1.Image")));
			this->gunaGradientTileButton1->ImageSize = System::Drawing::Size(52, 52);
			this->gunaGradientTileButton1->Location = System::Drawing::Point(111, 73);
			this->gunaGradientTileButton1->Name = L"gunaGradientTileButton1";
			this->gunaGradientTileButton1->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientTileButton1->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientTileButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientTileButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientTileButton1->OnHoverImage = nullptr;
			this->gunaGradientTileButton1->OnPressedColor = System::Drawing::Color::HotPink;
			this->gunaGradientTileButton1->Radius = 55;
			this->gunaGradientTileButton1->Size = System::Drawing::Size(111, 111);
			this->gunaGradientTileButton1->TabIndex = 1;
			this->gunaGradientTileButton1->Text = L"Click me";
			this->gunaGradientTileButton1->Click += gcnew System::EventHandler(this, &DeceseForm::gunaGradientTileButton1_Click);
			// 
			// PredictiePanel
			// 
			this->PredictiePanel->AutoSize = true;
			this->PredictiePanel->BackColor = System::Drawing::Color::Transparent;
			this->PredictiePanel->Controls->Add(this->gunaTextBox3);
			this->PredictiePanel->Controls->Add(this->gunaTextBox2);
			this->PredictiePanel->Controls->Add(this->gunaTextBox1);
			this->PredictiePanel->Controls->Add(this->gunaLabel4);
			this->PredictiePanel->Controls->Add(this->gunaLabel3);
			this->PredictiePanel->Controls->Add(this->gunaLabel2);
			this->PredictiePanel->GradientColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->PredictiePanel->GradientColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->PredictiePanel->GradientMode = System::Drawing::Drawing2D::LinearGradientMode::Vertical;
			this->PredictiePanel->Location = System::Drawing::Point(426, 395);
			this->PredictiePanel->Name = L"PredictiePanel";
			this->PredictiePanel->Radius = 10;
			this->PredictiePanel->Size = System::Drawing::Size(589, 220);
			this->PredictiePanel->TabIndex = 15;
			// 
			// gunaTextBox3
			// 
			this->gunaTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox3->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox3->FocusedBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox3->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox3->FocusedForeColor = System::Drawing::Color::Aqua;
			this->gunaTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->gunaTextBox3->ForeColor = System::Drawing::Color::Aquamarine;
			this->gunaTextBox3->Location = System::Drawing::Point(308, 121);
			this->gunaTextBox3->Name = L"gunaTextBox3";
			this->gunaTextBox3->PasswordChar = '\0';
			this->gunaTextBox3->SelectedText = L"";
			this->gunaTextBox3->Size = System::Drawing::Size(160, 36);
			this->gunaTextBox3->TabIndex = 7;
			this->gunaTextBox3->Text = L"gunaTextBox3";
			// 
			// gunaTextBox2
			// 
			this->gunaTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox2->FocusedBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox2->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox2->FocusedForeColor = System::Drawing::Color::Aqua;
			this->gunaTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->gunaTextBox2->ForeColor = System::Drawing::Color::Aquamarine;
			this->gunaTextBox2->Location = System::Drawing::Point(308, 71);
			this->gunaTextBox2->Name = L"gunaTextBox2";
			this->gunaTextBox2->PasswordChar = '\0';
			this->gunaTextBox2->SelectedText = L"";
			this->gunaTextBox2->Size = System::Drawing::Size(160, 36);
			this->gunaTextBox2->TabIndex = 6;
			this->gunaTextBox2->Text = L"gunaTextBox2";
			// 
			// gunaTextBox1
			// 
			this->gunaTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gunaTextBox1->FocusedBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaTextBox1->FocusedBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaTextBox1->FocusedForeColor = System::Drawing::Color::Aqua;
			this->gunaTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaTextBox1->ForeColor = System::Drawing::Color::Aquamarine;
			this->gunaTextBox1->Location = System::Drawing::Point(308, 11);
			this->gunaTextBox1->Name = L"gunaTextBox1";
			this->gunaTextBox1->PasswordChar = '\0';
			this->gunaTextBox1->SelectedText = L"";
			this->gunaTextBox1->Size = System::Drawing::Size(160, 36);
			this->gunaTextBox1->TabIndex = 5;
			this->gunaTextBox1->Text = L"gunaTextBox1";
			// 
			// gunaLabel4
			// 
			this->gunaLabel4->AutoSize = true;
			this->gunaLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->gunaLabel4->ForeColor = System::Drawing::Color::Violet;
			this->gunaLabel4->Location = System::Drawing::Point(33, 121);
			this->gunaLabel4->Name = L"gunaLabel4";
			this->gunaLabel4->Size = System::Drawing::Size(222, 28);
			this->gunaLabel4->TabIndex = 4;
			this->gunaLabel4->Text = L"Acuratețea algoritmului:";
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->gunaLabel3->ForeColor = System::Drawing::Color::Violet;
			this->gunaLabel3->Location = System::Drawing::Point(33, 73);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(138, 28);
			this->gunaLabel3->TabIndex = 3;
			this->gunaLabel3->Text = L"Valoarea reală:";
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->gunaLabel2->ForeColor = System::Drawing::Color::Violet;
			this->gunaLabel2->Location = System::Drawing::Point(33, 19);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(269, 28);
			this->gunaLabel2->TabIndex = 2;
			this->gunaLabel2->Text = L"Valoarea prezisă de algoritm: ";
			// 
			// gunaLabel5
			// 
			this->gunaLabel5->AutoSize = true;
			this->gunaLabel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->gunaLabel5->ForeColor = System::Drawing::Color::Violet;
			this->gunaLabel5->Location = System::Drawing::Point(317, 34);
			this->gunaLabel5->Name = L"gunaLabel5";
			this->gunaLabel5->Size = System::Drawing::Size(461, 28);
			this->gunaLabel5->TabIndex = 3;
			this->gunaLabel5->Text = L"Rata de decese cauzate de SARS COV-2  în România";
			// 
			// DeceseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1065, 647);
			this->Controls->Add(this->gunaLabel5);
			this->Controls->Add(this->PredictiePanel);
			this->Controls->Add(this->CazuriPanel);
			this->Controls->Add(this->chart1);
			this->Name = L"DeceseForm";
			this->Text = L"DeceseForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->CazuriPanel->ResumeLayout(false);
			this->CazuriPanel->PerformLayout();
			this->PredictiePanel->ResumeLayout(false);
			this->PredictiePanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private:
		void HidePredictie()
		{
			tEST23::DeceseForm::PredictiePanel->Visible = false;
		}

		void ShowPredictie()
		{
			tEST23::DeceseForm::PredictiePanel->Visible = true;
		}

	private:
		void GenerateGraph()
		{

			//Creeam o instanta a clasei predictie cazuri
			Predictie1::Predictie_decese obiect;





			auto chart = chart1->ChartAreas[0];

			chart->AxisX->Minimum = 0;
			chart->AxisX->Maximum = 13;
			chart->AxisX->Interval = 1;

			chart->AxisY->Minimum = 0;
			chart->AxisY->Maximum = 5000;
			chart->AxisY->Interval = 100;

			chart1->ChartAreas[0]->AxisX->IntervalOffset = 1;

			DateTime^ minDate = gcnew DateTime(2020, 01, 01);
			DateTime^ maxDate = gcnew DateTime(2021, 02, 01); // or DateTime.Now;
			chart1->ChartAreas[0]->AxisX->Minimum = minDate->ToOADate();
			chart1->ChartAreas[0]->AxisX->Maximum = maxDate->ToOADate();


			DateTime^ date = gcnew DateTime(2020, (int)obiect.x[0] + 2, 01);

			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[0]);

			date = gcnew DateTime(2020, (int)obiect.x[1] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[1]);
			date = gcnew DateTime(2020, (int)obiect.x[2] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[2]);

			date = gcnew DateTime(2020, (int)obiect.x[3] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[3]);

			date = gcnew DateTime(2020, (int)obiect.x[4] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[4]);

			date = gcnew DateTime(2020, (int)obiect.x[5] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[5]);

			date = gcnew DateTime(2020, (int)obiect.x[6] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[6]);

			date = gcnew DateTime(2020, (int)obiect.x[7] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[7]);

			date = gcnew DateTime(2020, (int)obiect.x[8] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[8]);

			date = gcnew DateTime(2020, (int)obiect.x[9] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[9]);

			date = gcnew DateTime(2020, (int)obiect.x[10] + 2, 01);
			chart1->Series["Series1"]->Points->AddXY(date, obiect.y[10]);




			/*
			//chart1->Series["Series1"]->Points->AddXY( obiect.x[0], obiect.y[0]);
			//chart1->Series["Series1"]->Points->AddXY(obiect.x[1], obiect.y[1]);
			chart1->Series["Series1"]->Points->AddXY(obiect.x[2], obiect.y[2]);
			chart1->Series["Series1"]->Points->AddXY(obiect.x[3], obiect.y[3]);
			chart1->Series["Series1"]->Points->AddXY(obiect.x[4], obiect.y[4]);
			chart1->Series["Series1"]->Points->AddXY(obiect.x[5], obiect.y[5]);
			chart1->Series["Series1"]->Points->AddXY(obiect.x[6], obiect.y[6]);
			chart1->Series["Series1"]->Points->AddXY(obiect.x[7], obiect.y[7]);
			chart1->Series["Series1"]->Points->AddXY(obiect.x[8], obiect.y[8]);
			chart1->Series["Series1"]->Points->AddXY(obiect.x[9], obiect.y[9]);
			chart1->Series["Series1"]->Points->AddXY(obiect.x[10], obiect.y[10]);
			chart1->Series["Series1"]->Points->AddXY( 12 , predictie); */




		}

	private: 
		System::Void gunaGradientTileButton1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			Predictie1::Predictie_decese obiect;
			obiect.pred();
			double predictie = (double)obiect.afisare();

			DateTime^ date = gcnew DateTime(2021, 01, 01);
			chart1->Series["Series1"]->Points->AddXY(date, predictie);
			ShowPredictie();

			Predictie1::Predictie_decese test2;
			test2.pred();
			int aux = (int)test2.afisare();
			std::string auxiliar = std::to_string(aux);
			String^ auxiliar2 = gcnew String(auxiliar.c_str());

			this->gunaTextBox1->Text = auxiliar2 + "  Decese";

			aux = (int)test2.GetRealValue();
			auxiliar = std::to_string(aux);
			auxiliar2 = gcnew String(auxiliar.c_str());

			this->gunaTextBox2->Text = auxiliar2 + "  Decese";

			double aux4 = test2.Acuratete();
			auxiliar = std::to_string(aux4);
			auxiliar2 = gcnew String(auxiliar.c_str());

			this->gunaTextBox3->Text = auxiliar2 + "%";

		}
};
}
