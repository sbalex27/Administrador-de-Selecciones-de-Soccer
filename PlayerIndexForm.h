#pragma once
#include "PlayerSqlRepository.h"

namespace SuperCampeones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PlayerIndexForm
	/// </summary>
	public ref class PlayerIndexForm : public System::Windows::Forms::Form
	{
	public:
		PlayerIndexForm(PlayerRepository^ repository)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			this->repository = repository;
			LoadData();
		}

		PlayerRepository^ repository;

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~PlayerIndexForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ playersGridView;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->playersGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playersGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// playersGridView
			// 
			this->playersGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->playersGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->playersGridView->Location = System::Drawing::Point(0, 0);
			this->playersGridView->Name = L"playersGridView";
			this->playersGridView->Size = System::Drawing::Size(638, 379);
			this->playersGridView->TabIndex = 0;
			// 
			// PlayerIndexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(638, 379);
			this->Controls->Add(this->playersGridView);
			this->Name = L"PlayerIndexForm";
			this->Text = L"Colecci�n de Jugadores";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playersGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void LoadData() {
			this->playersGridView->DataSource = this->repository->index();
		}
	};
}
