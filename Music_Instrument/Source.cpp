#include "Instrument.h"
#include "Orkestr.h"
#include "Strun.h"
#include "Udar.h"
#include "Duh.h"
#include <time.h>

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int s = 0;
	instrument *INST;
	Orchestra *Or[2];
	WindInst WI;
	StringInst SI;
	Udar PI;

	while (true) {
		cout << "     Выберите действие: " << endl;
		cout << "1) Ввод инструментов" << endl;
		cout << "2) Вывод всех инструментов" << endl;
		cout << "3) Оркестр" << endl;
		cout << "0) Выход" << endl << endl;
		cout << "";
		cin >> s;
		system("cls");
		switch (s) {
		case 1: {
			INST = &PI;
			INST->GetData();
			INST = &WI;
			INST->GetData();
			INST = &SI;
			INST->GetData();
			system("cls");
			break;
		}
		case 2: {
			INST = &PI;
			INST->PutData();
			INST = &WI;
			INST->PutData();
			INST = &SI;
			INST->PutData();
			system("pause");
			system("cls");

			break;
		}
		case 3: {
			for (int i = 0; i <= 2; i++)
				Or[i]->PutAll();
			system("pause");
			system("cls");
			break;
		}
		}
	}
}