#pragma once

#include "MatchEntity.h"

using namespace System::Collections::Generic;

ref struct MatchRepository abstract {
	virtual List<MatchEntity^>^ index() abstract;
	virtual MatchEntity^ show(Int32^ id) abstract;
	virtual void store(MatchEntity^ match) abstract;
	virtual void update(Int32^ id, MatchEntity^ match) abstract;
	virtual void destroy(Int32^ id) abstract;
};