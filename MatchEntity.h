using namespace System;

#pragma once
ref class MatchEntity
{
public:
	MatchEntity(Int32^ id, Int32^ local_id, Int32^ visitor_id, String^ type, Int32^ local_goals, Int32^ visitor_goals, DateTime^ date);
	MatchEntity(String^ local_id, String^ visitor_id, String^ type, String^ local_goals, String^ visitor_goals, String^ date);
	Int32^ id;
	Int32^ local_id;
	Int32^ visitor_id;
	String^ type;
	Int32^ local_goals;
	Int32^ visitor_goals;
	DateTime^ date;
};

