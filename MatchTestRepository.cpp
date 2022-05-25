#include "MatchTestRepository.h"

MatchEntity^ MatchTestRepository::show(String^ id)
{
    return gcnew MatchEntity(2, 3, 4, "Amistoso", 1, 1, DateTime(2022, 11, 29));
}

void MatchTestRepository::store(MatchEntity^ match)
{
    return;
}

void MatchTestRepository::update(String^ id, MatchEntity^ match)
{
    return;
}

void MatchTestRepository::destroy(String^ id)
{
    return;
}

Object^ MatchTestRepository::index()
{
    DataTable^ dataTable = gcnew DataTable();
    array<DataColumn^>^ columns = gcnew array<DataColumn^>{
        gcnew DataColumn("Id"),
            gcnew DataColumn("Local Id"),
            gcnew DataColumn("Visitor Id"),
            gcnew DataColumn("Tipo"),
            gcnew DataColumn("Goles Locales"),
            gcnew DataColumn("Goles Visitantes"),
            gcnew DataColumn("Fecha"),
    };

    dataTable->Columns->AddRange(columns);
    dataTable->Rows->Add(1, 2, 3, "Official", 2, 0, DateTime(2022, 12, 1));
    dataTable->Rows->Add(2, 3, 4, "Friendly", 1, 1, DateTime(2022, 11, 29));

    return dataTable;
}
