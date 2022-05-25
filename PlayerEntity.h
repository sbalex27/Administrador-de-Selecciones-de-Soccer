#pragma once

using namespace System;

ref class PlayerEntity
{
public:
	PlayerEntity(Int32^ id, Int32^ selection_id, String^ name, Int32^ number_shirt, String^ position, Int32^ age, String^ skills, String^ leg, Boolean^ is_nationalized, String^ belonging_team, String^ sponsor, Single^ market_value);

	Int32^ id;
	Int32^ selection_id;
	String^ name;
	Int32^ number_shirt;
	String^ position;
	Int32^ age;
	String^ skills;
	String^ leg;
	Boolean^ is_nationalized;
	String^ belonging_team;
	String^ sponsor;
	Single^ market_value;
};
