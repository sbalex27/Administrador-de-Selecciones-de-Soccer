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
	/// Resumen de AreaIndexForm
	/// </summary>
	public ref class AreaIndexForm : public System::Windows::Forms::Form
	{
	public:
		AreaIndexForm(AreaRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->repository = repository;

			LoadData();
		}
	private: System::Windows::Forms::DataGridView^ areasGridView;
	public:

		AreaRepository^ repository;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AreaIndexForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->areasGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->areasGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// areasGridView
			// 
			this->areasGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->areasGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->areasGridView->Location = System::Drawing::Point(0, 0);
			this->areasGridView->Name = L"areasGridView";
			this->areasGridView->Size = System::Drawing::Size(338, 414);
			this->areasGridView->TabIndex = 0;
			// 
			// AreaIndexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 414);
			this->Controls->Add(this->areasGridView);
			this->Name = L"AreaIndexForm";
			this->Text = L"Areas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->areasGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void LoadData() {
			areasGridView->DataSource = repository->index();
		}
	};
}
