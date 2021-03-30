#pragma once

namespace tEST23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
		{
			InitializeComponent();
			HelpText();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI::WinForms::GunaElipsePanel^ gunaElipsePanel1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			this->gunaElipsePanel1 = (gcnew Guna::UI::WinForms::GunaElipsePanel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->gunaElipsePanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gunaElipsePanel1
			// 
			this->gunaElipsePanel1->BackColor = System::Drawing::Color::Transparent;
			this->gunaElipsePanel1->BaseColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->gunaElipsePanel1->Controls->Add(this->richTextBox1);
			this->gunaElipsePanel1->Location = System::Drawing::Point(35, 26);
			this->gunaElipsePanel1->Name = L"gunaElipsePanel1";
			this->gunaElipsePanel1->Radius = 40;
			this->gunaElipsePanel1->Size = System::Drawing::Size(815, 546);
			this->gunaElipsePanel1->TabIndex = 32;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->richTextBox1->ForeColor = System::Drawing::Color::MediumTurquoise;
			this->richTextBox1->Location = System::Drawing::Point(22, 25);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(769, 487);
			this->richTextBox1->TabIndex = 32;
			this->richTextBox1->Text = L"";
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1062, 685);
			this->Controls->Add(this->gunaElipsePanel1);
			this->Name = L"HelpForm";
			this->Text = L"HelpForm";
			this->gunaElipsePanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		void HelpText()
		{
			this->richTextBox1->Text =
				"Bun venit la sectiunea de help!\n\n" +
				"Pentru o usoara utilizare a aplicatie, aceasta sectiune doreste sa ofere informatii detaliate asupra modului de folosire a interfetei.\n\n" +
				"Pentru inceput, in partea din stanga se gaseste meniul care prezinta sase butoane :\nSituatie globala, Predictie, Factori, Metode de Prevenire,Help si Iesire.\n\n" +
				"\n\nSituatie globala\n\n" +
				"Dand click pe acest buton se va deschide o pagina a aplicatiei unde utilizatorul poate vizualiza printr-o harta interactiva modul de raspandire la nivel global al virusului SARS COV-2 pana la data de 25 ianuarie 2021, precum si statisticile privind numarul de decese, infectari, vindecari si teste efectuate pana la un moment dat (25 ianuarie 2021).\n\n"
				+ "\n\nPredictie\n\n"
				+ "Dand click pe acest buton se va deschide un submeniu care va contine urmatoarele butoane: Cazuri, Decese, Vindecari si Numar de teste.\n\nApasand pe oricare dintre aceste 4 butoane(Cazuri, Decese, Vindecari si Numar de teste) se va deschide o pagina a aplicatiei unde "
				+ "utilizatorul poate vizualiza printr - un grafic evolutia pe luna a virusului SARS COV-2 din februarie 2020 pana in decembrie 2020. Se mai regaseste si un buton intitulat sugestiv 'Click me', prin intermediul caruia, utilizatorul apasand pe el poate obtine predictia numarului de cazuri / teste / decese"
				+ "/vindecari pentru luna ianuarie 2021. Acesta ilustreaza valoarea reala a cazurilor / testelor / deceselor/vindecarilor, precum si acuratetea algoritmului de prezicere."
				+ "\n\n\n\nFactori\n\n"
				+ "Dand click pe acest buton se va deschide o pagina prin intermediul careia utilizatorul poate vizualiza informatii referitoare la factorii care pot infuenta raspandirea virusului SARS COV-2.\n\nAstfel, in partea din dreapta se vor gasi 6 butoane: Sistemul imunitar,"
				+ "Purtarea mastii, Psihologia umana, Umiditatea aerului, Modeul de transmitere si Distantarea sociala. Dand click pe oricare din aceste butoane ni se va deschide o caseta de text, unde se va afisa informatii referitoare la factorul respectiv."
				+ "\n\n\n\nMetode de Prevenire\n\n"
				+ "Dand click pe acest buton se va deschide o pagina a aplicatiei unde utilizatorul va putea vizualiza efectele metodelor de prevenire asupra evolutiei raspandirii virusului SARS COV-2 prin intermediul unui grafic. In partea dreapta se vor regasi doua butoane: Efectul Mastilor si Distantare sociala. Apasand pe unul dintre aceste butoane, se va afisa "
				+ "un grafic, precum si informatii referitoare la metoda respectiva de prevenire si efectul sau asupra ratei de raspandire a virusului.\n\n"
				+ "\n\nExit\n\nDand click pe acest buton, se poate iesi din aplicatie.";

			
		}



	};
}
