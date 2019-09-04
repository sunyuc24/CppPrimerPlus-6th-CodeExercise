#pragma once
#ifndef _CH10_2_H
#define _CH10_2_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using std::string;
class Person
{
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];

public:
	Person() { lname = ""; fname[0] = '\0'; };
	Person(const string &ln, const char *fn = "Heyyou");
	~Person();
	void Show() const;
	void FormalShow() const;
};
#endif
