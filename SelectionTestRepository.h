#pragma once
#include "SelectionRepository.h"

using namespace System::Data;

ref class SelectionTestRepository :
	public SelectionRepository
{
public:
	virtual Object^ index() override;
	virtual SelectionEntity^ show(Int32^ id) override;
	virtual void store(SelectionEntity^ selection) override;
	virtual void update(Int32^ id, SelectionEntity^ selection) override;
	virtual void destroy(Int32^ id) override;
};

