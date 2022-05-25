#include "MatchSqlRepository.h"

MatchSqlRepository::MatchSqlRepository(String^ connection)
{
	this->connection = gcnew MySqlConnection(connection);
}

Object^ MatchSqlRepository::index()
{
	DataTable^ dataTable = gcnew DataTable();
	connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM matches", connection);
	MySqlDataReader^ dataReader = command->ExecuteReader();
	dataTable->Load(dataReader);
	connection->Close();
	return dataTable;
}

MatchEntity^ MatchSqlRepository::show(String^ id)
{
	connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM matches WHERE id = " + id->ToString() + " LIMIT 1", connection);
	MySqlDataReader^ reader = command->ExecuteReader();
	while (reader->Read())
	{
		MatchEntity^ match = gcnew MatchEntity(
			reader->GetInt32("id"),
			reader->GetInt32("local_id"),
			reader->GetInt32("visitor_id"),
			reader->GetString("type"),
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
	connection->Open();

	MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO matches (local_id, visitor_id, type, local_goals, visitor_goals, date) VALUES (@localId, @visitorId, @type, @localGoals, @visitorGoals, @date)", connection);

	command->Parameters->AddWithValue("localId", match->local_id);
	command->Parameters->AddWithValue("visitorId", match->visitor_id);
	command->Parameters->AddWithValue("type", match->type);
	command->Parameters->AddWithValue("localGoals", match->local_goals);
	command->Parameters->AddWithValue("visitorGoals", match->visitor_goals);
	command->Parameters->AddWithValue("date", match->date);

	command->ExecuteNonQuery();

	connection->Close();
}

void MatchSqlRepository::update(String^ id, MatchEntity^ match)
{
	connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand(
		"UPDATE matches SET local_id = @localId, visitor_id = @visitorId, type = @type, local_goals = @localGoals, visitor_goals = @visitorGoals, date = @date where id = @id", connection);

	command->Parameters->AddWithValue("id", id);
	command->Parameters->AddWithValue("localId", match->local_id);
	command->Parameters->AddWithValue("visitorId", match->visitor_id);
	command->Parameters->AddWithValue("type", match->type);
	command->Parameters->AddWithValue("localGoals", match->local_goals);
	command->Parameters->AddWithValue("visitorGoals", match->visitor_goals);
	command->Parameters->AddWithValue("date", match->date);

	command->ExecuteNonQuery();

	connection->Close();
}

void MatchSqlRepository::destroy(String^ id)
{
	connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("DELETE FROM matches WHERE id = @id", connection);
	command->Parameters->AddWithValue("id", id);
	command->ExecuteNonQuery();
	connection->Close();
}
