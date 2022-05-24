#pragma once

#include "AreaEntity.h"

using namespace System::Collections::Generic;

ref struct AreaRepository abstract {
	virtual List<AreaEntity^>^ index() abstract;
	virtual AreaEntity^ show(Int32^ id) abstract;
	virtual void store(AreaEntity^ area) abstract;
	virtual void update(Int32^ id, AreaEntity^ area) abstract;
	virtual void destroy(Int32^ id) abstract;
};