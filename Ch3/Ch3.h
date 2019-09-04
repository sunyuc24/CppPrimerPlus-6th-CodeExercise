#pragma once
#ifndef _CH3_H
#define _CH3_H

#include <iostream>
#include <cstdlib>
class Ch3
{
private:
	const int Feett2inch = 12;
	const float Inch2meter = 0.0254, Kg2pound = 2.2;
	int nheight, nheight_feet, nheight_inch, nweight;
	int ndegree, nminute, nsecond;
	const int degree2minute = 60, minute2second = 60;
	long lseconds;
	const int Day2hour = 24, Hour2minute = 60, Minute2second = 60;
	const int Day2minute = Day2hour*Hour2minute,
			  Day2second = Day2minute*Minute2second, 
			  Hour2second = Hour2minute*Minute2second;
	long long wldpopulation, uspopulation;
	float fmile, fgallon, fKm, fL;
public:
	Ch3();
	~Ch3();
	void Ch3_1();
	void Ch3_2();
	void Ch3_3();
	void Ch3_4();
	void Ch3_5();
	void Ch3_6();
	void Ch3_7();
};

#endif