#pragma once
#include "SelectionRepository.h"

using namespace MySql::Data::MySqlClient;
using namespace System::Data;

ref class SelectionSqlRepository :
    public SelectionRepository
{
public:
    SelectionSqlRepository(String^ connectionString);

    MySqlConnection^ connection;

    virtual Object^ index() override;

    virtual SelectionEntity^ show(Int32^ id) override;

    virtual void store(SelectionEntity^ selection) override;

    virtual void update(Int32^ id, SelectionEntity^ selection) override;

    virtual void destroy(Int32^ id) override;

};

