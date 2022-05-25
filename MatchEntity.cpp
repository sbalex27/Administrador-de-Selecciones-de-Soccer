#include "MatchEntity.h"

MatchEntity::MatchEntity(
	Int32^ id, 
	Int32^ local_id, 
	Int32^ visitor_id, 
	String^ type, 
	Int32^ local_goals, 
	Int32^ visitor_goals, 
	DateTime^ date
)
{
	this->id = id;
	this->local_id = local_id;
	this->visitor_id = visitor_id;
	this->type = type;
	this->local_goals = local_goals;
	this->visitor_goals = visitor_goals;
	this->date = date;
}

MatchEntity::MatchEntity(String^ local_id, String^ visitor_id, String^ type, String^ local_goals, String^ visitor_goals, String^ date)
{
	this->id = 0;
	this->local_id = Int32::Parse(local_id);
	this->visitor_id = Int32::Parse(visitor_id);
	this->type = type;
	this->local_goals = Int32::Parse(local_goals);
	this->visitor_goals = Int32::Parse(visitor_goals);
	this->date = DateTime::Parse(date);
}

