#include "SelectionTestRepository.h"

List<SelectionEntity^>^ SelectionTestRepository::index()
{
	auto list = gcnew List<SelectionEntity^>();

	list->Add(gcnew SelectionEntity(1, 1, 10, "Guatemala", "Mateo Flores", "Alex", "Sergio", "Any"));
	list->Add(gcnew SelectionEntity(2, 2, 20, "El Salvador", "El Grande", "Roni", "Cristiano", "Messi"));

	return list;
}

SelectionEntity^ SelectionTestRepository::show(Int32^ id)
{
	return gcnew SelectionEntity(1, 1, 10, "Guatemala", "Mateo Flores", "Alex", "Sergio", "Any");
}

void SelectionTestRepository::store(SelectionEntity^ selection)
{
	return;
}

void SelectionTestRepository::update(Int32^ id, SelectionEntity^ selection)
{
	return;
}

void SelectionTestRepository::destroy(Int32^ id)
{
	return;
}
