#pragma once
#ifndef _CH10_4_H
#define _CH10_4_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
namespace SALES
{
	class Sales{
	private:
		static const int QUARTERS = 4;
		double sales[QUARTERS];
		double average;
		double max;
		double min;

	public:
		Sales(const double ar[], int n);
		Sales();
		void setSales();
		void showSales();
	};
}

#endif
