#pragma once
#include "Instrument.h"

class WindInst : public instrument
{
protected:
	int year, LC;
	string material, color, type;
public:
	WindInst() : material("Бамбук"), color("Белый"), year(2005), LC(0), type("Дудка")
	{}

	void GetData()
	{
		cout << "\nДуховой" << endl;
		instrument::GetInst();
		cout << "Введите год: "; cin >> year;
		cout << "Введите длину канала духового инструмента: "; cin >> LC;
		cout << "Введите материал: "; cin >> material;
		cout << "Введите цвет: "; cin >> color;
	}
	void PutData()
	{
		cout << "\nДуховой" << endl;
		cout << "\nТип инструмента: " << type;
		instrument::PutInst();
		cout << "\nГод: " << year;
		cout << "\nДлина духового канала: " << LC;
		cout << "\nМатериал: " << material;
		cout << "\nЦвет: " << color << endl;
	}
};