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
	static const int SLEN = 30;
	
	struct box{
		char maker[40];
		float height;
		float width;
		float length;
		float volume;
	};
	struct student {
		char fullname[SLEN];
		char hobby[SLEN];
		int ooplevel;
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
	void Ch7_3a(box);
	void Ch7_3b(box *);
	void Ch7_5();
	long Ch7_5recursion(int);
	void Ch7_6();
	void Ch7_6Fill_array(double*, int, int&);
	void Ch7_6Show_array(const double*, int);
	void Ch7_6Reverse_array(double*, int);
	void Ch7_9();
	int Ch7_9getinfo(student *, int n);
	void Ch7_9display1(student);
	void Ch7_9display2(const student*);
	void Ch7_9display3(const student*, int);
	void Ch7_10();
	double Ch7_10add(double, double);
	double Ch7_10mul(double, double);
	double Ch7_10calculate(double, double, double (Ch7::*pf)(double, double));
	
};
#endif
