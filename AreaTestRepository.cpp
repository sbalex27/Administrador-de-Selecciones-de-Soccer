#include "AreaTestRepository.h"

Object^ AreaTestRepository::index()
{
	DataTable^ dataTable = gcnew DataTable();

	dataTable->Columns->AddRange(gcnew array<DataColumn^>{gcnew DataColumn("id"), gcnew DataColumn("name")});

	dataTable->Rows->Add(1, "CONCACAF");
	dataTable->Rows->Add(2, "LA LIGA");

	return dataTable;
}

AreaEntity^ AreaTestRepository::show(Int32^ id)
{
	return gcnew AreaEntity(1, "CONCACAF");
}

void AreaTestRepository::store(AreaEntity^ area)
{
	return;
}

void AreaTestRepository::update(Int32^ id, AreaEntity^ area)
{
	return;
}

void AreaTestRepository::destroy(Int32^ id)
{
	return;
}
