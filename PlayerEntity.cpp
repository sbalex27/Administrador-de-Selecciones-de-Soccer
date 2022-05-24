#include "PlayerEntity.h"

PlayerEntity::PlayerEntity(
	Int32^ id,
	Int32^ selection_id,
	String^ name,
	Int32^ number_shirt,
	Position position,
	Int32^ age,
	String^ skills,
	Leg leg,
	Boolean^ is_nationalized,
	String^ belonging_team,
	String^ sponsor,
	Single^ market_value)
{
	this->id = id;
	this->selection_id = selection_id;
	this->name = name;
	this->number_shirt = number_shirt;
	this->position = position;
	this->age = age;
	this->skills = skills;
	this->leg = leg;
	this->is_nationalized = is_nationalized;
	this->belonging_team = belonging_team;
	this->sponsor = sponsor;
	this->market_value = market_value;
}
