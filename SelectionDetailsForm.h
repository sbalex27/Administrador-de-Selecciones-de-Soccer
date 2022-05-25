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
	/// Resumen de SelectionDetailsForm
	/// </summary>
	public ref class SelectionDetailsForm : public System::Windows::Forms::Form
	{
	public:
		SelectionDetailsForm(SelectionRepository^ repository)
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
		~SelectionDetailsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::TextBox^ idTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ physiotherapistTextBox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ goalkeepingCoachTextBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ technicalTextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ stadiumTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ countryTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ rankingTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ areaIdTextBox;
	private: System::Windows::Forms::Label^ label8;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->idTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->physiotherapistTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->goalkeepingCoachTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->technicalTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->stadiumTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->countryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rankingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->areaIdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox1->Size = System::Drawing::Size(260, 56);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// idTextBox
			// 
			this->idTextBox->Location = System::Drawing::Point(30, 19);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(143, 20);
			this->idTextBox->TabIndex = 1;
			// 
			// searchButton
			// 
			this->searchButton->Location = System::Drawing::Point(179, 17);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(75, 23);
			this->searchButton->TabIndex = 2;
			this->searchButton->Text = L"Buscar";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &SelectionDetailsForm::searchButton_Click);
			// 
			// physiotherapistTextBox
			// 
			this->physiotherapistTextBox->Location = System::Drawing::Point(128, 235);
			this->physiotherapistTextBox->Name = L"physiotherapistTextBox";
			this->physiotherapistTextBox->Size = System::Drawing::Size(144, 20);
			this->physiotherapistTextBox->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(49, 238);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Fisioterapeuta";
			// 
			// goalkeepingCoachTextBox
			// 
			this->goalkeepingCoachTextBox->Location = System::Drawing::Point(128, 209);
			this->goalkeepingCoachTextBox->Name = L"goalkeepingCoachTextBox";
			this->goalkeepingCoachTextBox->Size = System::Drawing::Size(144, 20);
			this->goalkeepingCoachTextBox->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 212);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Técninco de Porteros";
			// 
			// technicalTextBox
			// 
			this->technicalTextBox->Location = System::Drawing::Point(128, 183);
			this->technicalTextBox->Name = L"technicalTextBox";
			this->technicalTextBox->Size = System::Drawing::Size(144, 20);
			this->technicalTextBox->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(76, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Técnico";
			// 
			// stadiumTextBox
			// 
			this->stadiumTextBox->Location = System::Drawing::Point(128, 157);
			this->stadiumTextBox->Name = L"stadiumTextBox";
			this->stadiumTextBox->Size = System::Drawing::Size(144, 20);
			this->stadiumTextBox->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(80, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Estadio";
			// 
			// countryTextBox
			// 
			this->countryTextBox->Location = System::Drawing::Point(128, 131);
			this->countryTextBox->Name = L"countryTextBox";
			this->countryTextBox->Size = System::Drawing::Size(144, 20);
			this->countryTextBox->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(95, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Pais";
			// 
			// rankingTextBox
			// 
			this->rankingTextBox->Location = System::Drawing::Point(128, 105);
			this->rankingTextBox->Name = L"rankingTextBox";
			this->rankingTextBox->Size = System::Drawing::Size(144, 20);
			this->rankingTextBox->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Ranking";
			// 
			// areaIdTextBox
			// 
			this->areaIdTextBox->Location = System::Drawing::Point(128, 79);
			this->areaIdTextBox->Name = L"areaIdTextBox";
			this->areaIdTextBox->Size = System::Drawing::Size(144, 20);
			this->areaIdTextBox->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(79, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Area ID";
			// 
			// updateButton
			// 
			this->updateButton->Location = System::Drawing::Point(197, 280);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(75, 23);
			this->updateButton->TabIndex = 28;
			this->updateButton->Text = L"Actualizar";
			this->updateButton->UseVisualStyleBackColor = true;
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(116, 280);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(75, 23);
			this->deleteButton->TabIndex = 29;
			this->deleteButton->Text = L"Eliminar";
			this->deleteButton->UseVisualStyleBackColor = true;
			// 
			// SelectionDetailsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 323);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->updateButton);
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
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox1);
			this->Name = L"SelectionDetailsForm";
			this->Text = L"Detalles de la Selección";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			SelectionEntity^ selection = this->repository->show(Int32::Parse(idTextBox->Text));

			this->areaIdTextBox->Text = selection->area_id->ToString();
			this->rankingTextBox->Text = selection->ranking->ToString();
			this->countryTextBox->Text = selection->country;
			this->stadiumTextBox->Text = selection->stadium;
			this->technicalTextBox->Text = selection->technical;
			this->goalkeepingCoachTextBox->Text = selection->goalkeeping_coach;
			this->physiotherapistTextBox->Text = selection->physiotherapist;
		}
		catch (Exception^ exception)
		{
			MessageBox::Show(exception->Message, "Error");
		}
	}
	};
}
