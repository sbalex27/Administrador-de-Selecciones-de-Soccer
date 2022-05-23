#pragma once

namespace SuperCampeones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ mainMenuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crearSelecciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crearEncuentroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aplicaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
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
			this->mainMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aplicaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearSelecciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearEncuentroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mainMenuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainMenuStrip
			// 
			this->mainMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->aplicaciónToolStripMenuItem
			});
			this->mainMenuStrip->Location = System::Drawing::Point(0, 0);
			this->mainMenuStrip->Name = L"mainMenuStrip";
			this->mainMenuStrip->Size = System::Drawing::Size(617, 24);
			this->mainMenuStrip->TabIndex = 1;
			this->mainMenuStrip->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->crearSelecciónToolStripMenuItem,
					this->crearEncuentroToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// aplicaciónToolStripMenuItem
			// 
			this->aplicaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->aplicaciónToolStripMenuItem->Name = L"aplicaciónToolStripMenuItem";
			this->aplicaciónToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->aplicaciónToolStripMenuItem->Text = L"Aplicación";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::salirToolStripMenuItem_Click);
			// 
			// crearSelecciónToolStripMenuItem
			// 
			this->crearSelecciónToolStripMenuItem->Name = L"crearSelecciónToolStripMenuItem";
			this->crearSelecciónToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->crearSelecciónToolStripMenuItem->Text = L"Crear Selección";
			// 
			// crearEncuentroToolStripMenuItem
			// 
			this->crearEncuentroToolStripMenuItem->Name = L"crearEncuentroToolStripMenuItem";
			this->crearEncuentroToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->crearEncuentroToolStripMenuItem->Text = L"Crear Encuentro";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 400);
			this->Controls->Add(this->mainMenuStrip);
			this->MainMenuStrip = this->mainMenuStrip;
			this->Name = L"Home";
			this->Text = L"Super Campeones";
			this->mainMenuStrip->ResumeLayout(false);
			this->mainMenuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
