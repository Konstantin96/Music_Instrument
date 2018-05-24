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
		cout << "�������" << endl;
		W.PutData();
		cout << "���������" << endl;
		S.PutData();
		cout << "��������" << endl;
		P.PutData();
	}
};