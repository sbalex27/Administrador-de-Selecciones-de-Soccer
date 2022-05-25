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
	/// Resumen de SelectionIndexForm
	/// </summary>
	public ref class SelectionIndexForm : public System::Windows::Forms::Form
	{
	public:
		SelectionIndexForm(SelectionRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->repository = repository;
			LoadData();
		}

		SelectionRepository^ repository;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SelectionIndexForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ selectionsGridView;
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
			this->selectionsGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectionsGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// selectionsGridView
			// 
			this->selectionsGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->selectionsGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->selectionsGridView->Location = System::Drawing::Point(0, 0);
			this->selectionsGridView->Name = L"selectionsGridView";
			this->selectionsGridView->Size = System::Drawing::Size(839, 435);
			this->selectionsGridView->TabIndex = 0;
			// 
			// SelectionIndexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 435);
			this->Controls->Add(this->selectionsGridView);
			this->Name = L"SelectionIndexForm";
			this->Text = L"Selecciones";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectionsGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void LoadData() {
			this->selectionsGridView->DataSource = repository->index();
		}
	};
}
