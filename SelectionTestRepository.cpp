#include "SelectionTestRepository.h"

Object^ SelectionTestRepository::index()
{
	//auto list = gcnew List<SelectionEntity^>();

	//list->Add(gcnew SelectionEntity());
	//list->Add(gcnew SelectionEntity));

	//return list;

	DataTable^ dataTable = gcnew DataTable();
	array<DataColumn^>^ columns = gcnew array<DataColumn^>{
		gcnew DataColumn("Id"),
			gcnew DataColumn("Area Id"),
			gcnew DataColumn("Ranking"),
			gcnew DataColumn("Country"),
			gcnew DataColumn("Stadium"),
			gcnew DataColumn("Technical"),
			gcnew DataColumn("Goalkeeping Coach"),
			gcnew DataColumn("Physiotherapist"),
	};

	dataTable->Columns->AddRange(columns);
	dataTable->Rows->Add(1, 1, 10, "Guatemala", "Mateo Flores", "Alex", "Sergio", "Any");
	dataTable->Rows->Add(2, 2, 20, "El Salvador", "El Grande", "Roni", "Cristiano", "Messi");

	return dataTable;
}

SelectionEntity^ SelectionTestRepository::show(Int32^ id)
{
	return gcnew SelectionEntity(1, 1, 10, "Guatemala", "Mateo Flores", "Alex", "Sergio", "Any");
}

void SelectionTestRepository::store(SelectionEntity^ selection)
{
	return;
}

void SelectionTestRepository::update(Int32^ id, SelectionEntity^ selection)
{
	return;
}

void SelectionTestRepository::destroy(Int32^ id)
{
	return;
}
