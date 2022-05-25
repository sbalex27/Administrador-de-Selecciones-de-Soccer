#include "SelectionEntity.h"

using namespace System;

SelectionEntity::SelectionEntity(Int32^ id, Int32^ area_id, Int32^ ranking, String^ country, String^ stadium, String^ technical, String^ goalkeeping_coach, String^ phisiotherapist)
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

SelectionEntity::SelectionEntity(Int32^ area_id, Int32^ ranking, String^ country, String^ stadium, String^ technical, String^ goalkeeping_coach, String^ phisiotherapist)
{
    this->id = 0;
    this->area_id = area_id;
    this->ranking = ranking;
    this->country = country;
    this->stadium = stadium;
    this->technical = technical;
    this->goalkeeping_coach = goalkeeping_coach;
    this->physiotherapist = physiotherapist;
}
