#pragma once
#include "MatchRepository.h"

using namespace System::Data;

ref class MatchTestRepository :
    public MatchRepository
{
public:
    virtual MatchEntity^ show(Int32^ id) override;

    virtual void store(MatchEntity^ match) override;

    virtual void update(Int32^ id, MatchEntity^ match) override;

    virtual void destroy(Int32^ id) override;

    virtual Object^ index() override;
};

