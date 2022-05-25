#pragma once
#include "SelectionRepository.h"

namespace SuperCampeones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SelectionCreationForm
	/// </summary>
	public ref class SelectionCreationForm : public System::Windows::Forms::Form
	{
	public:
		SelectionCreationForm(SelectionRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->repository = repository;
		}

		SelectionRepository^ repository;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SelectionCreationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ areaIdTextBox;
	private: System::Windows::Forms::TextBox^ rankingTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ countryTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ stadiumTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ technicalTextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ goalkeepingCoachTextBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ physiotherapistTextBox;
	private: System::Windows::Forms::Label^ label7;
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
			this->areaIdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->rankingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->countryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->stadiumTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->technicalTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->goalkeepingCoachTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->physiotherapistTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Area ID";
			// 
			// areaIdTextBox
			// 
			this->areaIdTextBox->Location = System::Drawing::Point(128, 10);
			this->areaIdTextBox->Name = L"areaIdTextBox";
			this->areaIdTextBox->Size = System::Drawing::Size(144, 20);
			this->areaIdTextBox->TabIndex = 1;
			// 
			// rankingTextBox
			// 
			this->rankingTextBox->Location = System::Drawing::Point(128, 36);
			this->rankingTextBox->Name = L"rankingTextBox";
			this->rankingTextBox->Size = System::Drawing::Size(144, 20);
			this->rankingTextBox->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ranking";
			// 
			// countryTextBox
			// 
			this->countryTextBox->Location = System::Drawing::Point(128, 62);
			this->countryTextBox->Name = L"countryTextBox";
			this->countryTextBox->Size = System::Drawing::Size(144, 20);
			this->countryTextBox->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Pais";
			// 
			// stadiumTextBox
			// 
			this->stadiumTextBox->Location = System::Drawing::Point(128, 88);
			this->stadiumTextBox->Name = L"stadiumTextBox";
			this->stadiumTextBox->Size = System::Drawing::Size(144, 20);
			this->stadiumTextBox->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(80, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Estadio";
			// 
			// technicalTextBox
			// 
			this->technicalTextBox->Location = System::Drawing::Point(128, 114);
			this->technicalTextBox->Name = L"technicalTextBox";
			this->technicalTextBox->Size = System::Drawing::Size(144, 20);
			this->technicalTextBox->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(76, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Técnico";
			// 
			// goalkeepingCoachTextBox
			// 
			this->goalkeepingCoachTextBox->Location = System::Drawing::Point(128, 140);
			this->goalkeepingCoachTextBox->Name = L"goalkeepingCoachTextBox";
			this->goalkeepingCoachTextBox->Size = System::Drawing::Size(144, 20);
			this->goalkeepingCoachTextBox->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Técninco de Porteros";
			// 
			// physiotherapistTextBox
			// 
			this->physiotherapistTextBox->Location = System::Drawing::Point(128, 166);
			this->physiotherapistTextBox->Name = L"physiotherapistTextBox";
			this->physiotherapistTextBox->Size = System::Drawing::Size(144, 20);
			this->physiotherapistTextBox->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(49, 169);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Fisioterapeuta";
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(197, 207);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 14;
			this->saveButton->Text = L"Guardar";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &SelectionCreationForm::saveButton_Click);
			// 
			// SelectionCreationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 241);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->physiotherapistTextBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->goalkeepingCoachTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->technicalTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->stadiumTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->countryTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->rankingTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->areaIdTextBox);
			this->Controls->Add(this->label1);
			this->Name = L"SelectionCreationForm";
			this->Text = L"SelectionCreationForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			SelectionEntity^ selection = gcnew SelectionEntity(
				Int32::Parse(areaIdTextBox->Text),
				Int32::Parse(rankingTextBox->Text),
				countryTextBox->Text,
				stadiumTextBox->Text,
				technicalTextBox->Text,
				goalkeepingCoachTextBox->Text,
				physiotherapistTextBox->Text);

			repository->store(selection);
			MessageBox::Show("Seleccion Registrada");
			this->Close();
		}
		catch (Exception^ exception)
		{
			MessageBox::Show("Error", exception->Message);
		}
	}
	};
}
