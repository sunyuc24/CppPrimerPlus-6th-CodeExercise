#pragma once
#ifndef _CH8_H
#define _CH8_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>
using std::string;
class Ch8
{
private:
	struct CandyBar
	{
		std::string sbrand;
		float fweight;
		int ncalorie;
	};
	struct stringy{
		char* str;
		int ct;
	};

public:
	Ch8();
	~Ch8();
	void Ch8_1();
	void Ch8_1str(const char *, int n = 0);
	void Ch8_2();
	CandyBar & Ch8_2setCandyBar(CandyBar &, char * str = "Millennium Munch", float fweight = 2.85, int ncaloire = 350);
	void Ch8_2showCandyBar(const CandyBar &);
	void Ch8_3();
	void Ch8_3toupper(const string&);
	void Ch8_4();
	void Ch8_4set(stringy&, char *);
	void Ch8_4show(const stringy&);
	void Ch8_4show(const stringy&, int n = 1);
	void Ch8_4show(const char ch[]);
	void Ch8_4show(const char ch[], int n = 1);
};

#endif
