#pragma once

#include "MatchRepository.h"

namespace SuperCampeones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MatchDetailsForm
	/// </summary>
	public ref class MatchDetailsForm : public System::Windows::Forms::Form
	{
	public:
		MatchDetailsForm(MatchRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->repository = repository;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MatchDetailsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelId;
	protected:
	private: System::Windows::Forms::TextBox^ idTextBox;
	private: System::Windows::Forms::Button^ searchButton;


	protected:
		MatchRepository^ repository;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ idLocalTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ idVisitorTextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ typeTextBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ localGoalsTextBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ visitorGoalsTextBox;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ dateTextBox;
	private: System::Windows::Forms::Button^ updateButton;
	private: System::Windows::Forms::Button^ deleteButton;


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
			this->labelId = (gcnew System::Windows::Forms::Label());
			this->idTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->idLocalTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->idVisitorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->typeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->localGoalsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->visitorGoalsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelId
			// 
			this->labelId->AutoSize = true;
			this->labelId->Location = System::Drawing::Point(6, 24);
			this->labelId->Name = L"labelId";
			this->labelId->Size = System::Drawing::Size(18, 13);
			this->labelId->TabIndex = 0;
			this->labelId->Text = L"ID";
			// 
			// idTextBox
			// 
			this->idTextBox->Location = System::Drawing::Point(47, 21);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(125, 20);
			this->idTextBox->TabIndex = 1;
			// 
			// searchButton
			// 
			this->searchButton->Location = System::Drawing::Point(178, 19);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(75, 23);
			this->searchButton->TabIndex = 2;
			this->searchButton->Text = L"Buscar";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &MatchDetailsForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelId);
			this->groupBox1->Controls->Add(this->searchButton);
			this->groupBox1->Controls->Add(this->idTextBox);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(259, 53);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ID Local";
			// 
			// idLocalTextBox
			// 
			this->idLocalTextBox->Location = System::Drawing::Point(140, 71);
			this->idLocalTextBox->Name = L"idLocalTextBox";
			this->idLocalTextBox->Size = System::Drawing::Size(125, 20);
			this->idLocalTextBox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ID Visitante";
			// 
			// idVisitorTextBox
			// 
			this->idVisitorTextBox->Location = System::Drawing::Point(140, 97);
			this->idVisitorTextBox->Name = L"idVisitorTextBox";
			this->idVisitorTextBox->Size = System::Drawing::Size(125, 20);
			this->idVisitorTextBox->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Tipo";
			// 
			// typeTextBox
			// 
			this->typeTextBox->Location = System::Drawing::Point(140, 123);
			this->typeTextBox->Name = L"typeTextBox";
			this->typeTextBox->Size = System::Drawing::Size(125, 20);
			this->typeTextBox->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Goles Locales";
			// 
			// localGoalsTextBox
			// 
			this->localGoalsTextBox->Location = System::Drawing::Point(140, 149);
			this->localGoalsTextBox->Name = L"localGoalsTextBox";
			this->localGoalsTextBox->Size = System::Drawing::Size(125, 20);
			this->localGoalsTextBox->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Goles Visitantes";
			// 
			// visitorGoalsTextBox
			// 
			this->visitorGoalsTextBox->Location = System::Drawing::Point(140, 175);
			this->visitorGoalsTextBox->Name = L"visitorGoalsTextBox";
			this->visitorGoalsTextBox->Size = System::Drawing::Size(125, 20);
			this->visitorGoalsTextBox->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 204);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Fecha";
			// 
			// dateTextBox
			// 
			this->dateTextBox->Location = System::Drawing::Point(140, 201);
			this->dateTextBox->Name = L"dateTextBox";
			this->dateTextBox->Size = System::Drawing::Size(125, 20);
			this->dateTextBox->TabIndex = 14;
			// 
			// updateButton
			// 
			this->updateButton->Location = System::Drawing::Point(196, 244);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(75, 23);
			this->updateButton->TabIndex = 15;
			this->updateButton->Text = L"Actualizar";
			this->updateButton->UseVisualStyleBackColor = true;
			this->updateButton->Click += gcnew System::EventHandler(this, &MatchDetailsForm::updateButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(115, 244);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(75, 23);
			this->deleteButton->TabIndex = 16;
			this->deleteButton->Text = L"Eliminar";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &MatchDetailsForm::deleteButton_Click);
			// 
			// MatchDetailsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 285);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->updateButton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dateTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->visitorGoalsTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->localGoalsTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->typeTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->idVisitorTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->idLocalTextBox);
			this->Name = L"MatchDetailsForm";
			this->Text = L"MatchDetailsForm";
			this->Load += gcnew System::EventHandler(this, &MatchDetailsForm::MatchDetailsForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MatchEntity^ result = repository->show(idTextBox->Text);

		idLocalTextBox->Text = result->local_id->ToString();
		idVisitorTextBox->Text = result->visitor_id->ToString();
		typeTextBox->Text = result->type;
		localGoalsTextBox->Text = result->local_goals->ToString();
		visitorGoalsTextBox->Text = result->visitor_goals->ToString();
		dateTextBox->Text = result->date->ToShortDateString();

	}
	private: System::Void MatchDetailsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MatchEntity^ toUpdate = gcnew MatchEntity(
			idLocalTextBox->Text,
			idVisitorTextBox->Text,
			typeTextBox->Text,
			localGoalsTextBox->Text,
			visitorGoalsTextBox->Text,
			dateTextBox->Text
		);

		repository->update(idTextBox->Text, toUpdate);

		MessageBox::Show("Actualización completada");
	}
	private: System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		repository->destroy(idTextBox->Text);

		MessageBox::Show("Partido eliminado");
	}
};
}
