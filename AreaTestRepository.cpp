#include "AreaTestRepository.h"

List<AreaEntity^>^ AreaTestRepository::index()
{
    auto data = gcnew List<AreaEntity^>();

    data->Add(gcnew AreaEntity(1, "CONCACAF"));
    data->Add(gcnew AreaEntity(2, "LA LIGA"));

    return data;
}

AreaEntity^ AreaTestRepository::show(Int32^ id)
{
    return gcnew AreaEntity(1, "CONCACAF");
}

void AreaTestRepository::store(AreaEntity^ area)
{
    return;
}

void AreaTestRepository::update(Int32^ id, AreaEntity^ area)
{
    return;
}

void AreaTestRepository::destroy(Int32^ id)
{
    return;
}
