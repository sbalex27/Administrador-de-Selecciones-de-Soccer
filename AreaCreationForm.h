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
	/// Resumen de AreaCreationForm
	/// </summary>
	public ref class AreaCreationForm : public System::Windows::Forms::Form
	{
	public:
		AreaCreationForm(AreaRepository^ repository)
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
		~AreaCreationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::Button^ saveButton;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(62, 12);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(210, 20);
			this->nameTextBox->TabIndex = 1;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(197, 55);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 2;
			this->saveButton->Text = L"Guardar";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &AreaCreationForm::saveButton_Click);
			// 
			// AreaCreationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 90);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->label1);
			this->Name = L"AreaCreationForm";
			this->Text = L"Nueva Área";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AreaEntity^ area = gcnew AreaEntity(nameTextBox->Text);

		try
		{
			repository->store(area);
			MessageBox::Show("Área guardada");
			this->Close();
		}
		catch (Exception^ exception)
		{
			MessageBox::Show(exception->Message, "Error");
		}
	}
	};
}
