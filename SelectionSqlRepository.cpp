#include "SelectionSqlRepository.h"

SelectionSqlRepository::SelectionSqlRepository(String^ connectionString)
{
	this->connection = gcnew MySqlConnection(connectionString);
}

Object^ SelectionSqlRepository::index()
{
	this->connection->Open();

	DataTable^ dataTable = gcnew DataTable();
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM selections", connection);

	MySqlDataReader^ reader = command->ExecuteReader();
	dataTable->Load(reader);
	connection->Close();
	return dataTable;
}

SelectionEntity^ SelectionSqlRepository::show(Int32^ id)
{
	this->connection->Open();

	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM selections WHERE id = @id LIMIT 1", connection);
	command->Parameters->AddWithValue("id", id);

	MySqlDataReader^ reader = command->ExecuteReader();

	while (reader->Read())
	{
		SelectionEntity^ selection = gcnew SelectionEntity(
			reader->GetInt32("id"),
			reader->GetInt32("area_id"),
			reader->GetInt32("ranking"),
			reader->GetString("country"),
			reader->GetString("stadium"),
			reader->GetString("technical"),
			reader->GetString("goalkeeping_coach"),
			reader->GetString("physiotherapist"));

		this->connection->Close();
		return selection;
	}

	throw gcnew Exception("Not found");
}

void SelectionSqlRepository::store(SelectionEntity^ selection)
{
	this->connection->Open();

	MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO selections (area_id, ranking, country, stadium, technical, goalkeeping_coach, physiotherapist) VALUES (@areaId, @ranking, @country, @stadium, @technical, @goalkeepingCoach, @physiotherapist)", connection);

	command->Parameters->AddWithValue("areaId", selection->area_id);
	command->Parameters->AddWithValue("ranking", selection->ranking);
	command->Parameters->AddWithValue("country", selection->country);
	command->Parameters->AddWithValue("stadium", selection->stadium);
	command->Parameters->AddWithValue("technical", selection->technical);
	command->Parameters->AddWithValue("goalkeepingCoach", selection->goalkeeping_coach);
	command->Parameters->AddWithValue("physiotherapist", selection->physiotherapist);

	command->ExecuteNonQuery();

	this->connection->Close();
}

void SelectionSqlRepository::update(Int32^ id, SelectionEntity^ selection)
{
	this->connection->Open();

	MySqlCommand^ command = gcnew MySqlCommand("UPDATE selections SET area_id = @areaId, ranking = @ranking, country = @country, stadium = @stadium, technical = @technical, goalkeeping_coach = @goalkeepingCoach, physiotherapist = @physiotherapist WHERE id = @id", connection);

	command->Parameters->AddWithValue("id", id);
	command->Parameters->AddWithValue("areaId", selection->area_id);
	command->Parameters->AddWithValue("ranking", selection->ranking);
	command->Parameters->AddWithValue("country", selection->country);
	command->Parameters->AddWithValue("stadium", selection->stadium);
	command->Parameters->AddWithValue("technical", selection->technical);
	command->Parameters->AddWithValue("goalkeepingCoach", selection->goalkeeping_coach);
	command->Parameters->AddWithValue("physiotherapist", selection->physiotherapist);

	command->ExecuteNonQuery();

	this->connection->Close();
}

void SelectionSqlRepository::destroy(Int32^ id)
{
	this->connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("DELETE FROM selections WHERE id = @id", connection);
	command->Parameters->AddWithValue("id", id);
	command->ExecuteNonQuery();
	this->connection->Close();
}
