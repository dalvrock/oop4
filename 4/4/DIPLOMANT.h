#pragma once
#include "P_O_S_C.h"

class DIPLOMANT : public P_O_S_C
{
private:
	int Place=0;
public:
	DIPLOMANT();
	DIPLOMANT(string, string, int, int);

	friend ostream& operator << (ostream& out, DIPLOMANT& obj);
	friend istream& operator >> (istream& in, DIPLOMANT& obj);

	int Get_Place();

	void Set_Place(int place);

	~DIPLOMANT();
};

