#pragma once
#ifndef _CH7_H
#define _CH7_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cctype>
class Ch7
{
private:
	struct box{
		char maker[40];
		float height;
		float width;
		float length;
		float volume;
	};

public:
	Ch7();
	~Ch7();
	void Ch7_1();
	double Ch7_1harmaverage(double &ndigit1, double &ndigit2);
	void Ch7_2();
	int Ch7_2fill(double* p);
	void Ch7_2output(double * p, int n);
	double Ch7_2getavg(double * p, int n);
	void Ch7_3();
	void a(box);
	void b(box *);
};
#endif
