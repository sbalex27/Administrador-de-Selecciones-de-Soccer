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
	/// Resumen de MatchIndexForm
	/// </summary>
	public ref class MatchIndexForm : public System::Windows::Forms::Form
	{
	public:
		MatchIndexForm(MatchRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->repository = repository;

			LoadData();
		}

		MatchRepository^ repository;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MatchIndexForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ matchesGridView;
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
			this->matchesGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matchesGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// matchesGridView
			// 
			this->matchesGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matchesGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->matchesGridView->Location = System::Drawing::Point(0, 0);
			this->matchesGridView->Name = L"matchesGridView";
			this->matchesGridView->Size = System::Drawing::Size(724, 409);
			this->matchesGridView->TabIndex = 0;
			// 
			// MatchIndexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 409);
			this->Controls->Add(this->matchesGridView);
			this->Name = L"MatchIndexForm";
			this->Text = L"Partidos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matchesGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void LoadData() 
	{
		this->matchesGridView->DataSource = repository->index();
	}
	};
}
