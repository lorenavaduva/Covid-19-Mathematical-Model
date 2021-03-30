#pragma once

#include "Header Files/Predictie_cazuri.h"
#include "Dashboard.h"
#include "CazuriForm.h"
#include "FactoriForm.h"
#include "PrevenireForm.h"

#include <string>

namespace tEST23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: Guna::UI::WinForms::GunaCircleProgressBar^ gunaCircleProgressBar1;
	private: Guna::UI::WinForms::GunaLabel^ gunaLabel1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->gunaCircleProgressBar1 = (gcnew Guna::UI::WinForms::GunaCircleProgressBar());
			this->gunaLabel1 = (gcnew Guna::UI::WinForms::GunaLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// gunaCircleProgressBar1
			// 
			this->gunaCircleProgressBar1->AnimationSpeed = 0.6F;
			this->gunaCircleProgressBar1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->gunaCircleProgressBar1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.25F, System::Drawing::FontStyle::Bold));
			this->gunaCircleProgressBar1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->gunaCircleProgressBar1->IdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->gunaCircleProgressBar1->IdleOffset = 21;
			this->gunaCircleProgressBar1->IdleThickness = 11;
			this->gunaCircleProgressBar1->Image = nullptr;
			this->gunaCircleProgressBar1->ImageSize = System::Drawing::Size(52, 52);
			this->gunaCircleProgressBar1->LineEndCap = System::Drawing::Drawing2D::LineCap::Round;
			this->gunaCircleProgressBar1->LineStartCap = System::Drawing::Drawing2D::LineCap::Round;
			this->gunaCircleProgressBar1->Location = System::Drawing::Point(215, 107);
			this->gunaCircleProgressBar1->Maximum = 300;
			this->gunaCircleProgressBar1->Name = L"gunaCircleProgressBar1";
			this->gunaCircleProgressBar1->ProgressMaxColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->gunaCircleProgressBar1->ProgressMinColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)), static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->gunaCircleProgressBar1->ProgressOffset = 20;
			this->gunaCircleProgressBar1->Size = System::Drawing::Size(188, 185);
			this->gunaCircleProgressBar1->TabIndex = 0;
			this->gunaCircleProgressBar1->TextRenderingHint = Guna::UI::WinForms::DrawingTextRenderingHint::ClearTypeGridFit;
			this->gunaCircleProgressBar1->UseProgressPercentText = true;
			this->gunaCircleProgressBar1->Click += gcnew System::EventHandler(this, &Form1::gunaCircleProgressBar1_Click);
			// 
			// gunaLabel1
			// 
			this->gunaLabel1->AutoSize = true;
			this->gunaLabel1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 14.75F, System::Drawing::FontStyle::Bold));
			this->gunaLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->gunaLabel1->Location = System::Drawing::Point(255, 295);
			this->gunaLabel1->Name = L"gunaLabel1";
			this->gunaLabel1->Size = System::Drawing::Size(108, 26);
			this->gunaLabel1->TabIndex = 1;
			this->gunaLabel1->Text = L"Loading...";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(610, 407);
			this->Controls->Add(this->gunaLabel1);
			this->Controls->Add(this->gunaCircleProgressBar1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Opacity = 0.8;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	
	}


    private: System::Void gunaCircleProgressBar1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		gunaCircleProgressBar1->Increment(4);
		if (gunaCircleProgressBar1->Value == 300)
		{
			timer1->Enabled = false;
			
			this->Close();
			
		}
	}
};
}
