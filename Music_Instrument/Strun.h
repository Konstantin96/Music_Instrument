#pragma once
#include "Instrument.h"

class StringInst : public instrument {
protected:
	int year, NOS; 
	string material, color, type;
public:
	StringInst() : material("������"), color("������"), year(1995), NOS(8), type("������")
	{}

	void GetData()
	{
		cout << "\n��������" << endl;
		instrument::GetInst();
		cout << "������� ���: "; cin >> year;
		cout << "������� ���������� �����: "; cin >> NOS;
		cout << "������� ��������: "; cin >> material;
		cout << "������� ����: "; cin >> color;
	}
	void PutData()
	{
		cout << "\n��������" << endl;
		cout << "\n��� �����������: " << type;
		instrument::PutInst();
		cout << "\n���: " << year;
		cout << "\n���������� �����: " << NOS;
		cout << "\n��������: " << material;
		cout << "\n����: " << color << endl;
	}
};