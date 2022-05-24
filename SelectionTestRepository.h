#pragma once
#include "SelectionRepository.h"
ref class SelectionTestRepository :
	public SelectionRepository
{
public:
	virtual List<SelectionEntity^>^ index() override;
	virtual SelectionEntity^ show(Int32^ id) override;
	virtual void store(SelectionEntity^ selection) override;
	virtual void update(Int32^ id, SelectionEntity^ selection) override;
	virtual void destroy(Int32^ id) override;
};

