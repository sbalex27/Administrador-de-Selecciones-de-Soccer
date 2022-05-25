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
	/// Resumen de PlayerDetailsForm
	/// </summary>
	public ref class PlayerDetailsForm : public System::Windows::Forms::Form
	{
	public:
		PlayerDetailsForm(PlayerRepository^ repository)
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
		~PlayerDetailsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ idTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ marketValueTextBox;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ sponsorTextBox;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ belongingTeamTextBox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ isNationalizedTextBox;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ legTextBox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ skillsTextBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ ageTextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ positionTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ numberShirtTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ selectionIdTextBox;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ updateButton;
	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::Button^ searchButton;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->idTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->marketValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->sponsorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->belongingTeamTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->isNationalizedTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->legTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->skillsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ageTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->positionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numberShirtTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->selectionIdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->searchButton);
			this->groupBox1->Controls->Add(this->idTextBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(260, 53);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// searchButton
			// 
			this->searchButton->Location = System::Drawing::Point(179, 17);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(75, 23);
			this->searchButton->TabIndex = 2;
			this->searchButton->Text = L"Buscar";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &PlayerDetailsForm::searchButton_Click);
			// 
			// idTextBox
			// 
			this->idTextBox->Location = System::Drawing::Point(31, 17);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(142, 20);
			this->idTextBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// marketValueTextBox
			// 
			this->marketValueTextBox->Location = System::Drawing::Point(103, 334);
			this->marketValueTextBox->Name = L"marketValueTextBox";
			this->marketValueTextBox->Size = System::Drawing::Size(163, 20);
			this->marketValueTextBox->TabIndex = 43;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 337);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 13);
			this->label11->TabIndex = 42;
			this->label11->Text = L"Valor en Mercado";
			// 
			// sponsorTextBox
			// 
			this->sponsorTextBox->Location = System::Drawing::Point(103, 308);
			this->sponsorTextBox->Name = L"sponsorTextBox";
			this->sponsorTextBox->Size = System::Drawing::Size(163, 20);
			this->sponsorTextBox->TabIndex = 41;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(30, 311);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 40;
			this->label10->Text = L"Patrocinador";
			// 
			// belongingTeamTextBox
			// 
			this->belongingTeamTextBox->Location = System::Drawing::Point(103, 282);
			this->belongingTeamTextBox->Name = L"belongingTeamTextBox";
			this->belongingTeamTextBox->Size = System::Drawing::Size(163, 20);
			this->belongingTeamTextBox->TabIndex = 39;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(57, 285);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 13);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Equipo";
			// 
			// isNationalizedTextBox
			// 
			this->isNationalizedTextBox->Location = System::Drawing::Point(103, 256);
			this->isNationalizedTextBox->Name = L"isNationalizedTextBox";
			this->isNationalizedTextBox->Size = System::Drawing::Size(163, 20);
			this->isNationalizedTextBox->TabIndex = 37;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Nacionalizado";
			// 
			// legTextBox
			// 
			this->legTextBox->Location = System::Drawing::Point(103, 230);
			this->legTextBox->Name = L"legTextBox";
			this->legTextBox->Size = System::Drawing::Size(163, 20);
			this->legTextBox->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 233);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Pierna Fav.";
			// 
			// skillsTextBox
			// 
			this->skillsTextBox->Location = System::Drawing::Point(103, 204);
			this->skillsTextBox->Name = L"skillsTextBox";
			this->skillsTextBox->Size = System::Drawing::Size(163, 20);
			this->skillsTextBox->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Habilidades";
			// 
			// ageTextBox
			// 
			this->ageTextBox->Location = System::Drawing::Point(103, 178);
			this->ageTextBox->Name = L"ageTextBox";
			this->ageTextBox->Size = System::Drawing::Size(163, 20);
			this->ageTextBox->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(65, 181);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Edad";
			// 
			// positionTextBox
			// 
			this->positionTextBox->Location = System::Drawing::Point(103, 152);
			this->positionTextBox->Name = L"positionTextBox";
			this->positionTextBox->Size = System::Drawing::Size(163, 20);
			this->positionTextBox->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Posición";
			// 
			// numberShirtTextBox
			// 
			this->numberShirtTextBox->Location = System::Drawing::Point(103, 126);
			this->numberShirtTextBox->Name = L"numberShirtTextBox";
			this->numberShirtTextBox->Size = System::Drawing::Size(163, 20);
			this->numberShirtTextBox->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Camisola";
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(103, 100);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(163, 20);
			this->nameTextBox->TabIndex = 25;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Nombre";
			// 
			// selectionIdTextBox
			// 
			this->selectionIdTextBox->Location = System::Drawing::Point(103, 74);
			this->selectionIdTextBox->Name = L"selectionIdTextBox";
			this->selectionIdTextBox->Size = System::Drawing::Size(163, 20);
			this->selectionIdTextBox->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(29, 77);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(68, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"ID Selección";
			// 
			// updateButton
			// 
			this->updateButton->Location = System::Drawing::Point(191, 381);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(75, 23);
			this->updateButton->TabIndex = 44;
			this->updateButton->Text = L"Actualizar";
			this->updateButton->UseVisualStyleBackColor = true;
			this->updateButton->Click += gcnew System::EventHandler(this, &PlayerDetailsForm::updateButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(110, 381);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(75, 23);
			this->deleteButton->TabIndex = 45;
			this->deleteButton->Text = L"Eliminar";
			this->deleteButton->UseVisualStyleBackColor = true;
			// 
			// PlayerDetailsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 416);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->updateButton);
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
			this->Controls->Add(this->label12);
			this->Controls->Add(this->groupBox1);
			this->Name = L"PlayerDetailsForm";
			this->Text = L"Detalles de Jugador";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			PlayerEntity^ player = repository->show(Int32::Parse(idTextBox->Text));

			selectionIdTextBox->Text = player->selection_id->ToString();
			nameTextBox->Text = player->name;
			numberShirtTextBox->Text = player->number_shirt->ToString();
			positionTextBox->Text = player->position;
			ageTextBox->Text = player->age->ToString();
			skillsTextBox->Text = player->skills;
			legTextBox->Text = player->leg;
			isNationalizedTextBox->Text = player->is_nationalized->ToString();
			belongingTeamTextBox->Text = player->belonging_team;
			sponsorTextBox->Text = player->sponsor;
			marketValueTextBox->Text = player->market_value->ToString();
		}
		catch (Exception^ exception)
		{
			MessageBox::Show("Error", exception->Message);
		}
	}
	private: System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e) {
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

			repository->update(Int32::Parse(idTextBox->Text), player);

			MessageBox::Show("Jugador actualizado");
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error", ex->Message);
		}
	}
	};
}
