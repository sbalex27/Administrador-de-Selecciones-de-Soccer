#include "SelectionEntity.h"

using namespace System;

SelectionEntity::SelectionEntity(int id, int area_id, int ranking, String^ country, String^ stadium, String^ technical, String^ goalkeeping_coach, String^ physiotherapist)
{
    this->id = id;
    this->area_id = area_id;
    this->ranking = ranking;
    this->country = country;
    this->stadium = stadium;
    this->technical = technical;
    this->goalkeeping_coach = goalkeeping_coach;
    this->physiotherapist = physiotherapist;
}
