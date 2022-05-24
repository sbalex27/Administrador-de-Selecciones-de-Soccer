#include "MatchTestRepository.h"

List<MatchEntity^>^ MatchTestRepository::index()
{
    auto data = gcnew List<MatchEntity^>();

    data->Add(gcnew MatchEntity(1, 1, 2, MatchType::Official, 2, 0, DateTime(2022, 12, 1)));
    data->Add(gcnew MatchEntity(2, 3, 4, MatchType::Friendly, 1, 1, DateTime(2022, 11, 29)));

    return data;
}

MatchEntity^ MatchTestRepository::show(Int32^ id)
{
    return gcnew MatchEntity(2, 3, 4, MatchType::Friendly, 1, 1, DateTime(2022, 11, 29));
}

void MatchTestRepository::store(MatchEntity^ match)
{
    return;
}

void MatchTestRepository::update(Int32^ id, MatchEntity^ match)
{
    return;
}

void MatchTestRepository::destroy(Int32^ id)
{
    return;
}
