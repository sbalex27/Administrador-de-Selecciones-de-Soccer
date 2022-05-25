#pragma once
#include "AreaRepository.h"

namespace SuperCampeones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AreaDetailsForm
	/// </summary>
	public ref class AreaDetailsForm : public System::Windows::Forms::Form
	{
	public:
		AreaDetailsForm(AreaRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			this->repository = repository;
		}

		AreaRepository^ repository;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AreaDetailsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::TextBox^ idTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ updateButton;
	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::Label^ label2;

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
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox1->Size = System::Drawing::Size(260, 55);
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
			this->searchButton->Click += gcnew System::EventHandler(this, &AreaDetailsForm::searchButton_Click);
			// 
			// idTextBox
			// 
			this->idTextBox->Location = System::Drawing::Point(30, 19);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(143, 20);
			this->idTextBox->TabIndex = 1;
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
			// updateButton
			// 
			this->updateButton->Location = System::Drawing::Point(197, 115);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(75, 23);
			this->updateButton->TabIndex = 1;
			this->updateButton->Text = L"Actualizar";
			this->updateButton->UseVisualStyleBackColor = true;
			this->updateButton->Click += gcnew System::EventHandler(this, &AreaDetailsForm::updateButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(116, 115);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(75, 23);
			this->deleteButton->TabIndex = 2;
			this->deleteButton->Text = L"Eliminar";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &AreaDetailsForm::deleteButton_Click);
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(68, 73);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(204, 20);
			this->nameTextBox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre";
			// 
			// AreaDetailsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 150);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->updateButton);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AreaDetailsForm";
			this->Text = L"Detalles de Área";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			AreaEntity^ area = this->repository->show(Int32::Parse(idTextBox->Text));
			this->nameTextBox->Text = area->name;
		}
		catch (Exception^ exception)
		{
			MessageBox::Show(exception->Message, "Error");
		}
	}
	private: System::Void updateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			AreaEntity^ area = gcnew AreaEntity(nameTextBox->Text);
			this->repository->update(Int32::Parse(idTextBox->Text), area);
			MessageBox::Show("Área Actualizada");
		}
		catch (Exception^ exception)
		{
			MessageBox::Show(exception->Message, "Error");
		}
	}
	private: System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->repository->destroy(Int32::Parse(idTextBox->Text));
			MessageBox::Show("Área Eliminada");
			this->Close();
		}
		catch (Exception^ exception)
		{
			MessageBox::Show(exception->Message, "Error");
		}
	}
	};
}
