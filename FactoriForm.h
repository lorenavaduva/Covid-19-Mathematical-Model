#pragma once
#include <string>
#include "Header Files/Factori.h" 

namespace tEST23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FactoriForm
	/// </summary>
	public ref class FactoriForm : public System::Windows::Forms::Form
	{
	public:
		FactoriForm(void)
		{
			InitializeComponent();
			NameButtons();
			gunaElipsePanel1->Visible = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FactoriForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: Guna::UI::WinForms::GunaPictureBox^ gunaPictureBox1;



	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton1;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton2;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton3;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton4;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton5;
	private: Guna::UI::WinForms::GunaGradientButton^ gunaGradientButton6;
	private: Guna::UI::WinForms::GunaElipsePanel^ gunaElipsePanel1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FactoriForm::typeid));
			this->gunaPictureBox1 = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->gunaGradientButton1 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton2 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton3 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton4 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton5 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaGradientButton6 = (gcnew Guna::UI::WinForms::GunaGradientButton());
			this->gunaElipsePanel1 = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->BeginInit();
			this->gunaElipsePanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaPictureBox1
			// 
			this->gunaPictureBox1->BaseColor = System::Drawing::Color::White;
			this->gunaPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaPictureBox1.Image")));
			this->gunaPictureBox1->Location = System::Drawing::Point(23, 385);
			this->gunaPictureBox1->Name = L"gunaPictureBox1";
			this->gunaPictureBox1->Size = System::Drawing::Size(860, 291);
			this->gunaPictureBox1->TabIndex = 11;
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
			this->gunaGradientButton1->Location = System::Drawing::Point(857, 27);
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
			this->gunaGradientButton1->TabIndex = 25;
			this->gunaGradientButton1->Text = L"gunaGradientButton1";
			this->gunaGradientButton1->Click += gcnew System::EventHandler(this, &FactoriForm::gunaGradientButton1_Click);
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
			this->gunaGradientButton2->Location = System::Drawing::Point(857, 321);
			this->gunaGradientButton2->Name = L"gunaGradientButton2";
			this->gunaGradientButton2->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton2->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton2->OnHoverImage = nullptr;
			this->gunaGradientButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton2->Radius = 20;
			this->gunaGradientButton2->Size = System::Drawing::Size(196, 42);
			this->gunaGradientButton2->TabIndex = 26;
			this->gunaGradientButton2->Text = L"gunaGradientButton2";
			this->gunaGradientButton2->Click += gcnew System::EventHandler(this, &FactoriForm::gunaGradientButton2_Click);
			// 
			// gunaGradientButton3
			// 
			this->gunaGradientButton3->AnimationHoverSpeed = 0.05F;
			this->gunaGradientButton3->AnimationSpeed = 0.02F;
			this->gunaGradientButton3->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientButton3->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton3->BaseColor2 = System::Drawing::Color::MediumTurquoise;
			this->gunaGradientButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
			this->gunaGradientButton3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaGradientButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton3.Image")));
			this->gunaGradientButton3->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton3->Location = System::Drawing::Point(857, 262);
			this->gunaGradientButton3->Name = L"gunaGradientButton3";
			this->gunaGradientButton3->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton3->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton3->OnHoverImage = nullptr;
			this->gunaGradientButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton3->Radius = 20;
			this->gunaGradientButton3->Size = System::Drawing::Size(196, 42);
			this->gunaGradientButton3->TabIndex = 27;
			this->gunaGradientButton3->Text = L"gunaGradientButton3";
			this->gunaGradientButton3->Click += gcnew System::EventHandler(this, &FactoriForm::gunaGradientButton3_Click);
			// 
			// gunaGradientButton4
			// 
			this->gunaGradientButton4->AnimationHoverSpeed = 0.05F;
			this->gunaGradientButton4->AnimationSpeed = 0.02F;
			this->gunaGradientButton4->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientButton4->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton4->BaseColor2 = System::Drawing::Color::MediumTurquoise;
			this->gunaGradientButton4->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
			this->gunaGradientButton4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaGradientButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton4.Image")));
			this->gunaGradientButton4->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton4->Location = System::Drawing::Point(857, 202);
			this->gunaGradientButton4->Name = L"gunaGradientButton4";
			this->gunaGradientButton4->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton4->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton4->OnHoverImage = nullptr;
			this->gunaGradientButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton4->Radius = 20;
			this->gunaGradientButton4->Size = System::Drawing::Size(196, 42);
			this->gunaGradientButton4->TabIndex = 28;
			this->gunaGradientButton4->Text = L"gunaGradientButton4";
			this->gunaGradientButton4->Click += gcnew System::EventHandler(this, &FactoriForm::gunaGradientButton4_Click);
			// 
			// gunaGradientButton5
			// 
			this->gunaGradientButton5->AnimationHoverSpeed = 0.05F;
			this->gunaGradientButton5->AnimationSpeed = 0.02F;
			this->gunaGradientButton5->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientButton5->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton5->BaseColor2 = System::Drawing::Color::MediumTurquoise;
			this->gunaGradientButton5->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton5->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton5->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
			this->gunaGradientButton5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaGradientButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton5.Image")));
			this->gunaGradientButton5->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton5->Location = System::Drawing::Point(857, 144);
			this->gunaGradientButton5->Name = L"gunaGradientButton5";
			this->gunaGradientButton5->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton5->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton5->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton5->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton5->OnHoverImage = nullptr;
			this->gunaGradientButton5->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton5->Radius = 20;
			this->gunaGradientButton5->Size = System::Drawing::Size(196, 42);
			this->gunaGradientButton5->TabIndex = 29;
			this->gunaGradientButton5->Text = L"gunaGradientButton5";
			this->gunaGradientButton5->Click += gcnew System::EventHandler(this, &FactoriForm::gunaGradientButton5_Click);
			// 
			// gunaGradientButton6
			// 
			this->gunaGradientButton6->AnimationHoverSpeed = 0.05F;
			this->gunaGradientButton6->AnimationSpeed = 0.02F;
			this->gunaGradientButton6->BackColor = System::Drawing::Color::Transparent;
			this->gunaGradientButton6->BaseColor1 = System::Drawing::Color::SlateBlue;
			this->gunaGradientButton6->BaseColor2 = System::Drawing::Color::MediumTurquoise;
			this->gunaGradientButton6->BorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton6->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaGradientButton6->FocusedColor = System::Drawing::Color::Empty;
			this->gunaGradientButton6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.5F, System::Drawing::FontStyle::Bold));
			this->gunaGradientButton6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaGradientButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaGradientButton6.Image")));
			this->gunaGradientButton6->ImageSize = System::Drawing::Size(20, 20);
			this->gunaGradientButton6->Location = System::Drawing::Point(857, 87);
			this->gunaGradientButton6->Name = L"gunaGradientButton6";
			this->gunaGradientButton6->OnHoverBaseColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->gunaGradientButton6->OnHoverBaseColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaGradientButton6->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaGradientButton6->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaGradientButton6->OnHoverImage = nullptr;
			this->gunaGradientButton6->OnPressedColor = System::Drawing::Color::Black;
			this->gunaGradientButton6->Radius = 20;
			this->gunaGradientButton6->Size = System::Drawing::Size(196, 42);
			this->gunaGradientButton6->TabIndex = 30;
			this->gunaGradientButton6->Text = L"gunaGradientButton6";
			this->gunaGradientButton6->Click += gcnew System::EventHandler(this, &FactoriForm::gunaGradientButton6_Click);
			// 
			// gunaElipsePanel1
			// 
			this->gunaElipsePanel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaElipsePanel1->Controls->Add(this->richTextBox1);
			this->gunaElipsePanel1->Location = System::Drawing::Point(23, 27);
			this->gunaElipsePanel1->Name = L"gunaElipsePanel1";
			this->gunaElipsePanel1->Radius = 30;
			this->gunaElipsePanel1->Size = System::Drawing::Size(828, 336);
			this->gunaElipsePanel1->TabIndex = 31;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->richTextBox1->ForeColor = System::Drawing::Color::MediumTurquoise;
			this->richTextBox1->Location = System::Drawing::Point(45, 19);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(755, 299);
			this->richTextBox1->TabIndex = 32;
			this->richTextBox1->Text = L"";
			// 
			// FactoriForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1062, 685);
			this->Controls->Add(this->gunaElipsePanel1);
			this->Controls->Add(this->gunaGradientButton6);
			this->Controls->Add(this->gunaGradientButton5);
			this->Controls->Add(this->gunaGradientButton4);
			this->Controls->Add(this->gunaGradientButton3);
			this->Controls->Add(this->gunaGradientButton2);
			this->Controls->Add(this->gunaGradientButton1);
			this->Controls->Add(this->gunaPictureBox1);
			this->Name = L"FactoriForm";
			this->Text = L"FactoriForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaPictureBox1))->EndInit();
			this->gunaElipsePanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		void NameButtons()
		{
			Extra::Factori obiect;
			
			std::string auxiliar = obiect.GetFactor1();
			String^ auxiliar2 = gcnew String(auxiliar.c_str());
			this->gunaGradientButton1->Text = auxiliar2;

			auxiliar = obiect.GetFactor2();
			auxiliar2 = gcnew String(auxiliar.c_str());
			this->gunaGradientButton2->Text = auxiliar2;

			auxiliar = obiect.GetFactor3();
			auxiliar2 = gcnew String(auxiliar.c_str());
			this->gunaGradientButton3->Text = auxiliar2;

			auxiliar = obiect.GetFactor4();
			auxiliar2 = gcnew String(auxiliar.c_str());
			this->gunaGradientButton4->Text = auxiliar2;

			auxiliar = obiect.GetFactor5();
			auxiliar2 = gcnew String(auxiliar.c_str());
			this->gunaGradientButton5->Text = auxiliar2;

			auxiliar = obiect.GetFactor6();
			auxiliar2 = gcnew String(auxiliar.c_str());
			this->gunaGradientButton6->Text = auxiliar2;
		}

