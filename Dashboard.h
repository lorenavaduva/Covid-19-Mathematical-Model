#pragma once
#include <cstddef>
#include "CazuriForm.h"
#include "SituatieGlobala.h"
#include "DeceseForm.h"
#include "VindecariForm.h"
#include "TesteForm.h"
#include "FactoriForm.h"
#include "PrevenireForm.h"
#include "HelpForm.h"

namespace tEST23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	
	private:
		Form^ activeForm = nullptr ;
	
	
	public:
		Dashboard(void)
		{
			InitializeComponent();
			customizeDesign();
			tEST23::SituatieGlobala^ formcaz1 = gcnew tEST23::SituatieGlobala;
			OpenChildForm(formcaz1);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaShadowPanel^ PanelSideMenu;
	protected:
	private: Guna::UI::WinForms::GunaShadowPanel^ PredictieSubMeniu;


	private: Guna::UI::WinForms::GunaButton^ SituatieButon;
	private: Guna::UI::WinForms::GunaPictureBox^ Logo;
	private: Guna::UI::WinForms::GunaButton^ gunaButton3;
	private: Guna::UI::WinForms::GunaButton^ gunaButton2;
	private: Guna::UI::WinForms::GunaButton^ gunaButton1;
	private: Guna::UI::WinForms::GunaButton^ CazuriButton;
	private: Guna::UI::WinForms::GunaButton^ gunaButton7;
	private: Guna::UI::WinForms::GunaButton^ gunaButton6;

	private: Guna::UI::WinForms::GunaButton^ gunaButton4;
	private: Guna::UI::WinForms::GunaButton^ PredictieButton;
	private: Guna::UI::WinForms::GunaPictureBox^ HartaGlobala;
	private: System::Windows::Forms::Label^ LabelSituatieGlobala;
	private: Guna::UI::WinForms::GunaGradient2Panel^ DecesePanel;








	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;

	private: Guna::UI::WinForms::GunaLabel^ gunaLabel2;
	private: Guna::UI::WinForms::GunaTransfarantPictureBox^ gunaTransfarantPictureBox1;
	private: Guna::UI::WinForms::GunaGradient2Panel^ CazuriPanel;

	private: Guna::UI::WinForms::GunaTransfarantPictureBox^ gunaTransfarantPictureBox2;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel3;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel4;
	private: Guna::UI::WinForms::GunaGradient2Panel^ VindecariPanel;

	private: Guna::UI::WinForms::GunaTransfarantPictureBox^ gunaTransfarantPictureBox3;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel5;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel6;
	private: Guna::UI::WinForms::GunaGradient2Panel^ TestePanel;

	private: Guna::UI::WinForms::GunaTransfarantPictureBox^ gunaTransfarantPictureBox4;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel7;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel8;
	private: Guna::UI::WinForms::GunaPanel^ panelDesktopPanel;
	private: Guna::UI::WinForms::GunaButton^ gunaButton5;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->PanelSideMenu = (gcnew Guna::UI::WinForms::GunaShadowPanel());
			this->gunaButton5 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton7 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton6 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton4 = (gcnew Guna::UI::WinForms::GunaButton());
			this->PredictieSubMeniu = (gcnew Guna::UI::WinForms::GunaShadowPanel());
			this->gunaButton3 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton2 = (gcnew Guna::UI::WinForms::GunaButton());
			this->gunaButton1 = (gcnew Guna::UI::WinForms::GunaButton());
			this->CazuriButton = (gcnew Guna::UI::WinForms::GunaButton());
			this->PredictieButton = (gcnew Guna::UI::WinForms::GunaButton());
			this->SituatieButon = (gcnew Guna::UI::WinForms::GunaButton());
			this->Logo = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->HartaGlobala = (gcnew Guna::UI::WinForms::GunaPictureBox());
			this->LabelSituatieGlobala = (gcnew System::Windows::Forms::Label());
			this->DecesePanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaTransfarantPictureBox1 = (gcnew Guna::UI::WinForms::GunaTransfarantPictureBox());
			this->gunaLabel2 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->CazuriPanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaTransfarantPictureBox2 = (gcnew Guna::UI::WinForms::GunaTransfarantPictureBox());
			this->gunaLabel3 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel4 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->VindecariPanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaTransfarantPictureBox3 = (gcnew Guna::UI::WinForms::GunaTransfarantPictureBox());
			this->gunaLabel5 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel6 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->TestePanel = (gcnew Guna::UI::WinForms::GunaGradient2Panel());
			this->gunaTransfarantPictureBox4 = (gcnew Guna::UI::WinForms::GunaTransfarantPictureBox());
			this->gunaLabel7 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->gunaLabel8 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->panelDesktopPanel = (gcnew Guna::UI::WinForms::GunaPanel());
			this->PanelSideMenu->SuspendLayout();
			this->PredictieSubMeniu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HartaGlobala))->BeginInit();
			this->DecesePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox1))->BeginInit();
			this->CazuriPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox2))->BeginInit();
			this->VindecariPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox3))->BeginInit();
			this->TestePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// PanelSideMenu
			// 
			this->PanelSideMenu->BackColor = System::Drawing::Color::Transparent;
			this->PanelSideMenu->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->PanelSideMenu->Controls->Add(this->gunaButton5);
			this->PanelSideMenu->Controls->Add(this->gunaButton7);
			this->PanelSideMenu->Controls->Add(this->gunaButton6);
			this->PanelSideMenu->Controls->Add(this->gunaButton4);
			this->PanelSideMenu->Controls->Add(this->PredictieSubMeniu);
			this->PanelSideMenu->Controls->Add(this->PredictieButton);
			this->PanelSideMenu->Controls->Add(this->SituatieButon);
			this->PanelSideMenu->Controls->Add(this->Logo);
			this->PanelSideMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelSideMenu->Location = System::Drawing::Point(0, 0);
			this->PanelSideMenu->Name = L"PanelSideMenu";
			this->PanelSideMenu->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->PanelSideMenu->ShadowShift = 0;
			this->PanelSideMenu->ShadowStyle = Guna::UI::WinForms::ShadowMode::ForwardDiagonal;
			this->PanelSideMenu->Size = System::Drawing::Size(166, 662);
			this->PanelSideMenu->TabIndex = 0;
			// 
			// gunaButton5
			// 
			this->gunaButton5->AnimationHoverSpeed = 0.07F;
			this->gunaButton5->AnimationSpeed = 0.03F;
			this->gunaButton5->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->gunaButton5->BorderColor = System::Drawing::Color::Black;
			this->gunaButton5->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->gunaButton5->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->gunaButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton5.Image")));
			this->gunaButton5->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton5->Location = System::Drawing::Point(0, 588);
			this->gunaButton5->Name = L"gunaButton5";
			this->gunaButton5->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton5->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton5->OnHoverForeColor = System::Drawing::Color::Black;
			this->gunaButton5->OnHoverImage = nullptr;
			this->gunaButton5->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton5->Size = System::Drawing::Size(166, 32);
			this->gunaButton5->TabIndex = 8;
			this->gunaButton5->Text = L"Help";
			this->gunaButton5->Click += gcnew System::EventHandler(this, &Dashboard::gunaButton5_Click);
			// 
			// gunaButton7
			// 
			this->gunaButton7->AnimationHoverSpeed = 0.07F;
			this->gunaButton7->AnimationSpeed = 0.03F;
			this->gunaButton7->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->gunaButton7->BorderColor = System::Drawing::Color::Black;
			this->gunaButton7->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->gunaButton7->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->gunaButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton7.Image")));
			this->gunaButton7->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton7->Location = System::Drawing::Point(0, 620);
			this->gunaButton7->Name = L"gunaButton7";
			this->gunaButton7->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton7->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton7->OnHoverForeColor = System::Drawing::Color::Black;
			this->gunaButton7->OnHoverImage = nullptr;
			this->gunaButton7->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton7->Size = System::Drawing::Size(166, 42);
			this->gunaButton7->TabIndex = 7;
			this->gunaButton7->Text = L"Ieșire";
			this->gunaButton7->Click += gcnew System::EventHandler(this, &Dashboard::gunaButton7_Click);
			// 
			// gunaButton6
			// 
			this->gunaButton6->AnimationHoverSpeed = 0.07F;
			this->gunaButton6->AnimationSpeed = 0.03F;
			this->gunaButton6->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->gunaButton6->BorderColor = System::Drawing::Color::Black;
			this->gunaButton6->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton6->Dock = System::Windows::Forms::DockStyle::Top;
			this->gunaButton6->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->gunaButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton6.Image")));
			this->gunaButton6->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton6->Location = System::Drawing::Point(0, 301);
			this->gunaButton6->Name = L"gunaButton6";
			this->gunaButton6->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton6->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton6->OnHoverForeColor = System::Drawing::Color::Black;
			this->gunaButton6->OnHoverImage = nullptr;
			this->gunaButton6->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton6->Size = System::Drawing::Size(166, 32);
			this->gunaButton6->TabIndex = 6;
			this->gunaButton6->Text = L"Metode de Prevenire";
			this->gunaButton6->Click += gcnew System::EventHandler(this, &Dashboard::gunaButton6_Click);
			// 
			// gunaButton4
			// 
			this->gunaButton4->AnimationHoverSpeed = 0.07F;
			this->gunaButton4->AnimationSpeed = 0.03F;
			this->gunaButton4->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->gunaButton4->BorderColor = System::Drawing::Color::Black;
			this->gunaButton4->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton4->Dock = System::Windows::Forms::DockStyle::Top;
			this->gunaButton4->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->gunaButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton4.Image")));
			this->gunaButton4->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton4->Location = System::Drawing::Point(0, 269);
			this->gunaButton4->Name = L"gunaButton4";
			this->gunaButton4->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton4->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton4->OnHoverForeColor = System::Drawing::Color::Black;
			this->gunaButton4->OnHoverImage = nullptr;
			this->gunaButton4->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton4->Size = System::Drawing::Size(166, 32);
			this->gunaButton4->TabIndex = 4;
			this->gunaButton4->Text = L"Factori";
			this->gunaButton4->Click += gcnew System::EventHandler(this, &Dashboard::gunaButton4_Click);
			// 
			// PredictieSubMeniu
			// 
			this->PredictieSubMeniu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->PredictieSubMeniu->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->PredictieSubMeniu->Controls->Add(this->gunaButton3);
			this->PredictieSubMeniu->Controls->Add(this->gunaButton2);
			this->PredictieSubMeniu->Controls->Add(this->gunaButton1);
			this->PredictieSubMeniu->Controls->Add(this->CazuriButton);
			this->PredictieSubMeniu->Dock = System::Windows::Forms::DockStyle::Top;
			this->PredictieSubMeniu->Location = System::Drawing::Point(0, 140);
			this->PredictieSubMeniu->Name = L"PredictieSubMeniu";
			this->PredictieSubMeniu->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->PredictieSubMeniu->Size = System::Drawing::Size(166, 129);
			this->PredictieSubMeniu->TabIndex = 3;
			// 
			// gunaButton3
			// 
			this->gunaButton3->AnimationHoverSpeed = 0.07F;
			this->gunaButton3->AnimationSpeed = 0.03F;
			this->gunaButton3->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaButton3->BorderColor = System::Drawing::Color::Black;
			this->gunaButton3->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton3->Dock = System::Windows::Forms::DockStyle::Top;
			this->gunaButton3->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->gunaButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton3.Image")));
			this->gunaButton3->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton3->Location = System::Drawing::Point(0, 93);
			this->gunaButton3->Name = L"gunaButton3";
			this->gunaButton3->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton3->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton3->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton3->OnHoverImage = nullptr;
			this->gunaButton3->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton3->Size = System::Drawing::Size(166, 36);
			this->gunaButton3->TabIndex = 3;
			this->gunaButton3->TabStop = false;
			this->gunaButton3->Text = L"Număr de teste";
			this->gunaButton3->Click += gcnew System::EventHandler(this, &Dashboard::gunaButton3_Click);
			// 
			// gunaButton2
			// 
			this->gunaButton2->AnimationHoverSpeed = 0.07F;
			this->gunaButton2->AnimationSpeed = 0.03F;
			this->gunaButton2->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaButton2->BorderColor = System::Drawing::Color::Black;
			this->gunaButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton2->Dock = System::Windows::Forms::DockStyle::Top;
			this->gunaButton2->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->gunaButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton2.Image")));
			this->gunaButton2->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton2->Location = System::Drawing::Point(0, 62);
			this->gunaButton2->Name = L"gunaButton2";
			this->gunaButton2->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton2->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton2->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton2->OnHoverImage = nullptr;
			this->gunaButton2->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton2->Size = System::Drawing::Size(166, 31);
			this->gunaButton2->TabIndex = 2;
			this->gunaButton2->TabStop = false;
			this->gunaButton2->Text = L"Vindecări";
			this->gunaButton2->Click += gcnew System::EventHandler(this, &Dashboard::gunaButton2_Click);
			// 
			// gunaButton1
			// 
			this->gunaButton1->AnimationHoverSpeed = 0.07F;
			this->gunaButton1->AnimationSpeed = 0.03F;
			this->gunaButton1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaButton1->BorderColor = System::Drawing::Color::Black;
			this->gunaButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->gunaButton1->Dock = System::Windows::Forms::DockStyle::Top;
			this->gunaButton1->FocusedColor = System::Drawing::Color::Empty;
			this->gunaButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->gunaButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->gunaButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaButton1.Image")));
			this->gunaButton1->ImageSize = System::Drawing::Size(20, 20);
			this->gunaButton1->Location = System::Drawing::Point(0, 31);
			this->gunaButton1->Name = L"gunaButton1";
			this->gunaButton1->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->gunaButton1->OnHoverBorderColor = System::Drawing::Color::Black;
			this->gunaButton1->OnHoverForeColor = System::Drawing::Color::White;
			this->gunaButton1->OnHoverImage = nullptr;
			this->gunaButton1->OnPressedColor = System::Drawing::Color::Black;
			this->gunaButton1->Size = System::Drawing::Size(166, 31);
			this->gunaButton1->TabIndex = 1;
			this->gunaButton1->TabStop = false;
			this->gunaButton1->Text = L"Decese";
			this->gunaButton1->Click += gcnew System::EventHandler(this, &Dashboard::gunaButton1_Click);
			// 
			// CazuriButton
			// 
			this->CazuriButton->AnimationHoverSpeed = 0.07F;
			this->CazuriButton->AnimationSpeed = 0.03F;
			this->CazuriButton->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->CazuriButton->BorderColor = System::Drawing::Color::Black;
			this->CazuriButton->DialogResult = System::Windows::Forms::DialogResult::None;
			this->CazuriButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->CazuriButton->FocusedColor = System::Drawing::Color::Empty;
			this->CazuriButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->CazuriButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->CazuriButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CazuriButton.Image")));
			this->CazuriButton->ImageSize = System::Drawing::Size(20, 20);
			this->CazuriButton->Location = System::Drawing::Point(0, 0);
			this->CazuriButton->Name = L"CazuriButton";
			this->CazuriButton->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->CazuriButton->OnHoverBorderColor = System::Drawing::Color::Black;
			this->CazuriButton->OnHoverForeColor = System::Drawing::Color::White;
			this->CazuriButton->OnHoverImage = nullptr;
			this->CazuriButton->OnPressedColor = System::Drawing::Color::Black;
			this->CazuriButton->Size = System::Drawing::Size(166, 31);
			this->CazuriButton->TabIndex = 0;
			this->CazuriButton->TabStop = false;
			this->CazuriButton->Text = L"Cazuri";
			this->CazuriButton->Click += gcnew System::EventHandler(this, &Dashboard::CazuriButton_Click);
			// 
			// PredictieButton
			// 
			this->PredictieButton->AnimationHoverSpeed = 0.07F;
			this->PredictieButton->AnimationSpeed = 0.03F;
			this->PredictieButton->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->PredictieButton->BorderColor = System::Drawing::Color::Black;
			this->PredictieButton->DialogResult = System::Windows::Forms::DialogResult::None;
			this->PredictieButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->PredictieButton->FocusedColor = System::Drawing::Color::Empty;
			this->PredictieButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->PredictieButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->PredictieButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PredictieButton.Image")));
			this->PredictieButton->ImageSize = System::Drawing::Size(20, 20);
			this->PredictieButton->Location = System::Drawing::Point(0, 108);
			this->PredictieButton->Name = L"PredictieButton";
			this->PredictieButton->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->PredictieButton->OnHoverBorderColor = System::Drawing::Color::Black;
			this->PredictieButton->OnHoverForeColor = System::Drawing::Color::Black;
			this->PredictieButton->OnHoverImage = nullptr;
			this->PredictieButton->OnPressedColor = System::Drawing::Color::Black;
			this->PredictieButton->Size = System::Drawing::Size(166, 32);
			this->PredictieButton->TabIndex = 2;
			this->PredictieButton->Text = L"Predicție";
			this->PredictieButton->Click += gcnew System::EventHandler(this, &Dashboard::PredictieButton_Click);
			// 
			// SituatieButon
			// 
			this->SituatieButon->AnimationHoverSpeed = 0.07F;
			this->SituatieButon->AnimationSpeed = 0.03F;
			this->SituatieButon->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->SituatieButon->BorderColor = System::Drawing::Color::Black;
			this->SituatieButon->DialogResult = System::Windows::Forms::DialogResult::None;
			this->SituatieButon->Dock = System::Windows::Forms::DockStyle::Top;
			this->SituatieButon->FocusedColor = System::Drawing::Color::Empty;
			this->SituatieButon->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->SituatieButon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->SituatieButon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SituatieButon.Image")));
			this->SituatieButon->ImageSize = System::Drawing::Size(20, 20);
			this->SituatieButon->Location = System::Drawing::Point(0, 76);
			this->SituatieButon->Name = L"SituatieButon";
			this->SituatieButon->OnHoverBaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(143)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->SituatieButon->OnHoverBorderColor = System::Drawing::Color::Black;
			this->SituatieButon->OnHoverForeColor = System::Drawing::Color::Black;
			this->SituatieButon->OnHoverImage = nullptr;
			this->SituatieButon->OnPressedColor = System::Drawing::Color::Black;
			this->SituatieButon->Size = System::Drawing::Size(166, 32);
			this->SituatieButon->TabIndex = 1;
			this->SituatieButon->Text = L"Situație globală ";
			this->SituatieButon->Click += gcnew System::EventHandler(this, &Dashboard::SituatieButon_Click);
			// 
			// Logo
			// 
			this->Logo->BaseColor = System::Drawing::Color::White;
			this->Logo->Dock = System::Windows::Forms::DockStyle::Top;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(0, 0);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(166, 76);
			this->Logo->TabIndex = 1;
			this->Logo->TabStop = false;
			// 
			// HartaGlobala
			// 
			this->HartaGlobala->BaseColor = System::Drawing::Color::Maroon;
			this->HartaGlobala->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HartaGlobala.Image")));
			this->HartaGlobala->Location = System::Drawing::Point(236, 52);
			this->HartaGlobala->Name = L"HartaGlobala";
			this->HartaGlobala->Size = System::Drawing::Size(924, 378);
			this->HartaGlobala->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->HartaGlobala->TabIndex = 1;
			this->HartaGlobala->TabStop = false;
			// 
			// LabelSituatieGlobala
			// 
			this->LabelSituatieGlobala->AutoSize = true;
			this->LabelSituatieGlobala->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->LabelSituatieGlobala->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->LabelSituatieGlobala->Location = System::Drawing::Point(464, 9);
			this->LabelSituatieGlobala->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelSituatieGlobala->Name = L"LabelSituatieGlobala";
			this->LabelSituatieGlobala->Size = System::Drawing::Size(460, 30);
			this->LabelSituatieGlobala->TabIndex = 9;
			this->LabelSituatieGlobala->Text = L"Situație globală - ultima dată, 12 ianuarie 2021";
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
			this->DecesePanel->Location = System::Drawing::Point(469, 507);
			this->DecesePanel->Name = L"DecesePanel";
			this->DecesePanel->Radius = 10;
			this->DecesePanel->Size = System::Drawing::Size(217, 107);
			this->DecesePanel->TabIndex = 0;
			// 
			// gunaTransfarantPictureBox1
			// 
			this->gunaTransfarantPictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransfarantPictureBox1->BaseColor = System::Drawing::Color::Black;
			this->gunaTransfarantPictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaTransfarantPictureBox1.Image")));
			this->gunaTransfarantPictureBox1->Location = System::Drawing::Point(126, 22);
			this->gunaTransfarantPictureBox1->Name = L"gunaTransfarantPictureBox1";
			this->gunaTransfarantPictureBox1->Size = System::Drawing::Size(64, 64);
			this->gunaTransfarantPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaTransfarantPictureBox1->TabIndex = 10;
			this->gunaTransfarantPictureBox1->TabStop = false;
			// 
			// gunaLabel2
			// 
			this->gunaLabel2->AutoSize = true;
			this->gunaLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold));
			this->gunaLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->gunaLabel2->Location = System::Drawing::Point(12, 52);
			this->gunaLabel2->Name = L"gunaLabel2";
			this->gunaLabel2->Size = System::Drawing::Size(108, 28);
			this->gunaLabel2->TabIndex = 12;
			this->gunaLabel2->Text = L"12369856";
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
			// CazuriPanel
			// 
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
			this->CazuriPanel->Location = System::Drawing::Point(236, 507);
			this->CazuriPanel->Name = L"CazuriPanel";
			this->CazuriPanel->Radius = 10;
			this->CazuriPanel->Size = System::Drawing::Size(220, 107);
			this->CazuriPanel->TabIndex = 10;
			// 
			// gunaTransfarantPictureBox2
			// 
			this->gunaTransfarantPictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransfarantPictureBox2->BaseColor = System::Drawing::Color::Black;
			this->gunaTransfarantPictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaTransfarantPictureBox2.Image")));
			this->gunaTransfarantPictureBox2->Location = System::Drawing::Point(126, 22);
			this->gunaTransfarantPictureBox2->Name = L"gunaTransfarantPictureBox2";
			this->gunaTransfarantPictureBox2->Size = System::Drawing::Size(64, 64);
			this->gunaTransfarantPictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaTransfarantPictureBox2->TabIndex = 10;
			this->gunaTransfarantPictureBox2->TabStop = false;
			// 
			// gunaLabel3
			// 
			this->gunaLabel3->AutoSize = true;
			this->gunaLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold));
			this->gunaLabel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->gunaLabel3->Location = System::Drawing::Point(12, 52);
			this->gunaLabel3->Name = L"gunaLabel3";
			this->gunaLabel3->Size = System::Drawing::Size(108, 28);
			this->gunaLabel3->TabIndex = 12;
			this->gunaLabel3->Text = L"12369856";
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
			this->VindecariPanel->Location = System::Drawing::Point(704, 507);
			this->VindecariPanel->Name = L"VindecariPanel";
			this->VindecariPanel->Radius = 10;
			this->VindecariPanel->Size = System::Drawing::Size(220, 107);
			this->VindecariPanel->TabIndex = 11;
			// 
			// gunaTransfarantPictureBox3
			// 
			this->gunaTransfarantPictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransfarantPictureBox3->BaseColor = System::Drawing::Color::Black;
			this->gunaTransfarantPictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaTransfarantPictureBox3.Image")));
			this->gunaTransfarantPictureBox3->Location = System::Drawing::Point(126, 22);
			this->gunaTransfarantPictureBox3->Name = L"gunaTransfarantPictureBox3";
			this->gunaTransfarantPictureBox3->Size = System::Drawing::Size(64, 64);
			this->gunaTransfarantPictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaTransfarantPictureBox3->TabIndex = 10;
			this->gunaTransfarantPictureBox3->TabStop = false;
			// 
			// gunaLabel5
			// 
			this->gunaLabel5->AutoSize = true;
			this->gunaLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold));
			this->gunaLabel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->gunaLabel5->Location = System::Drawing::Point(12, 52);
			this->gunaLabel5->Name = L"gunaLabel5";
			this->gunaLabel5->Size = System::Drawing::Size(108, 28);
			this->gunaLabel5->TabIndex = 12;
			this->gunaLabel5->Text = L"12369856";
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
			this->TestePanel->Location = System::Drawing::Point(941, 507);
			this->TestePanel->Name = L"TestePanel";
			this->TestePanel->Radius = 10;
			this->TestePanel->Size = System::Drawing::Size(219, 107);
			this->TestePanel->TabIndex = 12;
			// 
			// gunaTransfarantPictureBox4
			// 
			this->gunaTransfarantPictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->gunaTransfarantPictureBox4->BaseColor = System::Drawing::Color::Black;
			this->gunaTransfarantPictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gunaTransfarantPictureBox4.Image")));
			this->gunaTransfarantPictureBox4->Location = System::Drawing::Point(143, 22);
			this->gunaTransfarantPictureBox4->Name = L"gunaTransfarantPictureBox4";
			this->gunaTransfarantPictureBox4->Size = System::Drawing::Size(64, 64);
			this->gunaTransfarantPictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gunaTransfarantPictureBox4->TabIndex = 10;
			this->gunaTransfarantPictureBox4->TabStop = false;
			// 
			// gunaLabel7
			// 
			this->gunaLabel7->AutoSize = true;
			this->gunaLabel7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold));
			this->gunaLabel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(185)), static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->gunaLabel7->Location = System::Drawing::Point(12, 52);
			this->gunaLabel7->Name = L"gunaLabel7";
			this->gunaLabel7->Size = System::Drawing::Size(108, 28);
			this->gunaLabel7->TabIndex = 12;
			this->gunaLabel7->Text = L"12369856";
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
			// panelDesktopPanel
			// 
			this->panelDesktopPanel->BackColor = System::Drawing::Color::Transparent;
			this->panelDesktopPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktopPanel->Location = System::Drawing::Point(166, 0);
			this->panelDesktopPanel->Name = L"panelDesktopPanel";
			this->panelDesktopPanel->Size = System::Drawing::Size(1057, 662);
			this->panelDesktopPanel->TabIndex = 13;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1223, 662);
			this->Controls->Add(this->panelDesktopPanel);
			this->Controls->Add(this->TestePanel);
			this->Controls->Add(this->VindecariPanel);
			this->Controls->Add(this->CazuriPanel);
			this->Controls->Add(this->DecesePanel);
			this->Controls->Add(this->LabelSituatieGlobala);
			this->Controls->Add(this->HartaGlobala);
			this->Controls->Add(this->PanelSideMenu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SARS COV-2 MODEL MATEMATIC";
			this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
			this->PanelSideMenu->ResumeLayout(false);
			this->PredictieSubMeniu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HartaGlobala))->EndInit();
			this->DecesePanel->ResumeLayout(false);
			this->DecesePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox1))->EndInit();
			this->CazuriPanel->ResumeLayout(false);
			this->CazuriPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gunaTransfarantPictureBox2))->EndInit();
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

	private: 
		void customizeDesign()
		{
			tEST23::Dashboard::PredictieSubMeniu->Visible = false;
			showSituatieGlobala();
			
		}

		 void hideSubMenu()
		{
			 if (tEST23::Dashboard::PredictieSubMeniu->Visible == true)
			 {
				 tEST23::Dashboard::PredictieSubMeniu->Visible = false;
				 //tEST23::Dashboard::HartaGlobala->Visible = false;
			 }
		}


		 void hideSituatieGlobala()
		 {
			 tEST23::Dashboard::HartaGlobala->Visible = false;
			 tEST23::Dashboard::CazuriPanel->Visible = false;
			 tEST23::Dashboard::DecesePanel->Visible = false;
			 tEST23::Dashboard::VindecariPanel->Visible = false;
			 tEST23::Dashboard::TestePanel->Visible = false;
			 tEST23::Dashboard::LabelSituatieGlobala->Visible = false;
		 }


		 void showSituatieGlobala()
		 {
			 tEST23::Dashboard::HartaGlobala->Visible = true;
			 tEST23::Dashboard::CazuriPanel->Visible = true;
			 tEST23::Dashboard::DecesePanel->Visible = true;
			 tEST23::Dashboard::VindecariPanel->Visible = true;
			 tEST23::Dashboard::TestePanel->Visible = true;
			 tEST23::Dashboard::LabelSituatieGlobala->Visible = true;
		 }

		void showSubMenu(Guna::UI::WinForms::GunaShadowPanel^ subMenu)
		{
			if (subMenu->Visible == false)
			{
				hideSubMenu();
				subMenu->Visible = true;
				//tEST23::Dashboard::HartaGlobala->Visible = true;
			}
			else
				subMenu->Visible = false;
			    //tEST23::Dashboard::HartaGlobala->Visible = false;
		}

		void OpenChildForm(Form^ childForm )
		{
			if ( activeForm != nullptr )
			{
				activeForm->Close();
			}
			activeForm = childForm;
			childForm->TopLevel = false;
			childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			childForm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktopPanel->Controls->Add(childForm);
			this->panelDesktopPanel->Tag = childForm;
			childForm->BringToFront();
			childForm->Show();
			
		}




	private: 
		System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) 
		{

		}
	private:
		System::Void PredictieButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{

			showSubMenu(tEST23::Dashboard::PredictieSubMeniu);
		}
	private: 
		System::Void gunaButton7_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}

	private: 
		System::Void SituatieButon_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//showSituatieGlobala();
			//hideSituatieGlobala();
			tEST23::SituatieGlobala^ formcaz1 = gcnew tEST23::SituatieGlobala;
			OpenChildForm(formcaz1);
		}


	private: 
		System::Void CazuriButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			//hideSituatieGlobala();
			tEST23::CazuriForm^ formcaz = gcnew tEST23::CazuriForm;
			OpenChildForm(formcaz);
		}
	private: 
		System::Void gunaButton1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			tEST23::DeceseForm^ formcaz = gcnew tEST23::DeceseForm;
			OpenChildForm(formcaz);
		}
	private: 
		System::Void gunaButton2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			tEST23::VindecariForm^ formcaz = gcnew tEST23::VindecariForm;
			OpenChildForm(formcaz);
		}
	private: 
		System::Void gunaButton3_Click(System::Object^ sender, System::EventArgs^ e) 
		{ 
			tEST23::TesteForm^ formcaz = gcnew tEST23::TesteForm;
			OpenChildForm(formcaz);
		}
	private: 
		System::Void gunaButton4_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			tEST23::FactoriForm^ formcaz = gcnew tEST23::FactoriForm;
			OpenChildForm(formcaz);
		}
	private: 
		System::Void gunaButton6_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			tEST23::PrevenireForm^ formcaz = gcnew tEST23::PrevenireForm;
			OpenChildForm(formcaz);
		}
	private: System::Void gunaButton5_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			tEST23::HelpForm^ formcaz = gcnew tEST23::HelpForm;
			OpenChildForm(formcaz);

		}
};
}
