#pragma once
#include "PlayerRepository.h"

using namespace System::Data;

ref class PlayerTestRepository :
    public PlayerRepository
{
public:
    virtual Object^ index() override;

    virtual PlayerEntity^ show(Int32^ id) override;

    virtual void store(PlayerEntity^ player) override;

    virtual void update(Int32^ id, PlayerEntity^ player) override;

    virtual void destroy(Int32^ id) override;

};

