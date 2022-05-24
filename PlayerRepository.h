#pragma once

#include "PlayerEntity.h";

using namespace System::Collections::Generic;

ref struct PlayerRepository abstract {
	virtual List<PlayerEntity^>^ index() abstract;
	virtual PlayerEntity^ show(Int32^ id) abstract;
	virtual void store(PlayerEntity^ player) abstract;
	virtual void update(Int32^ id, PlayerEntity^ player) abstract;
	virtual void destroy(Int32^ id) abstract;
};