#pragma region Afisare Text
	private: 
		System::Void gunaGradientButton1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			gunaElipsePanel1->Visible = true;
			this->richTextBox1->Text = "Sistemul imunitar este cel care ne apara de orice atac venit din partea microbilor si diferitelor\n"
				+ "organisme infectioase, fie ca este vorba despre germeni, bacterii, virusuri, paraziti, celule \n"
				+ "maligne sau chiar organe si tesuturi transplantate. Si, per ansamblu, face o treaba foarte buna.\n\n"
				+ "Dar exista si cazuri in care da gres, fiind invins de una sau mai multe substante straine sau periculoase."
				+ "Rezultatul? Ne imbolnavim. De aceea este important ca in aceasta perioada pandemica sa avem grija"
				+ " de sistemul nostru imunitar: corpul nostru trebuie sa primeasca toate vitaminele si mineralele de care are nevoie."
				+ "Insa acest lucru nu e de ajuns, spun medicii, un somn bun intareste si el imunitatea.";
		} 
		System::Void gunaGradientButton6_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			gunaElipsePanel1->Visible = true;
			this->richTextBox1->Text = "“Mastile de protectie ar putea ajuta la reducerea transmiterii in comunitate, in special daca sunt utilizate in transportul public si in zonele aglomerate”, sustine seful Departamentului de Epidemiologie si biostatistica de la Universitatea din Hong Kong, Ben Cowling, care alaturi de echipa sa a publicat recent un studiu privind eficacitatea mastilor de fata pentru a preveni raspandirea noului coronavirus.\n\nCercetarea a aratat ca o masca chirurgicala standard reduce considerabil cantitatea de virus eliminata prin respiratie si tuse de catre persoanele infectate cu diferite virusuri respiratorii, inclusiv un tip mai usor de coronavirus, gripa si rinovirus care provoaca raceala obisnuita.";

		}
		System::Void gunaGradientButton3_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			gunaElipsePanel1->Visible = true;
			this->richTextBox1->Text = " In timp ce animalele au fost sursa initiala a virusului, acum noul coronavirus se raspandeste de la om la om. In prezent se estimeaza ca, in medie, o persoana infectata va infecta intre doua si alte trei, totusi acest lucru nu este determinat cu exactitate. Virusul poate sa fie transmis mai ales prin picaturi respiratorii, pe care oamenii le elimina prin expriratie atunci cand vorbesc, tusesc sau stranuta.\n\nRezultatele unei cercetari efectuate in cadrul Institutului National de Alergii si Boli Infectioase din Statele Unitesi publicate in The New England Journal of Medicine au evidentiat"
				+"ca noul coronavirus SARS-CoV-2 ramane viabil in aerosoli timp de 3 ore, chiar daca ii scade concentratia (titrul) la jumatate in 1-2 ore. De asemenea, virusul poate supravietui cateva ore pe suprafete, cum ar fi mese si manerele usilor.";
		}
		System::Void gunaGradientButton4_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			gunaElipsePanel1->Visible = true;
			this->richTextBox1->Text = "O echipa formata din cercetatori germani si indieni sustine ca nivelul de umiditate din aer ar putea fi o arma în lupta cu noul coronavirus.Acestia sustin ca umiditatea relativa influenteaza puternic raspândirea virusurilor printre oameni, potrivit DW.com."
				+ "“Rolul umiditatii pare a fi extrem de important pentru raspândirea aeriana a COVID - 19 în medii interioare”, este prezentat în raportul expertilor, care s - a bazat si pe descoperirile derivate din testele anterioare cu virusuri similare, H1N1 si MERS - CoV."
				+ "\n\nÎn locurile unde aerul este umed, picatura virala - care contine apa, saruri, substante organice si virusuri - creste, se îngreuneaza si cade mai repede.Prin urmare, riscul ca alte persoane sa inhaleze picaturile infectioase scade semnificativ.Cercetatorii recomanda mentinerea unei umiditati optime între 40% si 60%.";
				
		}
		System::Void gunaGradientButton5_Click(System::Object^ sender, System::EventArgs^ e)
		{
			gunaElipsePanel1->Visible = true;
			this->richTextBox1->Text = "Potrivit OMS, exista patru metode de a împiedica raspândirea: educarea publicului prin comunicarea riscurilor, tratamentul antiviral, practicile de igiena si distantarea social, iar cunoasterea factorilor psihologici joaca un rol esential în succesul fiecarei dintre aceste metode."
				+"\n\nComunicarea riscurilor înseamna informarea corecta, clara, acurata si grabnica a publicului, pentru a stabili si a mentine încrederea cetatenilor în autoritati, iar acest lucru se face prin sinceritate, prin anunturi imediate– chiar si incomplete, pentru a preveni zvonurile si dezinformarea, prin informarea"
				+"constanta privind cele mai bune masuri de protectie si asigurarea ca aceste masuri au fost întelese si sunt aplicate cât si informarea cu privire la tratamentele disponibile si prognoze care sa indice evolutia în timp a fenomenului.\n\nAsadar, cunoasterea gândirii si comportamentului uman este esentiala atât pentru"
				+"a preveni îmbolnavirea cât si pentru a manageria boala.Comportamentul nostru poate creste sau poate scade sansele unei pandemii.Anxietatea de sanatate si vulnerabilitatea fata de boala pot conduce la practici irationale si nesanatoase, la raspândirea fricii, la amenintare la adresa sanatatii si securitatii personale"
				+"si familiale.\n\nPentru unii oameni, implicatiile financiare si profesionale pot fi mai stresante ca boala în sine, îndeosebi pentru persoanele care au deja astfel de probleme.De aceea, metodele comportamentale reprezinta prima linie de interventie pentru reducerea morbiditatii si mortalitatii.";
				
		}
		System::Void gunaGradientButton2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			gunaElipsePanel1->Visible = true;
			this->richTextBox1->Text = 
				"Masurile de distantare sociala aprobate de guvern au scopul diminuarii rate de imbolnavire cu acest virus. Printre masurile de distantare"
				+"pe care fiecare persoana trebuie sa le aplice ( sa mentina distanta de alti oameni de cel putin 2 metrii), orice societate comerciala precum"
				+"baruri, cafenele, restaurante, etc, este obligata sa isi sisteze activitatea.\n\nSocietatile comerciale care beneficiaza de terasa isi pot desfasura"
				+"activitatile, insa sunt obligati sa asigure distantare fizica intre oameni.Distantarea fizica de ceilalti este una dintre cele mai eficiente metode"
				+"de a combate raspândirea coronavirusulu.Dar acest lucru, totusi, contravine dorinţelor oamenilor de conectare si atingere fizica - si ar putea contribui"
				+"la sentimente de anxietate, frica de singuratate si durere care ar putea crea o alta criza : de sanatate mintala.";
		}
#pragma endregion

};
}
