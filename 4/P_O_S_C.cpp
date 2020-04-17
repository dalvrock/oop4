#include "P_O_S_C.h"
#include <iostream>
using namespace std;

P_O_S_C::P_O_S_C()
{
	Comp_Name="";
	Stud_Name="";
	Stud_Grade=0;
}

P_O_S_C::P_O_S_C(string cname, string sname, int grade)
{
	Comp_Name=cname;
	Stud_Name=sname;
	Stud_Grade=grade;
}

string P_O_S_C::Get_Comp_Name()
{
	return Comp_Name;
}

string P_O_S_C::Get_Stud_Name()
{
	return Stud_Name;
}

int P_O_S_C::Get_Stud_Grade()
{
	return Stud_Grade;
}

void P_O_S_C::Set_Comp_Name(string cname)
{
	Comp_Name = cname;
}

void P_O_S_C::Set_Stud_Name(string sname)
{
	Stud_Name = sname;
}

void P_O_S_C::Set_Stud_Grade(int grade)
{
	if (grade > 11 && grade < 1)	
	{
		throw ("Incorrect number of grade!!!");
	}
	Stud_Grade = grade;
}

P_O_S_C::~P_O_S_C()
{
}

ostream& operator<<(ostream& out, const P_O_S_C& obj)
{
	out << obj.Comp_Name << ", " << obj.Stud_Name << ", " << obj.Stud_Grade;
	return out;
}

istream& operator>>(istream& in, P_O_S_C& obj)
{
	cout << "Competition`s Name: ";
	in >> obj.Comp_Name;
	cout << "Student`s Name: ";
	in >> obj.Stud_Name;
	cout << "Student`s Grade: ";
	in >> obj.Stud_Grade;
	return in;
}
