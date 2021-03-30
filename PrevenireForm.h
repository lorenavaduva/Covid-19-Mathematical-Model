#pragma once
#include "Header Files/Prevenire.h"

namespace tEST23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PrevenireForm
	/// </summary>
	public ref class PrevenireForm : public System::Windows::Forms::Form
	{
	public:
		PrevenireForm(void)
		{
			InitializeComponent();
			chart1->Visible = true;
			chart2->Visible = false;
			GenerateGraph1();
			GenerateGraph2();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PrevenireForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;

	private: Guna::UI::WinForms::GunaElipsePanel^ gunaElipsePanel1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PrevenireForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::LineAnnotation^ lineAnnotation1 = (gcnew System::Windows::Forms::DataVisualization::Charting::LineAnnotation());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::LineAnnotation^ lineAnnotation2 = (gcnew System::Windows::Forms::DataVisualization::Charting::LineAnnotation());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaElipsePanel1 = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			this->gunaElipsePanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox1.Image")));
			this->gunaPictureBox1->Location = System::Drawing::Point(80, 373);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(903, 290);
			this->gunaPictureBox1->TabIndex = 12;
			this->gunaPictureBox1->TabStop = false;
			// 
			// gunaGradientButton1
			// 
			this->gunaGradientButton1->AnimationHoverSpeed = 0.05F;
			this->gunaGradientButton1->AnimationSpeed = 0.02F;
			this->gunaGradientButton1->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientButton1->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton1->BaseColor2 = System::Drawing::Color::MediumTurquoise;
			this->gunaGradientButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
			this->gunaGradientButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaGradientButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton1.Image")));
			this->gunaGradientButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton1->Location = System::Drawing::Point(857, 57);
			this->gunaGradientButton1->Name = L"gunaGradientButton1";
			this->gunaGradientButton1->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton1->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->OnHoverForeColor = System::Drawing::Color::AntiqueWhite;
			this->gunaGradientButton1->OnHoverImage = nullptr;
			this->gunaGradientButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton1->Radius = 20;
			this->gunaGradientButton1->Size = System::Drawing::Size(196, 42);
			this->gunaGradientButton1->TabIndex = 26;
			this->gunaGradientButton1->Text = L"Efectul Măștilor";
			this->gunaGradientButton1->Click += gcnew System::EventHandler(this, &PrevenireForm::gunaGradientButton1_Click);
			// 
			// gunaGradientButton2
			// 
			this->gunaGradientButton2->AnimationHoverSpeed = 0.05F;
			this->gunaGradientButton2->AnimationSpeed = 0.02F;
			this->gunaGradientButton2->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientButton2->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton2->BaseColor2 = System::Drawing::Color::MediumTurquoise;
			this->gunaGradientButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
			this->gunaGradientButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaGradientButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton2.Image")));
			this->gunaGradientButton2->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton2->Location = System::Drawing::Point(857, 122);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::AntiqueWhite;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Radius = 20;
			this->gunaGradientButton2->Size = System::Drawing::Size(196, 42);
			this->gunaGradientButton2->TabIndex = 27;
			this->gunaGradientButton2->Text = L"Distanțarea socială";
			this->gunaGradientButton2->Click += gcnew System::EventHandler(this, &PrevenireForm::gunaGradientButton2_Click);
			// 
			// gunaElipsePanel1
			// 
			this->gunaElipsePanel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaElipsePanel1->Controls->Add(this->richTextBox1);
			this->gunaElipsePanel1->Controls->Add(this->chart2);
			this->gunaElipsePanel1->Controls->Add(this->chart1);
			this->gunaElipsePanel1->Location = System::Drawing::Point(23, 23);
			this->gunaElipsePanel1->Name = L"gunaElipsePanel1";
			this->gunaElipsePanel1->Radius = 30;
			this->gunaElipsePanel1->Size = System::Drawing::Size(818, 327);
			this->gunaElipsePanel1->TabIndex = 32;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->richTextBox1->ForeColor = System::Drawing::Color::MediumTurquoise;
			this->richTextBox1->Location = System::Drawing::Point(517, 17);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(298, 307);
			this->richTextBox1->TabIndex = 33;
			this->richTextBox1->Text = L"";
			// 
			// chart2
			// 
			lineAnnotation1->LineColor = System::Drawing::Color::Transparent;
			lineAnnotation1->Name = L"LineAnnotation1";
			this->chart2->Annotations->Add(lineAnnotation1);
			this->chart2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->chart2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->chart2->BackImageTransparentColor = System::Drawing::Color::Transparent;
			this->chart2->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Unscaled;
			this->chart2->BackSecondaryColor = System::Drawing::Color::Transparent;
			this->chart2->BorderlineColor = System::Drawing::Color::Transparent;
			this->chart2->BorderSkin->BackColor = System::Drawing::Color::Black;
			this->chart2->BorderSkin->PageColor = System::Drawing::Color::DarkRed;
			chartArea1->AxisX->InterlacedColor = System::Drawing::Color::Maroon;
			chartArea1->AxisX->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->LabelStyle->ForeColor = System::Drawing::Color::Violet;
			chartArea1->AxisX->LabelStyle->Interval = 0;
			chartArea1->AxisX->LabelStyle->IntervalOffset = 0;
			chartArea1->AxisX->LabelStyle->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea1->AxisX->LabelStyle->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
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
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Alignment = System::Drawing::StringAlignment::Far;
			legend1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->ForeColor = System::Drawing::Color::Violet;
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(0, 3);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::TopBottom;
			series1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			series1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::SplineArea;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			series1->LabelBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->LabelBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->LabelForeColor = System::Drawing::Color::DarkRed;
			series1->Legend = L"Legend1";
			series1->MarkerBorderColor = System::Drawing::Color::DarkSlateGray;
			series1->MarkerColor = System::Drawing::Color::Aqua;
			series1->MarkerSize = 4;
			series1->Name = L"Fara masuri de preventie";
			series1->ShadowColor = System::Drawing::Color::Purple;
			series1->ShadowOffset = 5;
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::TopBottom;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::SplineArea;
			series2->Color = System::Drawing::Color::Aqua;
			series2->Legend = L"Legend1";
			series2->MarkerSize = 4;
			series2->Name = L"Cu distantare sociala";
			series2->ShadowColor = System::Drawing::Color::DarkMagenta;
			series2->ShadowOffset = 6;
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart2->Series->Add(series1);
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(496, 324);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			this->chart2->TextAntiAliasingQuality = System::Windows::Forms::DataVisualization::Charting::TextAntiAliasingQuality::Normal;
			this->chart2->Click += gcnew System::EventHandler(this, &PrevenireForm::chart2_Click);
			// 
			// chart1
			// 
			lineAnnotation2->LineColor = System::Drawing::Color::Transparent;
			lineAnnotation2->Name = L"LineAnnotation1";
			this->chart1->Annotations->Add(lineAnnotation2);
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->chart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->chart1->BackImageTransparentColor = System::Drawing::Color::Transparent;
			this->chart1->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Unscaled;
			this->chart1->BackSecondaryColor = System::Drawing::Color::Transparent;
			this->chart1->BorderlineColor = System::Drawing::Color::Transparent;
			this->chart1->BorderSkin->BackColor = System::Drawing::Color::Black;
			this->chart1->BorderSkin->PageColor = System::Drawing::Color::DarkRed;
			chartArea2->AxisX->InterlacedColor = System::Drawing::Color::Maroon;
			chartArea2->AxisX->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea2->AxisX->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea2->AxisX->LabelStyle->ForeColor = System::Drawing::Color::Violet;
			chartArea2->AxisX->LabelStyle->Interval = 0;
			chartArea2->AxisX->LabelStyle->IntervalOffset = 0;
			chartArea2->AxisX->LabelStyle->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea2->AxisX->LabelStyle->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea2->AxisX->LabelStyle->IsEndLabelVisible = false;
			chartArea2->AxisX->LabelStyle->TruncatedLabels = true;
			chartArea2->AxisX->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			chartArea2->AxisX->LineWidth = 3;
			chartArea2->AxisX->MajorGrid->LineColor = System::Drawing::Color::Transparent;
			chartArea2->AxisX->MinorGrid->LineColor = System::Drawing::Color::Transparent;
			chartArea2->AxisX->TitleForeColor = System::Drawing::Color::DarkRed;
			chartArea2->AxisX2->LineColor = System::Drawing::Color::DarkRed;
			chartArea2->AxisY->InterlacedColor = System::Drawing::Color::Transparent;
			chartArea2->AxisY->IsInterlaced = true;
			chartArea2->AxisY->LabelStyle->ForeColor = System::Drawing::Color::Violet;
			chartArea2->AxisY->LabelStyle->Interval = 0;
			chartArea2->AxisY->LabelStyle->IntervalOffset = 0;
			chartArea2->AxisY->LabelStyle->IntervalOffsetType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea2->AxisY->LabelStyle->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Number;
			chartArea2->AxisY->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			chartArea2->AxisY->LineWidth = 3;
			chartArea2->AxisY->MajorGrid->Interval = 0;
			chartArea2->AxisY->MajorGrid->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Auto;
			chartArea2->AxisY->MajorGrid->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			chartArea2->AxisY->MajorTickMark->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(82)));
			chartArea2->AxisY2->LineColor = System::Drawing::Color::Maroon;
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			chartArea2->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			chartArea2->BorderColor = System::Drawing::Color::IndianRed;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Alignment = System::Drawing::StringAlignment::Far;
			legend2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			legend2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Top;
			legend2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend2->ForeColor = System::Drawing::Color::Violet;
			legend2->IsTextAutoFit = false;
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(3, 0);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series3->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::TopBottom;
			series3->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Center;
			series3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::SplineArea;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			series3->LabelBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->LabelBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->LabelForeColor = System::Drawing::Color::DarkRed;
			series3->Legend = L"Legend1";
			series3->MarkerBorderColor = System::Drawing::Color::DarkSlateGray;
			series3->MarkerColor = System::Drawing::Color::Aqua;
			series3->MarkerSize = 4;
			series3->Name = L"Fara masuri de preventie";
			series3->ShadowColor = System::Drawing::Color::Purple;
			series3->ShadowOffset = 5;
			series3->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series3->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series4->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::TopBottom;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::SplineArea;
			series4->Color = System::Drawing::Color::Aqua;
			series4->Legend = L"Legend1";
			series4->MarkerSize = 4;
			series4->Name = L"Cu masti de protectie";
			series4->ShadowColor = System::Drawing::Color::DarkMagenta;
			series4->ShadowOffset = 6;
			series4->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series4->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(496, 324);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			this->chart1->TextAntiAliasingQuality = System::Windows::Forms::DataVisualization::Charting::TextAntiAliasingQuality::Normal;
			// 
			// PrevenireForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1065, 647);
			this->Controls->Add(this->gunaElipsePanel1);
			this->Controls->Add(this->gunaGradientButton2);
			this->Controls->Add(this->gunaGradientButton1);
			this->Controls->Add(this->gunaPictureBox1);
			this->Name = L"PrevenireForm";
			this->Text = L"PrevenireForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			this->gunaElipsePanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		void GenerateGraph1()
		{
			int dimensiune,i;
			Extra::Prevenire obiect;
			
			auto chart = chart1->ChartAreas[0];

			chart->AxisX->Minimum = 0;
			chart->AxisX->Maximum = 25;
			chart->AxisX->Interval = 1;

			chart->AxisY->Minimum = 0;
			chart->AxisY->Maximum = 18;
			chart->AxisY->Interval = 1;

			chart1->ChartAreas[0]->AxisX->IntervalOffset = 0;

			dimensiune = obiect.GetGeneralCurve();
			for (i = 0; i < dimensiune; i++)
			{
				chart1->Series["Fara masuri de preventie"]->Points->AddXY(obiect.x[i], obiect.y[i]);
			}

			dimensiune = obiect.GetMaskCurve();
			for (i = 0; i < dimensiune; i++)
			{
				chart1->Series["Cu masti de protectie"]->Points->AddXY(obiect.x[i], obiect.y[i]);
			}
			

			
		   /*chart1->Series["Fara masuri de preventie"]->Points->AddXY( 0,0);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 1.31,2.314 );
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 2.302, 3.27 );
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 2.988, 4.828 );
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 3.22,5.254 );
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 3.466, 6.34);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 3.825, 7.66);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 4.303, 12.48);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 4.661, 14.045);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 5.02, 15.46);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 5.49, 16.74);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 6.215, 17.59);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 7.17 , 17.733);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 8.127, 16.17);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 8.7, 14.18);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 8.96, 12);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 9.56, 8);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 9.8, 6.388);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 10.87,3.7);
		   chart1->Series["Fara masuri de preventie"]->Points->AddXY( 11.83, 2.27); */





	
		}

	private:
		void GenerateGraph2()
		{
			int dimensiune, i;
			Extra::Prevenire obiect;

			auto chart = chart2->ChartAreas[0];

			chart->AxisX->Minimum = 0;
			chart->AxisX->Maximum = 25;
			chart->AxisX->Interval = 1;

			chart->AxisY->Minimum = 0;
			chart->AxisY->Maximum = 18;
			chart->AxisY->Interval = 1;

			chart2->ChartAreas[0]->AxisX->IntervalOffset = 0;

			dimensiune = obiect.GetGeneralCurve();
			for (i = 0; i < dimensiune; i++)
			{
				chart2->Series["Fara masuri de preventie"]->Points->AddXY(obiect.x[i], obiect.y[i]);
			}

			dimensiune = obiect.GetDistancingCurve();
			for (i = 0; i < dimensiune; i++)
			{
				chart2->Series["Cu distantare sociala"]->Points->AddXY(obiect.x[i], obiect.y[i]);
			}

		}

    



	private: 
		System::Void gunaGradientButton1_Click(System::Object^ sender, System::EventArgs^ e) 
		{   
			if (chart2->Visible == true)
			{
				chart2->Visible = false;
				chart1->Visible = true;
			}

			Extra::Prevenire object;
			Extra::Factori obiect;
			
			std::string auxiliar = object.AfisareMasti(obiect);
			String^ auxiliar2 = gcnew String(auxiliar.c_str());


			this->richTextBox1->Text = auxiliar2;

			
			
		}
	private: 
		System::Void gunaGradientButton2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			if (chart1->Visible == true)
			{
				chart1->Visible = false;
				chart2->Visible = true;
			}

			Extra::Prevenire object;
			Extra::Factori obiect;

			std::string auxiliar = object.AfisareDistantare(obiect);
			
			String^ auxiliar2 = gcnew String(auxiliar.c_str());


			this->richTextBox1->Text = auxiliar2;
		}
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
