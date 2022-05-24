#include "PlayerTestRepository.h"

List<PlayerEntity^>^ PlayerTestRepository::index()
{
    auto data = gcnew List<PlayerEntity^>();

    data->Add(gcnew PlayerEntity(1, 1, "Alex", 7, Position::Central, 22, "Perfect", Leg::Right, false, "Rojos", "Apple", 1000000.00f));
    data->Add(gcnew PlayerEntity(2, 1, "Sergio", 7, Position::Offensive, 22, "Perfect", Leg::Right, false, "Cremas", "Android", 1000000.00f));

    return data;
}

PlayerEntity^ PlayerTestRepository::show(Int32^ id)
{
    return gcnew PlayerEntity(1, 1, "Alex", 7, Position::Central, 22, "Perfect", Leg::Right, false, "Rojos", "Apple", 1000000.00f);
}

void PlayerTestRepository::store(PlayerEntity^ player)
{
    return;
}

void PlayerTestRepository::update(Int32^ id, PlayerEntity^ player)
{
    return;
}

void PlayerTestRepository::destroy(Int32^ id)
{
    return;
}
