#pragma once
#include "MatchRepository.h"
ref class MatchTestRepository :
    public MatchRepository
{
public:
    virtual List<MatchEntity^>^ index() override;

    virtual MatchEntity^ show(Int32^ id) override;

    virtual void store(MatchEntity^ match) override;

    virtual void update(Int32^ id, MatchEntity^ match) override;

    virtual void destroy(Int32^ id) override;
};

