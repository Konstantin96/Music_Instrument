#pragma once
#include "Instrument.h"

class StringInst : public instrument {
protected:
	int year, NOS; 
	string material, color, type;
public:
	StringInst() : material("Дерево"), color("Черный"), year(1995), NOS(8), type("Гитара")
	{}

	void GetData()
	{
		cout << "\nСтрунный" << endl;
		instrument::GetInst();
		cout << "Введите год: "; cin >> year;
		cout << "Введите количество струн: "; cin >> NOS;
		cout << "Введите материал: "; cin >> material;
		cout << "Введите цвет: "; cin >> color;
	}
	void PutData()
	{
		cout << "\nСтрунный" << endl;
		cout << "\nТип инструмента: " << type;
		instrument::PutInst();
		cout << "\nГод: " << year;
		cout << "\nКоличество струн: " << NOS;
		cout << "\nМатериал: " << material;
		cout << "\nЦвет: " << color << endl;
	}
};