#include "Ch10_3.h"


Golf::Golf()
{
	strcpy(fullname, "Noname");
	handicap = 0;
}

Golf::Golf(const char * name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

const Golf & Golf::setgolf(const Golf & g)
{
	strcpy(fullname, g.fullname);
	handicap = g.handicap;

	return *this;
}

void Golf::showgolf() const
{
	cout << "fullname: " << fullname << endl;
	cout << "handicap: " << handicap << endl;
}