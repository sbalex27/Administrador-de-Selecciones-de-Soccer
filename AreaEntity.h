using namespace System;

#pragma once
ref class AreaEntity
{
public:
	AreaEntity(Int32^ id, String^ name);
	AreaEntity(String^ name);

	Int32^ id;
	String^ name;
};

