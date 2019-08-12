#pragma once
#ifndef _CH8_H
#define _CH8_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>

class Ch8
{
private:
	struct CandyBar
	{
		string sbrand;
		float fweight;
		int ncalorie;
	};
public:
	Ch8();
	~Ch8();
	void Ch8_1();
	void Ch8_1str(const char *, int n = 0);
	void Ch8_2();
	CandyBar & Ch8_2setCandyBar(CandyBar &, char * str = "Millennium Munch", float fweight = 2.85, int ncaloire = 350);
	void Ch8_2showCandyBar(CandyBar &);
};

#endif
