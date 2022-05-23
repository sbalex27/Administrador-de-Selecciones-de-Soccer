using namespace System;

#pragma once
ref class SelectionEntity
{
public:
	SelectionEntity(int, int, int, String^, String^, String^, String^, String^);
	int id;
	int area_id;
	int ranking;
	String^ country;
	String^ stadium;
	String^ technical;
	String^ goalkeeping_coach;
	String^ physiotherapist;
};

