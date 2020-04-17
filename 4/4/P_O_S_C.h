#pragma once
#include <iostream>

using namespace std;

class P_O_S_C
{
private:
	string Comp_Name;
	string Stud_Name;
	int Stud_Grade;
public:
	P_O_S_C();
	P_O_S_C(string, string, int);
	friend ostream& operator<<(ostream& out, const P_O_S_C& obj);
	friend istream& operator>>(istream& in, P_O_S_C& obj);

	string Get_Comp_Name();
	string Get_Stud_Name();
	int Get_Stud_Grade();

	void Set_Comp_Name(string cname);
	void Set_Stud_Name(string sname);
	void Set_Stud_Grade(int grade);

	~P_O_S_C();
};
