#pragma once

using namespace System;

enum Position
{
	Central, Medio, Offensive
};

enum Leg
{
	Right, Left,
};

ref class PlayerEntity
{
public:
	PlayerEntity(Int32^, Int32^, String^, Int32^, Position,
		Int32^, String^, Leg, Boolean^, String^,
		String^, Single^);

	Int32^ id;
	Int32^ selection_id;
	String^ name;
	Int32^ number_shirt;
	Position position;
	Int32^ age;
	String^ skills;
	Leg leg;
	Boolean^ is_nationalized;
	String^ belonging_team;
	String^ sponsor;
	Single^ market_value;
};
