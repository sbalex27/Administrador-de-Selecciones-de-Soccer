#pragma once
#include "MatchRepository.h"
#include "MatchDetailsForm.h"
#include "MatchCreationForm.h"
#include "MatchIndexForm.h"
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
			//TODO: agregar c?digo de constructor aqu?
			//
			this->matchRepository = matchRepository;
			this->playerRepository = playerRepository;
			this->selectionRepository = selectionRepository;
			this->areaRepository = areaRepository;

			LoadData();
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
	private: System::Windows::Forms::ToolStripMenuItem^ todasLas?reasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ?reaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ todosLosEncuentrosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ jugadorToolStripMenuItem;

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ crearSelecci?nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crearEncuentroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aplicaci?nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crearAreaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ crearJugadorToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ selectionsGridView;



	private: System::Windows::Forms::ToolStripMenuItem^ probarConexi?nToolStripMenuItem;


	protected:


	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearSelecci?nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearEncuentroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearAreaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->crearJugadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aplicaci?nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->probarConexi?nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->encuentroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jugadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seleccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->?reaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->coleccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todosLosJugadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todasLasSeleccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todasLas?reasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->todosLosEncuentrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewMatches = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->selectionsGridView = (gcnew System::Windows::Forms::DataGridView());
			this->mainMenuStrip->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatches))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectionsGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// mainMenuStrip
			// 
			this->mainMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->archivoToolStripMenuItem,
					this->aplicaci?nToolStripMenuItem, this->buscarToolStripMenuItem, this->coleccionesToolStripMenuItem
			});
			this->mainMenuStrip->Location = System::Drawing::Point(0, 0);
			this->mainMenuStrip->Name = L"mainMenuStrip";
			this->mainMenuStrip->Size = System::Drawing::Size(859, 24);
			this->mainMenuStrip->TabIndex = 1;
			this->mainMenuStrip->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->crearSelecci?nToolStripMenuItem,
					this->crearEncuentroToolStripMenuItem, this->crearAreaToolStripMenuItem, this->crearJugadorToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->archivoToolStripMenuItem->Text = L"Nuevo";
			// 
			// crearSelecci?nToolStripMenuItem
			// 
			this->crearSelecci?nToolStripMenuItem->Name = L"crearSelecci?nToolStripMenuItem";
			this->crearSelecci?nToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->crearSelecci?nToolStripMenuItem->Text = L"Crear Selecci?n";
			this->crearSelecci?nToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::crearSelecci?nToolStripMenuItem_Click);
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
			// aplicaci?nToolStripMenuItem
			// 
			this->aplicaci?nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->salirToolStripMenuItem,
					this->probarConexi?nToolStripMenuItem
			});
			this->aplicaci?nToolStripMenuItem->Name = L"aplicaci?nToolStripMenuItem";
			this->aplicaci?nToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->aplicaci?nToolStripMenuItem->Text = L"Aplicaci?n";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::salirToolStripMenuItem_Click);
			// 
			// probarConexi?nToolStripMenuItem
			// 
			this->probarConexi?nToolStripMenuItem->Name = L"probarConexi?nToolStripMenuItem";
			this->probarConexi?nToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->probarConexi?nToolStripMenuItem->Text = L"Probar Conexi?n";
			this->probarConexi?nToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::probarConexi?nToolStripMenuItem_Click);
			// 
			// buscarToolStripMenuItem
			// 
			this->buscarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->encuentroToolStripMenuItem,
					this->jugadorToolStripMenuItem, this->seleccionToolStripMenuItem, this->?reaToolStripMenuItem
			});
			this->buscarToolStripMenuItem->Name = L"buscarToolStripMenuItem";
			this->buscarToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->buscarToolStripMenuItem->Text = L"Buscar";
			// 
			// encuentroToolStripMenuItem
			// 
			this->encuentroToolStripMenuItem->Name = L"encuentroToolStripMenuItem";
			this->encuentroToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->encuentroToolStripMenuItem->Text = L"Encuentro";
			this->encuentroToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::encuentroToolStripMenuItem_Click);
			// 
			// jugadorToolStripMenuItem
			// 
			this->jugadorToolStripMenuItem->Name = L"jugadorToolStripMenuItem";
			this->jugadorToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->jugadorToolStripMenuItem->Text = L"Jugador";
			this->jugadorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::jugadorToolStripMenuItem_Click);
			// 
			// seleccionToolStripMenuItem
			// 
			this->seleccionToolStripMenuItem->Name = L"seleccionToolStripMenuItem";
			this->seleccionToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->seleccionToolStripMenuItem->Text = L"Selecci?n";
			this->seleccionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::seleccionToolStripMenuItem_Click);
			// 
			// ?reaToolStripMenuItem
			// 
			this->?reaToolStripMenuItem->Name = L"?reaToolStripMenuItem";
			this->?reaToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->?reaToolStripMenuItem->Text = L"?rea";
			this->?reaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::?reaToolStripMenuItem_Click);
			// 
			// coleccionesToolStripMenuItem
			// 
			this->coleccionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->todosLosJugadoresToolStripMenuItem,
					this->todasLasSeleccionesToolStripMenuItem, this->todasLas?reasToolStripMenuItem, this->todosLosEncuentrosToolStripMenuItem
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
			// todasLas?reasToolStripMenuItem
			// 
			this->todasLas?reasToolStripMenuItem->Name = L"todasLas?reasToolStripMenuItem";
			this->todasLas?reasToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->todasLas?reasToolStripMenuItem->Text = L"Todas las ?reas";
			this->todasLas?reasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::todasLas?reasToolStripMenuItem_Click);
			// 
			// todosLosEncuentrosToolStripMenuItem
			// 
			this->todosLosEncuentrosToolStripMenuItem->Name = L"todosLosEncuentrosToolStripMenuItem";
			this->todosLosEncuentrosToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->todosLosEncuentrosToolStripMenuItem->Text = L"Todos los Encuentros";
			this->todosLosEncuentrosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Home::todosLosEncuentrosToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridViewMatches);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox1->Location = System::Drawing::Point(0, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(496, 450);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"?ltimos Encuentros";
			// 
			// dataGridViewMatches
			// 
			this->dataGridViewMatches->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatches->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewMatches->Location = System::Drawing::Point(3, 16);
			this->dataGridViewMatches->Name = L"dataGridViewMatches";
			this->dataGridViewMatches->Size = System::Drawing::Size(490, 431);
			this->dataGridViewMatches->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->selectionsGridView);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(496, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(363, 450);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Selecciones";
			// 
			// selectionsGridView
			// 
			this->selectionsGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->selectionsGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->selectionsGridView->Location = System::Drawing::Point(3, 16);
			this->selectionsGridView->Name = L"selectionsGridView";
			this->selectionsGridView->Size = System::Drawing::Size(357, 431);
			this->selectionsGridView->TabIndex = 0;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 474);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectionsGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void LoadData()
	{
		this->dataGridViewMatches->DataSource = matchRepository->index();
		this->selectionsGridView->DataSource = selectionRepository->index();
	}

	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void crearSelecci?nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectionCreationForm^ selecitonCreationForm = gcnew SelectionCreationForm(this->selectionRepository);
		selecitonCreationForm->Show();
	}
	private: System::Void probarConexi?nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ connection = gcnew MySqlConnection("datasource=localhost;port=3306;username=root;password=root");
		MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM super_champions.players", connection);
		MySqlDataReader^ dataReader;
		DataTable^ dataTable = gcnew DataTable();

		try
		{
			connection->Open();
			dataReader = command->ExecuteReader();
			dataTable->Load(dataReader);

			MessageBox::Show("Conexi?n exitosa");
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
	private: System::Void todasLas?reasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AreaIndexForm^ areaIndexForm = gcnew AreaIndexForm(this->areaRepository);
		areaIndexForm->Show();
	}
	private: System::Void crearAreaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AreaCreationForm^ areaCreationForm = gcnew AreaCreationForm(this->areaRepository);
		areaCreationForm->Show();
	}
	private: System::Void ?reaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AreaDetailsForm^ areaDetailsForm = gcnew AreaDetailsForm(this->areaRepository);
		areaDetailsForm->Show();
	}
	private: System::Void todosLosEncuentrosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MatchIndexForm^ matchIndexForm = gcnew MatchIndexForm(this->matchRepository);
		matchIndexForm->Show();
	}
	};
}
