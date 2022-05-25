#include "PlayerSqlRepository.h"

PlayerSqlRepository::PlayerSqlRepository(String^ connectionString)
{
	this->connection = gcnew MySqlConnection(connectionString);
}

Object^ PlayerSqlRepository::index()
{
	this->connection->Open();

	DataTable^ dataTable = gcnew DataTable();
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM players", connection);
	MySqlDataReader^ reader = command->ExecuteReader();
	dataTable->Load(reader);
	connection->Close();
	return dataTable;
}

PlayerEntity^ PlayerSqlRepository::show(Int32^ id)
{
	this->connection->Open();

	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM players WHERE id = @id", connection);

	command->Parameters->AddWithValue("id", id);

	MySqlDataReader^ reader = command->ExecuteReader();

	while (reader->Read())
	{
		PlayerEntity^ player = gcnew PlayerEntity(
			reader->GetInt32("id"),
			reader->GetInt32("selection_id"),
			reader->GetString("name"),
			reader->GetInt32("number_shirt"),
			reader->GetString("position"),
			reader->GetInt32("age"),
			reader->GetString("skills"),
			reader->GetString("leg"),
			reader->GetBoolean("is_nationalized"),
			reader->GetString("belonging_team"),
			reader->GetString("sponsor"),
			reader->GetFloat("market_value")
		);

		connection->Close();
		return player;
	}

	throw gcnew Exception("No results");
}

void PlayerSqlRepository::store(PlayerEntity^ player)
{
	connection->Open();

	MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO players (selection_id, name, number_shirt, position, age, skills, leg, is_nationalized, belonging_team, sponsor, market_value) VALUES (@selectionId, @name, @numberShirt, @position, @age, @skills, @leg, @isNationalized, @belongingTeam, @sponsor, @marketValue)", connection);

	command->Parameters->AddWithValue("selectionId", player->selection_id);
	command->Parameters->AddWithValue("name", player->name);
	command->Parameters->AddWithValue("numberShirt", player->number_shirt);
	command->Parameters->AddWithValue("position", player->position);
	command->Parameters->AddWithValue("age", player->age);
	command->Parameters->AddWithValue("skills", player->skills);
	command->Parameters->AddWithValue("leg", player->leg);
	command->Parameters->AddWithValue("isNationalized", player->is_nationalized);
	command->Parameters->AddWithValue("belongingTeam", player->belonging_team);
	command->Parameters->AddWithValue("sponsor", player->sponsor);
	command->Parameters->AddWithValue("marketValue", player->market_value);

	command->ExecuteNonQuery();

	connection->Close();
}

void PlayerSqlRepository::update(Int32^ id, PlayerEntity^ player)
{
	connection->Open();

	MySqlCommand^ command = gcnew MySqlCommand("UPDATE players SET selection_id = @selectionId, name = @name, number_shirt = @numberShirt, position = @position, age = @age, skills = @skills, leg = @leg, is_nationalized = @isNationalized, belonging_team = @belongingTeam, sponsor = @sponsor, market_value = @marketValue WHERE id = @id", connection);

	command->Parameters->AddWithValue("id", id);
	command->Parameters->AddWithValue("selectionId", player->selection_id);
	command->Parameters->AddWithValue("name", player->name);
	command->Parameters->AddWithValue("numberShirt", player->number_shirt);
	command->Parameters->AddWithValue("position", player->position);
	command->Parameters->AddWithValue("age", player->age);
	command->Parameters->AddWithValue("skills", player->skills);
	command->Parameters->AddWithValue("leg", player->leg);
	command->Parameters->AddWithValue("isNationalized", player->is_nationalized);
	command->Parameters->AddWithValue("belongingTeam", player->belonging_team);
	command->Parameters->AddWithValue("sponsor", player->sponsor);
	command->Parameters->AddWithValue("marketValue", player->market_value);

	command->ExecuteNonQuery();

	connection->Close();
}

void PlayerSqlRepository::destroy(Int32^ id)
{
	connection->Open();

	MySqlCommand^ command = gcnew MySqlCommand("DELETE FROM players WHERE id = @id", connection);

	command->Parameters->AddWithValue("id", id);
	command->ExecuteNonQuery();
	connection->Close();
}
