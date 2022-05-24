#include "MatchEntity.h"

MatchEntity::MatchEntity(
	Int32^ id, 
	Int32^ local_id, 
	Int32^ visitor_id, 
	MatchType type, 
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

String^ MatchEntity::GetMatchTypeString()
{
	switch (type)
	{
	case MatchType::Official:
		return "Oficial";
		break;
	case MatchType::Friendly:
		return "Amistoso";
		break;
	default:
		break;
	}
}
