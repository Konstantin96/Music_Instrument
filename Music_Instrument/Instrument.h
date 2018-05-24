#pragma once
#include "Libery.h"

class instrument
{
protected:
	string name, firm;
	int cost;
public:
	instrument() : name("NULL"), firm("NULL"), cost(0)
	{}

	virtual ~instrument() = default;

	void GetInst()
	{
		cout << "\nВведите название инструмента: "; cin >> name;
		cout << "Введите производителя: "; cin >> firm;
		cout << "Введите цену: "; cin >> cost;
	}
	void PutInst()
	{
		cout << "\nИнструмент: " << name;
		cout << "\nПроизводитель: " << firm;
		cout << "\nЦена: " << cost;
	}
	virtual void GetData() = 0;
	virtual void PutData() = 0;
};