using namespace System;

#pragma once
ref class SelectionEntity
{
public:
	SelectionEntity(Int32^ id, Int32^ area_id, Int32^ ranking, String^ country, String^ stadium, String^ technical, String^ goalkeeping_coach, String^ physiotherapist);

	SelectionEntity(Int32^ area_id, Int32^ ranking, String^ country, String^ stadium, String^ technical, String^ goalkeeping_coach, String^ physiotherapist);

	Int32^ id;
	Int32^ area_id;
	Int32^ ranking;
	String^ country;
	String^ stadium;
	String^ technical;
	String^ goalkeeping_coach;
	String^ physiotherapist;
};

