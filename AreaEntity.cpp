#include "AreaEntity.h"

AreaEntity::AreaEntity(Int32^ id, String^ name)
{
	this->id = id;
	this->name = name;
}

AreaEntity::AreaEntity(String^ name)
{
	this->id = 0;
	this->name = name;
}
