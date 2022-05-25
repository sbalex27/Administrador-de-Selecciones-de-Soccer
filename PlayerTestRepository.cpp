#include "PlayerTestRepository.h"

Object^ PlayerTestRepository::index()
{
	DataTable^ dataTable = gcnew DataTable();
	array<DataColumn^>^ columns = gcnew array<DataColumn^>{
		gcnew DataColumn("Id"),
			gcnew DataColumn("Selection Id"),
			gcnew DataColumn("Name"),
			gcnew DataColumn("Number shirt"),
			gcnew DataColumn("Position"),
			gcnew DataColumn("Age"),
			gcnew DataColumn("Skills"),
			gcnew DataColumn("Leg"),
			gcnew DataColumn("Nationalized"),
			gcnew DataColumn("Belonging Team"),
			gcnew DataColumn("Sponsor"),
			gcnew DataColumn("Market Value"),
	};

	dataTable->Columns->AddRange(columns);
	dataTable->Rows->Add(1, 1, "Alex", 27, "Medium", 22, "Perfect", "Right", false, "RM", "Apple", 20000.00f);
	dataTable->Rows->Add(2, 1, "Sergio", 30, "Center", 21, "Perfect", "Left", true, "FCB", "Android", 15000.00f);

	return dataTable;
}

PlayerEntity^ PlayerTestRepository::show(Int32^ id)
{
	return gcnew PlayerEntity(1, 1, "Alex", 7, "Central", 22, "Perfect", "Right", false, "Rojos", "Apple", 1000000.00f);
}

void PlayerTestRepository::store(PlayerEntity^ player)
{
	return;
}

void PlayerTestRepository::update(Int32^ id, PlayerEntity^ player)
{
	return;
}

void PlayerTestRepository::destroy(Int32^ id)
{
	return;
}
