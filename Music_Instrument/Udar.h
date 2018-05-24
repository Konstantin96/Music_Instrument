#pragma once
#include "Instrument.h"

class  Udar: public instrument
{
protected:
	int year;
	int NON;
	string material, type;
public:
	Udar() : NON(7), material("Металл"), year(2015), type("Барабаны")
	{}

	void GetData()
	{
		cout << "\nУдарнный" << endl;
		instrument::GetInst();
		cout << "Введите год: "; cin >> year;
		cout << "Введите материал: "; cin >> material;
	}
	void PutData()
	{
		cout << "\nУдарнный" << endl;
		cout << "\nТип инструмента: " << type;
		instrument::PutInst();
		cout << "\nГод: " << year;
		cout << "\nКоличество нот: " << NON;
		cout << "\nМатериал: " << material << endl;
	}
};