#pragma once
#include "MatchRepository.h"
#include "MatchDetailsForm.h"
#include "MatchCreationForm.h"
#include "PlayerIndexForm.h"
#include "PlayerCreationForm.h"
#include "PlayerDetailsForm.h"
#include "SelectionIndexForm.h"
#include "SelectionCreationForm.h"
#include "SelectionDetailsForm.h"
#include "AreaRepository.h"
#include "AreaIndexForm.h"
#include "AreaCreationForm.h"
#include "AreaDetailsForm.h"

namespace SuperCampeones {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Resumen de Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(
			MatchRepository^ matchRepository,
			PlayerRepository^ playerRepository,
			SelectionRepository^ selectionRepository,
			AreaRepository^ areaRepository
		)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->matchRepository = matchRepository;
			this->playerRepository = playerRepository;
			this->selectionRepository = selectionRepository;
			this->areaRepository = areaRepository;

			this->dataGridViewMatches->DataSource = matchRepository->index();
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewMatches;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ encuentroToolStripMenuItem;
	public:
		MatchRepository^ matchRepository;
		PlayerRepository^ playerRepository;
		SelectionRepository^ selectionRepository;
		AreaRepository^ areaRepository;
	private: System::Windows::Forms::ToolStripMenuItem^ coleccionesToolStripMenuItem;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ todosLosJugadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ todasLasSeleccionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ seleccionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ todasLasÁreasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ jugadorToolStripMenuItem;

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
	private: System::Windows::Forms::ToolStripMenuItem^ crearAreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crearJugadorToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::ToolStripMenuItem^ probarConexiónToolStripMenuItem;


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
			this->mainMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearSelecciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearEncuentroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearAreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearJugadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aplicaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->probarConexiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->encuentroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seleccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->coleccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todosLosJugadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todasLasSeleccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todasLasÁreasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewMatches = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->áreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mainMenuStrip->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatches))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// mainMenuStrip
			// 
			this->mainMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->archivoToolStripMenuItem,
					this->aplicaciónToolStripMenuItem, this->buscarToolStripMenuItem, this->coleccionesToolStripMenuItem
			});
			this->mainMenuStrip->Location = System::Drawing::Point(0, 0);
			this->mainMenuStrip->Name = L"mainMenuStrip";
			this->mainMenuStrip->Size = System::Drawing::Size(790, 24);
			this->mainMenuStrip->TabIndex = 1;
			this->mainMenuStrip->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->crearSelecciónToolStripMenuItem,
					this->crearEncuentroToolStripMenuItem, this->crearAreaToolStripMenuItem, this->crearJugadorToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->archivoToolStripMenuItem->Text = L"Nuevo";
			// 
			// crearSelecciónToolStripMenuItem
			// 
			this->crearSelecciónToolStripMenuItem->Name = L"crearSelecciónToolStripMenuItem";
			this->crearSelecciónToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->crearSelecciónToolStripMenuItem->Text = L"Crear Selección";
			this->crearSelecciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::crearSelecciónToolStripMenuItem_Click);
			// 
			// crearEncuentroToolStripMenuItem
			// 
			this->crearEncuentroToolStripMenuItem->Name = L"crearEncuentroToolStripMenuItem";
			this->crearEncuentroToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->crearEncuentroToolStripMenuItem->Text = L"Crear Encuentro";
			this->crearEncuentroToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::crearEncuentroToolStripMenuItem_Click);
			// 
			// crearAreaToolStripMenuItem
			// 
			this->crearAreaToolStripMenuItem->Name = L"crearAreaToolStripMenuItem";
			this->crearAreaToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->crearAreaToolStripMenuItem->Text = L"Crear Area";
			this->crearAreaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::crearAreaToolStripMenuItem_Click);
			// 
			// crearJugadorToolStripMenuItem
			// 
			this->crearJugadorToolStripMenuItem->Name = L"crearJugadorToolStripMenuItem";
			this->crearJugadorToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->crearJugadorToolStripMenuItem->Text = L"Crear Jugador";
			this->crearJugadorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::crearJugadorToolStripMenuItem_Click);
			// 
			// aplicaciónToolStripMenuItem
			// 
			this->aplicaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->salirToolStripMenuItem,
					this->probarConexiónToolStripMenuItem
			});
			this->aplicaciónToolStripMenuItem->Name = L"aplicaciónToolStripMenuItem";
			this->aplicaciónToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->aplicaciónToolStripMenuItem->Text = L"Aplicación";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::salirToolStripMenuItem_Click);
			// 
			// probarConexiónToolStripMenuItem
			// 
			this->probarConexiónToolStripMenuItem->Name = L"probarConexiónToolStripMenuItem";
			this->probarConexiónToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->probarConexiónToolStripMenuItem->Text = L"Probar Conexión";
			this->probarConexiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::probarConexiónToolStripMenuItem_Click);
			// 
			// buscarToolStripMenuItem
			// 
			this->buscarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->encuentroToolStripMenuItem,
					this->jugadorToolStripMenuItem, this->seleccionToolStripMenuItem, this->áreaToolStripMenuItem
			});
			this->buscarToolStripMenuItem->Name = L"buscarToolStripMenuItem";
			this->buscarToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->buscarToolStripMenuItem->Text = L"Buscar";
			// 
			// encuentroToolStripMenuItem
			// 
			this->encuentroToolStripMenuItem->Name = L"encuentroToolStripMenuItem";
			this->encuentroToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->encuentroToolStripMenuItem->Text = L"Encuentro";
			this->encuentroToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::encuentroToolStripMenuItem_Click);
			// 
			// jugadorToolStripMenuItem
			// 
			this->jugadorToolStripMenuItem->Name = L"jugadorToolStripMenuItem";
			this->jugadorToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->jugadorToolStripMenuItem->Text = L"Jugador";
			this->jugadorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::jugadorToolStripMenuItem_Click);
			// 
			// seleccionToolStripMenuItem
			// 
			this->seleccionToolStripMenuItem->Name = L"seleccionToolStripMenuItem";
			this->seleccionToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->seleccionToolStripMenuItem->Text = L"Selección";
			this->seleccionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::seleccionToolStripMenuItem_Click);
			// 
			// coleccionesToolStripMenuItem
			// 
			this->coleccionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->todosLosJugadoresToolStripMenuItem,
					this->todasLasSeleccionesToolStripMenuItem, this->todasLasÁreasToolStripMenuItem
			});
			this->coleccionesToolStripMenuItem->Name = L"coleccionesToolStripMenuItem";
			this->coleccionesToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->coleccionesToolStripMenuItem->Text = L"Colecciones";
			// 
			// todosLosJugadoresToolStripMenuItem
			// 
			this->todosLosJugadoresToolStripMenuItem->Name = L"todosLosJugadoresToolStripMenuItem";
			this->todosLosJugadoresToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->todosLosJugadoresToolStripMenuItem->Text = L"Todos los Jugadores";
			this->todosLosJugadoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::todosLosJugadoresToolStripMenuItem_Click);
			// 
			// todasLasSeleccionesToolStripMenuItem
			// 
			this->todasLasSeleccionesToolStripMenuItem->Name = L"todasLasSeleccionesToolStripMenuItem";
			this->todasLasSeleccionesToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->todasLasSeleccionesToolStripMenuItem->Text = L"Todas las Selecciones";
			this->todasLasSeleccionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::todasLasSeleccionesToolStripMenuItem_Click);
			// 
			// todasLasÁreasToolStripMenuItem
			// 
			this->todasLasÁreasToolStripMenuItem->Name = L"todasLasÁreasToolStripMenuItem";
			this->todasLasÁreasToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->todasLasÁreasToolStripMenuItem->Text = L"Todas las Áreas";
			this->todasLasÁreasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::todasLasÁreasToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridViewMatches);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox1->Location = System::Drawing::Point(0, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(343, 376);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Últimos Encuentros";
			// 
			// dataGridViewMatches
			// 
			this->dataGridViewMatches->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatches->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewMatches->Location = System::Drawing::Point(3, 16);
			this->dataGridViewMatches->Name = L"dataGridViewMatches";
			this->dataGridViewMatches->Size = System::Drawing::Size(337, 357);
			this->dataGridViewMatches->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView2);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(343, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(447, 376);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Selecciones";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 16);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(441, 357);
			this->dataGridView2->TabIndex = 0;
			// 
			// áreaToolStripMenuItem
			// 
			this->áreaToolStripMenuItem->Name = L"áreaToolStripMenuItem";
			this->áreaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->áreaToolStripMenuItem->Text = L"Área";
			this->áreaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::áreaToolStripMenuItem_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 400);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->mainMenuStrip);
			this->MainMenuStrip = this->mainMenuStrip;
			this->Name = L"Home";
			this->Text = L"Super Campeones";
			this->mainMenuStrip->ResumeLayout(false);
			this->mainMenuStrip->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatches))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void crearSelecciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectionCreationForm^ selecitonCreationForm = gcnew SelectionCreationForm(this->selectionRepository);
		selecitonCreationForm->Show();
	}
	private: System::Void probarConexiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ connection = gcnew MySqlConnection("datasource=localhost;port=3306;username=root;password=root");
		MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM super_champions.players", connection);
		MySqlDataReader^ dataReader;
		DataTable^ dataTable = gcnew DataTable();

		try
		{
			connection->Open();
			dataReader = command->ExecuteReader();
			dataTable->Load(dataReader);

			MessageBox::Show("Conexión exitosa");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->ToString());
		}
		this->dataGridViewMatches->DataSource = dataTable;
	}
	private: System::Void encuentroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MatchDetailsForm^ matchDetailsForm = gcnew MatchDetailsForm(matchRepository);
		matchDetailsForm->Show();
	}
	private: System::Void crearEncuentroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MatchCreationForm^ creationForm = gcnew MatchCreationForm(matchRepository);
		creationForm->Show();
	}
	private: System::Void todosLosJugadoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PlayerIndexForm^ playerIndexForm = gcnew PlayerIndexForm(this->playerRepository);
		playerIndexForm->Show();
	}
	private: System::Void crearJugadorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PlayerCreationForm^ playerCreationForm = gcnew PlayerCreationForm(this->playerRepository);
		playerCreationForm->Show();
	}
	private: System::Void jugadorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PlayerDetailsForm^ playerDetailsForm = gcnew PlayerDetailsForm(this->playerRepository);
		playerDetailsForm->Show();
	}
	private: System::Void todasLasSeleccionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectionIndexForm^ selectionIndexForm = gcnew SelectionIndexForm(this->selectionRepository);
		selectionIndexForm->Show();
	}
	private: System::Void seleccionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectionDetailsForm^ selectionDetailsForm = gcnew SelectionDetailsForm(this->selectionRepository);
		selectionDetailsForm->Show();
	}
	private: System::Void todasLasÁreasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AreaIndexForm^ areaIndexForm = gcnew AreaIndexForm(this->areaRepository);
		areaIndexForm->Show();
	}
	private: System::Void crearAreaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AreaCreationForm^ areaCreationForm = gcnew AreaCreationForm(this->areaRepository);
		areaCreationForm->Show();
	}
	private: System::Void áreaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AreaDetailsForm^ areaDetailsForm = gcnew AreaDetailsForm(this->areaRepository);
		areaDetailsForm->Show();
	}
};
}
