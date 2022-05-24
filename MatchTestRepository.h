#pragma once
#include "MatchRepository.h"

using namespace System::Data;

ref class MatchTestRepository :
    public MatchRepository
{
public:
    virtual MatchEntity^ show(String^ id) override;

    virtual void store(MatchEntity^ match) override;

    virtual void update(String^ id, MatchEntity^ match) override;

    virtual void destroy(String^ id) override;

    virtual Object^ index() override;
};

