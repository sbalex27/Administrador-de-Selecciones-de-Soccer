#pragma once
#include "MatchRepository.h"

using namespace System::Data;
using namespace MySql::Data::MySqlClient;

ref class MatchSqlRepository :
    public MatchRepository
{
private:
    MySqlConnection^ connection;
public:
    MatchSqlRepository(String^);

    virtual Object^ index() override;
    virtual MatchEntity^ show(Int32^ id) override;
    virtual void store(MatchEntity^ match) override;
    virtual void update(Int32^ id, MatchEntity^ match) override;
    virtual void destroy(Int32^ id) override;
};

