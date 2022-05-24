#include "MatchSqlRepository.h"

MatchSqlRepository::MatchSqlRepository(String^ connection)
{
	this->connection = gcnew MySqlConnection(connection);
}

Object^ MatchSqlRepository::index()
{
	DataTable^ dataTable = gcnew DataTable();
	connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM super_champions.matches", connection);
	MySqlDataReader^ dataReader = command->ExecuteReader();
	dataTable->Load(dataReader);
	connection->Close();
	return dataTable;
}

MatchEntity^ MatchSqlRepository::show(String^ id)
{
	connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM super_champions.matches WHERE id = " + id->ToString() + " LIMIT 1", connection);
	MySqlDataReader^ reader = command->ExecuteReader();
	while (reader->Read())
	{
		MatchEntity^ match = gcnew MatchEntity(
			reader->GetInt32("id"),
			reader->GetInt32("local_id"),
			reader->GetInt32("visitor_id"),
			reader->GetString("type") == "Official" ? MatchType::Official : MatchType::Friendly,
			reader->GetInt32("local_goals"),
			reader->GetInt32("visitor_goals"),
			reader->GetDateTime("date")
		);

		connection->Close();
		return match;
	}

	throw gcnew Exception("No results");
}

void MatchSqlRepository::store(MatchEntity^ match)
{
	throw gcnew System::NotImplementedException();
}

void MatchSqlRepository::update(String^ id, MatchEntity^ match)
{
	throw gcnew System::NotImplementedException();
}

void MatchSqlRepository::destroy(String^ id)
{
	throw gcnew System::NotImplementedException();
}
