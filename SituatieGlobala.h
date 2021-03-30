#pragma once

namespace tEST23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SituatieGlobala
	/// </summary>
	public ref class SituatieGlobala : public System::Windows::Forms::Form
	{
	public:
		SituatieGlobala(void)
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
		~SituatieGlobala()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelSituatieGlobala;
	private: Guna::UI::WinForms::GunaPictureBox^ HartaGlobala;
	private: Guna::UI::WinForms::GunaGradient2Panel^ CazuriPanel;
	private: Guna::UI::WinForms::GunaTransfarantPictureBox^ gunaTransfarantPictureBox2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel4;
	private: Guna::UI::WinForms::GunaGradient2Panel^ DecesePanel;
	private: Guna::UI::WinForms::GunaTransfarantPictureBox^ gunaTransfarantPictureBox1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: Guna::UI::WinForms::GunaGradient2Panel^ VindecariPanel;
	private: Guna::UI::WinForms::GunaTransfarantPictureBox^ gunaTransfarantPictureBox3;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel5;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel6;
	private: Guna::UI::WinForms::GunaGradient2Panel^ TestePanel;
	private: Guna::UI::WinForms::GunaTransfarantPictureBox^ gunaTransfarantPictureBox4;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel7;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel8;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SituatieGlobala::typeid));
			this->LabelSituatieGlobala = (gcnew System::Windows::Forms::Label());
			this->HartaGlobala = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->CazuriPanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaTransfarantPictureBox2 = (gcnew Guna::UI::WinForms::GunaTransfarantPictureBox());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->DecesePanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaTransfarantPictureBox1 = (gcnew Guna::UI::WinForms::GunaTransfarantPictureBox());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->VindecariPanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaTransfarantPictureBox3 = (gcnew Guna::UI::WinForms::GunaTransfarantPictureBox());
			this->gunaLabel5 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel6 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->TestePanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaTransfarantPictureBox4 = (gcnew Guna::UI::WinForms::GunaTransfarantPictureBox());
			this->gunaLabel7 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel8 = (gcnew Guna::UI::WinForms::GunaLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HartaGlobala))->BeginInit();
			this->CazuriPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox2))->BeginInit();
			this->DecesePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox1))->BeginInit();
			this->VindecariPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox3))->BeginInit();
			this->TestePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// LabelSituatieGlobala
			// 
			this->LabelSituatieGlobala->AutoSize = true;
			this->LabelSituatieGlobala->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->LabelSituatieGlobala->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->LabelSituatieGlobala->Location = System::Drawing::Point(315, 23);
			this->LabelSituatieGlobala->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelSituatieGlobala->Name = L"LabelSituatieGlobala";
			this->LabelSituatieGlobala->Size = System::Drawing::Size(460, 30);
			this->LabelSituatieGlobala->TabIndex = 10;
			this->LabelSituatieGlobala->Text = L"Situație globală - ultima dată, 25 ianuarie 2021";
			// 
			// HartaGlobala
			// 
			this->HartaGlobala->BaseColor = System::Drawing::Color::Maroon;
			this->HartaGlobala->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HartaGlobala.Image")));
			this->HartaGlobala->Location = System::Drawing::Point(78, 72);
			this->HartaGlobala->Name = L"HartaGlobala";
			this->HartaGlobala->Size = System::Drawing::Size(932, 379);
			this->HartaGlobala->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->HartaGlobala->TabIndex = 11;
			this->HartaGlobala->TabStop = false;
			this->HartaGlobala->Click += gcnew System::EventHandler(this, &SituatieGlobala::HartaGlobala_Click);
			// 
			// CazuriPanel
			// 
			this->CazuriPanel->AllowDrop = true;
			this->CazuriPanel->AutoSize = true;
			this->CazuriPanel->BackColor = System::Drawing::Color::Transparent;
			this->CazuriPanel->Controls->Add(this->gunaTransfarantPictureBox2);
			this->CazuriPanel->Controls->Add(this->gunaLabel3);
			this->CazuriPanel->Controls->Add(this->gunaLabel4);
			this->CazuriPanel->GradientColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->CazuriPanel->GradientColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->CazuriPanel->GradientMode = System::Drawing::Drawing2D::LinearGradientMode::Vertical;
			this->CazuriPanel->Location = System::Drawing::Point(78, 494);
			this->CazuriPanel->Name = L"CazuriPanel";
			this->CazuriPanel->Radius = 10;
			this->CazuriPanel->Size = System::Drawing::Size(220, 107);
			this->CazuriPanel->TabIndex = 12;
			// 
			// gunaTransfarantPictureBox2
			// 
			this->gunaTransfarantPictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransfarantPictureBox2->BaseColor = System::Drawing::Color::Black;
			this->gunaTransfarantPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaTransfarantPictureBox2.Image")));
			this->gunaTransfarantPictureBox2->Location = System::Drawing::Point(148, 22);
			this->gunaTransfarantPictureBox2->Name = L"gunaTransfarantPictureBox2";
			this->gunaTransfarantPictureBox2->Size = System::Drawing::Size(63, 50);
			this->gunaTransfarantPictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaTransfarantPictureBox2->TabIndex = 10;
			this->gunaTransfarantPictureBox2->TabStop = false;
			this->gunaTransfarantPictureBox2->UseWaitCursor = true;
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13, System::Drawing::FontStyle::Bold));
			this->gunaLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->gunaLabel3->Location = System::Drawing::Point(12, 52);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(102, 25);
			this->gunaLabel3->TabIndex = 12;
			this->gunaLabel3->Text = L"99,269,667";
			// 
			// gunaLabel4
			// 
			this->gunaLabel4->AutoSize = true;
			this->gunaLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->gunaLabel4->Location = System::Drawing::Point(13, 17);
			this->gunaLabel4->Name = L"gunaLabel4";
			this->gunaLabel4->Size = System::Drawing::Size(58, 23);
			this->gunaLabel4->TabIndex = 11;
			this->gunaLabel4->Text = L"Cazuri";
			// 
			// DecesePanel
			// 
			this->DecesePanel->AutoSize = true;
			this->DecesePanel->BackColor = System::Drawing::Color::Transparent;
			this->DecesePanel->Controls->Add(this->gunaTransfarantPictureBox1);
			this->DecesePanel->Controls->Add(this->gunaLabel2);
			this->DecesePanel->Controls->Add(this->gunaLabel1);
			this->DecesePanel->GradientColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->DecesePanel->GradientColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->DecesePanel->GradientMode = System::Drawing::Drawing2D::LinearGradientMode::Vertical;
			this->DecesePanel->Location = System::Drawing::Point(316, 494);
			this->DecesePanel->Name = L"DecesePanel";
			this->DecesePanel->Radius = 10;
			this->DecesePanel->Size = System::Drawing::Size(217, 107);
			this->DecesePanel->TabIndex = 13;
			// 
			// gunaTransfarantPictureBox1
			// 
			this->gunaTransfarantPictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransfarantPictureBox1->BaseColor = System::Drawing::Color::Black;
			this->gunaTransfarantPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaTransfarantPictureBox1.Image")));
			this->gunaTransfarantPictureBox1->Location = System::Drawing::Point(144, 22);
			this->gunaTransfarantPictureBox1->Name = L"gunaTransfarantPictureBox1";
			this->gunaTransfarantPictureBox1->Size = System::Drawing::Size(63, 50);
			this->gunaTransfarantPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaTransfarantPictureBox1->TabIndex = 10;
			this->gunaTransfarantPictureBox1->TabStop = false;
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13, System::Drawing::FontStyle::Bold));
			this->gunaLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->gunaLabel2->Location = System::Drawing::Point(12, 52);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(92, 25);
			this->gunaLabel2->TabIndex = 12;
			this->gunaLabel2->Text = L"2,148,753";
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->gunaLabel1->Location = System::Drawing::Point(13, 17);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(64, 23);
			this->gunaLabel1->TabIndex = 11;
			this->gunaLabel1->Text = L"Decese";
			// 
			// VindecariPanel
			// 
			this->VindecariPanel->AutoSize = true;
			this->VindecariPanel->BackColor = System::Drawing::Color::Transparent;
			this->VindecariPanel->Controls->Add(this->gunaTransfarantPictureBox3);
			this->VindecariPanel->Controls->Add(this->gunaLabel5);
			this->VindecariPanel->Controls->Add(this->gunaLabel6);
			this->VindecariPanel->GradientColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->VindecariPanel->GradientColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->VindecariPanel->GradientMode = System::Drawing::Drawing2D::LinearGradientMode::Vertical;
			this->VindecariPanel->Location = System::Drawing::Point(555, 494);
			this->VindecariPanel->Name = L"VindecariPanel";
			this->VindecariPanel->Radius = 10;
			this->VindecariPanel->Size = System::Drawing::Size(220, 107);
			this->VindecariPanel->TabIndex = 14;
			// 
			// gunaTransfarantPictureBox3
			// 
			this->gunaTransfarantPictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransfarantPictureBox3->BaseColor = System::Drawing::Color::Black;
			this->gunaTransfarantPictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaTransfarantPictureBox3.Image")));
			this->gunaTransfarantPictureBox3->Location = System::Drawing::Point(147, 22);
			this->gunaTransfarantPictureBox3->Name = L"gunaTransfarantPictureBox3";
			this->gunaTransfarantPictureBox3->Size = System::Drawing::Size(63, 50);
			this->gunaTransfarantPictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaTransfarantPictureBox3->TabIndex = 10;
			this->gunaTransfarantPictureBox3->TabStop = false;
			// 
			// gunaLabel5
			// 
			this->gunaLabel5->AutoSize = true;
			this->gunaLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13, System::Drawing::FontStyle::Bold));
			this->gunaLabel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->gunaLabel5->Location = System::Drawing::Point(12, 52);
			this->gunaLabel5->Name = L"gunaLabel5";
			this->gunaLabel5->Size = System::Drawing::Size(102, 25);
			this->gunaLabel5->TabIndex = 12;
			this->gunaLabel5->Text = L"54,284,123";
			// 
			// gunaLabel6
			// 
			this->gunaLabel6->AutoSize = true;
			this->gunaLabel6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->gunaLabel6->Location = System::Drawing::Point(13, 17);
			this->gunaLabel6->Name = L"gunaLabel6";
			this->gunaLabel6->Size = System::Drawing::Size(81, 23);
			this->gunaLabel6->TabIndex = 11;
			this->gunaLabel6->Text = L"Vindecări";
			// 
			// TestePanel
			// 
			this->TestePanel->AutoSize = true;
			this->TestePanel->BackColor = System::Drawing::Color::Transparent;
			this->TestePanel->Controls->Add(this->gunaTransfarantPictureBox4);
			this->TestePanel->Controls->Add(this->gunaLabel7);
			this->TestePanel->Controls->Add(this->gunaLabel8);
			this->TestePanel->GradientColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->TestePanel->GradientColor2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->TestePanel->GradientMode = System::Drawing::Drawing2D::LinearGradientMode::Vertical;
			this->TestePanel->Location = System::Drawing::Point(791, 494);
			this->TestePanel->Name = L"TestePanel";
			this->TestePanel->Radius = 10;
			this->TestePanel->Size = System::Drawing::Size(219, 107);
			this->TestePanel->TabIndex = 15;
			// 
			// gunaTransfarantPictureBox4
			// 
			this->gunaTransfarantPictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransfarantPictureBox4->BaseColor = System::Drawing::Color::Black;
			this->gunaTransfarantPictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaTransfarantPictureBox4.Image")));
			this->gunaTransfarantPictureBox4->Location = System::Drawing::Point(143, 17);
			this->gunaTransfarantPictureBox4->Name = L"gunaTransfarantPictureBox4";
			this->gunaTransfarantPictureBox4->Size = System::Drawing::Size(63, 50);
			this->gunaTransfarantPictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaTransfarantPictureBox4->TabIndex = 10;
			this->gunaTransfarantPictureBox4->TabStop = false;
			// 
			// gunaLabel7
			// 
			this->gunaLabel7->AutoSize = true;
			this->gunaLabel7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13, System::Drawing::FontStyle::Bold));
			this->gunaLabel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->gunaLabel7->Location = System::Drawing::Point(12, 52);
			this->gunaLabel7->Name = L"gunaLabel7";
			this->gunaLabel7->Size = System::Drawing::Size(127, 25);
			this->gunaLabel7->TabIndex = 12;
			this->gunaLabel7->Text = L"1,397,303,981";
			// 
			// gunaLabel8
			// 
			this->gunaLabel8->AutoSize = true;
			this->gunaLabel8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gunaLabel8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->gunaLabel8->Location = System::Drawing::Point(13, 17);
			this->gunaLabel8->Name = L"gunaLabel8";
			this->gunaLabel8->Size = System::Drawing::Size(124, 23);
			this->gunaLabel8->TabIndex = 11;
			this->gunaLabel8->Text = L"Teste Efectuate";
			// 
			// SituatieGlobala
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1142, 647);
			this->Controls->Add(this->TestePanel);
			this->Controls->Add(this->VindecariPanel);
			this->Controls->Add(this->DecesePanel);
			this->Controls->Add(this->CazuriPanel);
			this->Controls->Add(this->HartaGlobala);
			this->Controls->Add(this->LabelSituatieGlobala);
			this->Name = L"SituatieGlobala";
			this->Text = L"SituatieGlobala";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HartaGlobala))->EndInit();
			this->CazuriPanel->ResumeLayout(false);
			this->CazuriPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox2))->EndInit();
			this->DecesePanel->ResumeLayout(false);
			this->DecesePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox1))->EndInit();
			this->VindecariPanel->ResumeLayout(false);
			this->VindecariPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox3))->EndInit();
			this->TestePanel->ResumeLayout(false);
			this->TestePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void HartaGlobala_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
