#pragma once
#include "Instrument.h"
#include "Orkestr.h"
#include "Strun.h"
#include "Udar.h"
#include "Duh.h"

class Orchestra : public instrument
{
private:
	StringInst S;
	Udar P;
	WindInst W;
public:

	void PutAll()
	{
		cout << "Духовой" << endl;
		W.PutData();
		cout << "Клавишный" << endl;
		S.PutData();
		cout << "Струнный" << endl;
		P.PutData();
	}
};