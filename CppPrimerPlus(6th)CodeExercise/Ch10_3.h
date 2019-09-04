#pragma once
#ifndef _CH10_3_H
#define _CH10_3_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

class Golf {
private:
	static const int LEN = 40;
	char fullname[LEN];
	int handicap;

public:
	Golf();
	Golf(const char * name, int hc);
	const Golf & setgolf(const Golf & g);
	void showgolf() const;
};


#endif
