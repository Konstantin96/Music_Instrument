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
		cout << "\n������� �������� �����������: "; cin >> name;
		cout << "������� �������������: "; cin >> firm;
		cout << "������� ����: "; cin >> cost;
	}
	void PutInst()
	{
		cout << "\n����������: " << name;
		cout << "\n�������������: " << firm;
		cout << "\n����: " << cost;
	}
	virtual void GetData() = 0;
	virtual void PutData() = 0;
};