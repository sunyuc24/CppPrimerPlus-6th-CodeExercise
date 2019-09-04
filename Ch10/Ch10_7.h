#pragma once
#ifndef _CH10_7_H
#define _CH10_7_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
class Plorg
{
private:
	static const int MAX = 20;
	int CI;
	char name[MAX];

public:
	Plorg();
	void reset(char *, const int&);
	void show()const;
};

#endif