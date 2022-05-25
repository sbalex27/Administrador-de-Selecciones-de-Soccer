#pragma once
#include "MatchSqlRepository.h"

namespace SuperCampeones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MatchCreationForm
	/// </summary>
	public ref class MatchCreationForm : public System::Windows::Forms::Form
	{
	public:
		MatchCreationForm(MatchRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->repository = repository;
		}

		MatchRepository^ repository;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MatchCreationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::TextBox^ dateTextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ visitorGoalsTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ localGoalsTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ typeTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ idVisitorTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ idLocalTextBox;
	private: System::Windows::Forms::Button^ saveButton;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->visitorGoalsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->localGoalsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->typeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->idVisitorTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->idLocalTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Fecha";
			// 
			// dateTextBox
			// 
			this->dateTextBox->Location = System::Drawing::Point(136, 142);
			this->dateTextBox->Name = L"dateTextBox";
			this->dateTextBox->Size = System::Drawing::Size(125, 20);
			this->dateTextBox->TabIndex = 26;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Goles Visitantes";
			// 
			// visitorGoalsTextBox
			// 
			this->visitorGoalsTextBox->Location = System::Drawing::Point(136, 116);
			this->visitorGoalsTextBox->Name = L"visitorGoalsTextBox";
			this->visitorGoalsTextBox->Size = System::Drawing::Size(125, 20);
			this->visitorGoalsTextBox->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Goles Locales";
			// 
			// localGoalsTextBox
			// 
			this->localGoalsTextBox->Location = System::Drawing::Point(136, 90);
			this->localGoalsTextBox->Name = L"localGoalsTextBox";
			this->localGoalsTextBox->Size = System::Drawing::Size(125, 20);
			this->localGoalsTextBox->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Tipo";
			// 
			// typeTextBox
			// 
			this->typeTextBox->Location = System::Drawing::Point(136, 64);
			this->typeTextBox->Name = L"typeTextBox";
			this->typeTextBox->Size = System::Drawing::Size(125, 20);
			this->typeTextBox->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"ID Visitante";
			// 
			// idVisitorTextBox
			// 
			this->idVisitorTextBox->Location = System::Drawing::Point(136, 38);
			this->idVisitorTextBox->Name = L"idVisitorTextBox";
			this->idVisitorTextBox->Size = System::Drawing::Size(125, 20);
			this->idVisitorTextBox->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"ID Local";
			// 
			// idLocalTextBox
			// 
			this->idLocalTextBox->Location = System::Drawing::Point(136, 12);
			this->idLocalTextBox->Name = L"idLocalTextBox";
			this->idLocalTextBox->Size = System::Drawing::Size(125, 20);
			this->idLocalTextBox->TabIndex = 16;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(186, 174);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 27;
			this->saveButton->Text = L"Guardar";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &MatchCreationForm::saveButton_Click);
			// 
			// MatchCreationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 209);
			this->Controls->Add(this->saveButton);
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
			this->Controls->Add(this->idLocalTextBox);
			this->Name = L"MatchCreationForm";
			this->Text = L"Nuevo Partido";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MatchEntity^ match = gcnew MatchEntity(
			idLocalTextBox->Text,
			idVisitorTextBox->Text,
			typeTextBox->Text,
			localGoalsTextBox->Text,
			visitorGoalsTextBox->Text,
			dateTextBox->Text
		);

		repository->store(match);
		MessageBox::Show("Encuentro guardado");
	}
};
}
