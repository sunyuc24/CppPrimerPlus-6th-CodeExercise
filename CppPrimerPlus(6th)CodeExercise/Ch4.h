#pragma once
#ifndef _CH4_H
#define _CH4_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <array>

class Ch4
{
private:
	struct CandyBar
	{
		std::string sbrand;
		float fweight;
		int ncalorie;
	};
	struct Pizza
	{
		std::string sbrand;
		float fdiameter;
		float fweight;
	};
public:
	Ch4();
	~Ch4();
	void Ch4_1();
	void Ch4_2();
	void Ch4_3();
	void Ch4_4();
	void Ch4_5();
	void Ch4_6();
	void Ch4_7();
	void Ch4_8();
	void Ch4_9();
	void Ch4_10();
};
#endif
