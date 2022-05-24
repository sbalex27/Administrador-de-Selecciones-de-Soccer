#pragma once

#include "MatchEntity.h"

using namespace System::Collections::Generic;

ref struct MatchRepository abstract {
	virtual Object^ index() abstract;
	virtual MatchEntity^ show(String^ id) abstract;
	virtual void store(MatchEntity^ match) abstract;
	virtual void update(String^ id, MatchEntity^ match) abstract;
	virtual void destroy(String^ id) abstract;
};