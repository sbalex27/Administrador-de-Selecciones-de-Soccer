#include "AreaSqlRepository.h"

AreaSqlRepository::AreaSqlRepository(String^ connectionString)
{
	this->connection = gcnew MySqlConnection(connectionString);
}

Object^ AreaSqlRepository::index()
{
	this->connection->Open();

	DataTable^ dataTable = gcnew DataTable();
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM areas", connection);
	MySqlDataReader^ reader = command->ExecuteReader();
	dataTable->Load(reader);

	this->connection->Close();
	return dataTable;
}

AreaEntity^ AreaSqlRepository::show(Int32^ id)
{
	this->connection->Open();

	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM areas WHERE id = @id LIMIT 1", connection);
	command->Parameters->AddWithValue("id", id);

	MySqlDataReader^ reader = command->ExecuteReader();
	
	while (reader->Read())
	{
		AreaEntity^ area = gcnew AreaEntity(
			reader->GetInt32("id"),
			reader->GetString("name")
		);

		connection->Close();
		return area;
	}

	throw gcnew Exception("Not found");
}

void AreaSqlRepository::store(AreaEntity^ area)
{
	this->connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("INSERT INTO areas (name) VALUES (@name)", connection);
	command->Parameters->AddWithValue("name", area->name);
	command->ExecuteNonQuery();
	this->connection->Close();
}

void AreaSqlRepository::update(Int32^ id, AreaEntity^ area)
{
	this->connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("UPDATE areas SET name = @name WHERE id = @id", connection);
	command->Parameters->AddWithValue("id", id);
	command->Parameters->AddWithValue("name", area->name);
	command->ExecuteNonQuery();
	this->connection->Close();
}

void AreaSqlRepository::destroy(Int32^ id)
{
	this->connection->Open();
	MySqlCommand^ command = gcnew MySqlCommand("DELETE FROM areas WHERE id = @id", connection);
	command->Parameters->AddWithValue("id", id);
	command->ExecuteNonQuery();
	this->connection->Close();
}
