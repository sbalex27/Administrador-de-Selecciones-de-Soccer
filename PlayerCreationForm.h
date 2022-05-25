#pragma once
#include "PlayerRepository.h"

namespace SuperCampeones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PlayerCreationForm
	/// </summary>
	public ref class PlayerCreationForm : public System::Windows::Forms::Form
	{
	public:
		PlayerCreationForm(PlayerRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->repository = repository;
		}

		PlayerRepository^ repository;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PlayerCreationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ selectionIdTextBox;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ numberShirtTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ positionTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ ageTextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ skillsTextBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ legTextBox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ isNationalizedTextBox;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ belongingTeamTextBox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ sponsorTextBox;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ marketValueTextBox;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ saveButton;
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
			this->selectionIdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numberShirtTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->positionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->skillsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->legTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->isNationalizedTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->belongingTeamTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->sponsorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->marketValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID Selección";
			// 
			// selectionIdTextBox
			// 
			this->selectionIdTextBox->Location = System::Drawing::Point(109, 6);
			this->selectionIdTextBox->Name = L"selectionIdTextBox";
			this->selectionIdTextBox->Size = System::Drawing::Size(163, 20);
			this->selectionIdTextBox->TabIndex = 1;
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(109, 32);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(163, 20);
			this->nameTextBox->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre";
			// 
			// numberShirtTextBox
			// 
			this->numberShirtTextBox->Location = System::Drawing::Point(109, 58);
			this->numberShirtTextBox->Name = L"numberShirtTextBox";
			this->numberShirtTextBox->Size = System::Drawing::Size(163, 20);
			this->numberShirtTextBox->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Camisola";
			// 
			// positionTextBox
			// 
			this->positionTextBox->Location = System::Drawing::Point(109, 84);
			this->positionTextBox->Name = L"positionTextBox";
			this->positionTextBox->Size = System::Drawing::Size(163, 20);
			this->positionTextBox->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Posición";
			// 
			// ageTextBox
			// 
			this->ageTextBox->Location = System::Drawing::Point(109, 110);
			this->ageTextBox->Name = L"ageTextBox";
			this->ageTextBox->Size = System::Drawing::Size(163, 20);
			this->ageTextBox->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(71, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Edad";
			// 
			// skillsTextBox
			// 
			this->skillsTextBox->Location = System::Drawing::Point(109, 136);
			this->skillsTextBox->Name = L"skillsTextBox";
			this->skillsTextBox->Size = System::Drawing::Size(163, 20);
			this->skillsTextBox->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(41, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Habilidades";
			// 
			// legTextBox
			// 
			this->legTextBox->Location = System::Drawing::Point(109, 162);
			this->legTextBox->Name = L"legTextBox";
			this->legTextBox->Size = System::Drawing::Size(163, 20);
			this->legTextBox->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Pierna Fav.";
			// 
			// isNationalizedTextBox
			// 
			this->isNationalizedTextBox->Location = System::Drawing::Point(109, 188);
			this->isNationalizedTextBox->Name = L"isNationalizedTextBox";
			this->isNationalizedTextBox->Size = System::Drawing::Size(163, 20);
			this->isNationalizedTextBox->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(29, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Nacionalizado";
			// 
			// belongingTeamTextBox
			// 
			this->belongingTeamTextBox->Location = System::Drawing::Point(109, 214);
			this->belongingTeamTextBox->Name = L"belongingTeamTextBox";
			this->belongingTeamTextBox->Size = System::Drawing::Size(163, 20);
			this->belongingTeamTextBox->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(63, 217);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Equipo";
			// 
			// sponsorTextBox
			// 
			this->sponsorTextBox->Location = System::Drawing::Point(109, 240);
			this->sponsorTextBox->Name = L"sponsorTextBox";
			this->sponsorTextBox->Size = System::Drawing::Size(163, 20);
			this->sponsorTextBox->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(36, 243);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Patrocinador";
			// 
			// marketValueTextBox
			// 
			this->marketValueTextBox->Location = System::Drawing::Point(109, 266);
			this->marketValueTextBox->Name = L"marketValueTextBox";
			this->marketValueTextBox->Size = System::Drawing::Size(163, 20);
			this->marketValueTextBox->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 269);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Valor en Mercado";
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(197, 307);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 22;
			this->saveButton->Text = L"Guardar";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &PlayerCreationForm::saveButton_Click);
			// 
			// PlayerCreationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 342);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->marketValueTextBox);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->sponsorTextBox);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->belongingTeamTextBox);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->isNationalizedTextBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->legTextBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->skillsTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->ageTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->positionTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numberShirtTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->selectionIdTextBox);
			this->Controls->Add(this->label1);
			this->Name = L"PlayerCreationForm";
			this->Text = L"Nuevo Jugador";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			PlayerEntity^ player = gcnew PlayerEntity(
				Int32::Parse(selectionIdTextBox->Text),
				nameTextBox->Text,
				Int32::Parse(numberShirtTextBox->Text),
				positionTextBox->Text,
				Int32::Parse(ageTextBox->Text),
				skillsTextBox->Text,
				legTextBox->Text,
				Boolean::Parse(isNationalizedTextBox->Text),
				belongingTeamTextBox->Text,
				sponsorTextBox->Text,
				Single::Parse(marketValueTextBox->Text)
			);

			repository->store(player);

			MessageBox::Show("Jugador guardado");
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error", ex->Message);
		}
	}
	};
}
