#include "DIPLOMANT.h"

DIPLOMANT::DIPLOMANT() : P_O_S_C()
{
}

DIPLOMANT::DIPLOMANT(string cname, string sname, int grade, int Place) : P_O_S_C(cname,sname,grade)
{
	this->Place = Place;
}

int DIPLOMANT::Get_Place()
{
	return Place;
}

void DIPLOMANT::Set_Place(int Place)
{
	Place = Place;
}

DIPLOMANT::~DIPLOMANT()
{
}

ostream& operator<<(ostream& out, DIPLOMANT& obj)
{
	out << "Competition`s Name: " << obj.Get_Comp_Name() << ";\n"
		<< "Student`s Name: " << obj.Get_Stud_Name() << ";\n"
		<< "Student`s Grade: " << obj.Get_Stud_Grade() << ";\n"
		<< "Place in the competition: " << obj.Get_Place() << ";\n";
		return out;
}

istream& operator>>(istream& in, DIPLOMANT& obj)
{
	cout << "Competition`s Name: ";
	string cname;
	in >> cname;
	obj.Set_Comp_Name(cname);

	cout << "Student`s Name: ";
	string sname;
	in >> sname;
	obj.Set_Stud_Name(sname);

	cout << "Student`s Grade: ";
	int grade = 0;
	in >> grade;
	obj.Set_Stud_Grade(grade);

	cout << "Place in the competition: ";
	int Place = 0;
	in >> Place;
	obj.Set_Place(Place);
	return in;
}
