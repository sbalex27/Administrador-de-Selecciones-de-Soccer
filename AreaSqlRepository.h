#pragma once
#include "AreaRepository.h"

using namespace MySql::Data::MySqlClient;
using namespace System::Data;

ref class AreaSqlRepository :
    public AreaRepository
{
public:
    AreaSqlRepository(String^ connectionString);
    MySqlConnection^ connection;

    virtual Object^ index() override;
    virtual AreaEntity^ show(Int32^ id) override;
    virtual void store(AreaEntity^ area) override;
    virtual void update(Int32^ id, AreaEntity^ area) override;
    virtual void destroy(Int32^ id) override;
};

