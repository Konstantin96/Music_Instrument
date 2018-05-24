#pragma once
#include "Instrument.h"

class WindInst : public instrument
{
protected:
	int year, LC;
	string material, color, type;
public:
	WindInst() : material("������"), color("�����"), year(2005), LC(0), type("�����")
	{}

	void GetData()
	{
		cout << "\n�������" << endl;
		instrument::GetInst();
		cout << "������� ���: "; cin >> year;
		cout << "������� ����� ������ �������� �����������: "; cin >> LC;
		cout << "������� ��������: "; cin >> material;
		cout << "������� ����: "; cin >> color;
	}
	void PutData()
	{
		cout << "\n�������" << endl;
		cout << "\n��� �����������: " << type;
		instrument::PutInst();
		cout << "\n���: " << year;
		cout << "\n����� �������� ������: " << LC;
		cout << "\n��������: " << material;
		cout << "\n����: " << color << endl;
	}
};