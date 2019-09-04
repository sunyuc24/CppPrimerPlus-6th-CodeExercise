#include "Ch10_2.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

Person::Person(const string &ln, const char *fn)
{
	lname = ln;
	strcpy_s(fname,fn);
}


Person::~Person()
{
}

void Person::Show() const {
	cout << fname << " " << lname << endl;
}

void Person::FormalShow() const {
	cout << lname << ", " << fname << endl;
}
