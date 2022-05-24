#include "MatchSqlRepository.h"

MatchSqlRepository::MatchSqlRepository(String^ connection)
{
	this->connection = gcnew MySqlConnection(connection);
}

Object^ MatchSqlRepository::index()
{
	DataTable^ dataTable = gcnew DataTable();
	connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM super_champions.players", connection);
	MySqlDataReader^ dataReader = command->ExecuteReader();
	dataTable->Load(dataReader);
	connection->Close();
	return dataTable;
}

MatchEntity^ MatchSqlRepository::show(Int32^ id)
{
	throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
}

void MatchSqlRepository::store(MatchEntity^ match)
{
	throw gcnew System::NotImplementedException();
}

void MatchSqlRepository::update(Int32^ id, MatchEntity^ match)
{
	throw gcnew System::NotImplementedException();
}

void MatchSqlRepository::destroy(Int32^ id)
{
	throw gcnew System::NotImplementedException();
}
