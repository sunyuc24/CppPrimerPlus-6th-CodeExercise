#pragma once
#ifndef _CH8_H
#define _CH8_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>
#include<typeinfo>

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
	struct debts{
		char name[50];
		double amount;
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
	void Ch8_4show(const stringy&, int n = 1);
	void Ch8_4show(const char*, int n = 1);
	void Ch8_5();
	template <typename T> T Ch8_5max5(T *);
	template <typename T> T Ch8_6max6(T *, int);
	void Ch8_6();
	void Ch8_7();
	template <typename T> void Ch8_6ShowArray(T arr[], int);
	template <typename T> void Ch8_6ShowArray(T* arr[], int);

}; 

#endif
