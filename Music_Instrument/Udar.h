#pragma once
#include "Instrument.h"

class  Udar: public instrument
{
protected:
	int year;
	int NON;
	string material, type;
public:
	Udar() : NON(7), material("������"), year(2015), type("��������")
	{}

	void GetData()
	{
		cout << "\n��������" << endl;
		instrument::GetInst();
		cout << "������� ���: "; cin >> year;
		cout << "������� ��������: "; cin >> material;
	}
	void PutData()
	{
		cout << "\n��������" << endl;
		cout << "\n��� �����������: " << type;
		instrument::PutInst();
		cout << "\n���: " << year;
		cout << "\n���������� ���: " << NON;
		cout << "\n��������: " << material << endl;
	}
};