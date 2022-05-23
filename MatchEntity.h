using namespace System;

enum MatchType
{
	Official, Friendly
};

#pragma once
ref class MatchEntity
{
public:
	Int32^ id;
	Int32^ local_id;
	Int32^ visitor_id;
	MatchType type;
	Int32^ local_goals;
	Int32^ visitor_goals;
	DateTime^ date;
};

