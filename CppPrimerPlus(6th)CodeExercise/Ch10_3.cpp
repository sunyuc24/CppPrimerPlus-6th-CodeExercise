#include "Ch10_3.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

Golf::Golf()
{
	strcpy_s(fullname, "Noname");
	handicap = 0;
}

Golf::Golf(const char * name, int hc)
{
	strcpy_s(fullname, name);
	handicap = hc;
}

const Golf & Golf::setgolf(const Golf & g)
{
	strcpy_s(fullname, g.fullname);
	handicap = g.handicap;

	return *this;
}

void Golf::showgolf() const
{
	cout << "fullname: " << fullname << endl;
	cout << "handicap: " << handicap << endl;
}