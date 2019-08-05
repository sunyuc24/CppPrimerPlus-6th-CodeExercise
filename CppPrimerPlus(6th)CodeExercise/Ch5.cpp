#include "Ch5.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Ch5::Ch5()
{
	 string smonth[12] = {
		"Jan",
		"Feb",
		"Mar",
		"Apr",
		"May",
		"Jun",
		"Jul",
		"Aug",
		"Sept",
		"Oct",
		"Nov",
		"Dec"
	};
}


Ch5::~Ch5()
{
}
void Ch5::Ch5_1(){
	cout << "Enter two figures: ";
	int nsmall, nbig, nsum;
	cin >> nsmall;
	cin >> nbig;
	for (nsum = 0; nbig >= nsmall; nsmall++)
	{	
		nsum += nsmall;
	}
	cout << "Sum of " << nsmall << " ~ " << nbig << " is: " << nsum
		 << endl;
}

void Ch5::Ch5_2(){
	using std::array;
	const int nSize = 101;
	array<long double, nSize> afactorial;
	afactorial[1] = afactorial[0] = 1;
	for (int i = 2; i < nSize; i++)
	{
		afactorial[i] = i * afactorial[i - 1];
	}
	for (int i = 0; i < nSize; i++)
	{
		cout << i << "! = " << afactorial[i] << endl;
	}
}

void Ch5::Ch5_3(){
	double nfigure, sum = 0;
	cout << "Enter a figure(enter 0 to quit): ";
	cin >> nfigure;
	while (nfigure != 0)
	{
		sum += nfigure;
		cout << "Now, the sum of the figures you entered is: " << sum
			 << endl;
		cout << "Enter a figure(enter 0 to quit): ";
		cin >> nfigure;
	} 
}

void Ch5::Ch5_4(){
	const int nInvest = 100;
	int i;
	double dCleInterest = 0, dDapInterest = nInvest*0.1;
	double dCleIncome = 0, dDapIncome = 0;
	for (i = 1; dCleIncome <= dDapIncome; ++i){
		dCleInterest = 0.05 * (nInvest + dCleIncome);
		dCleIncome += dCleInterest;
		dDapIncome += dDapInterest;
		//cout << "Cleo's income: " << dCleIncome << endl;
		//cout << "Daphne's income: " << dDapIncome << endl;
	}
	cout << "Cleo's income will exceed Daphne's after " << i-1 << " years."
		 << endl;
	cout << "Cleo's income: " << dCleIncome << endl;
	cout << "Daphne's income: " << dDapIncome << endl;
}

void Ch5::Ch5_5(){
	int* psale = new int[12];
	int nsum = 0;
	for (int i = 0; i < 12; i++){
		cout << "Enter " << smonth[i] << "'s sales:\t";
		cin >> *(psale + i);
		nsum += *(psale + i);
	}
	cout << "Sales in this year: \t" << nsum << endl;
	delete[] psale;
}

void Ch5::Ch5_6(){
	int sale[3][12];
	int nsum, nsumall;
	int j, i;
	cout << smonth[1];
	//for (j = 0, nsumall = 0; j < 3; j++){
	//	for (i = 0, nsum = 0; i < 12; i++){
	//		cout << "Enter " << smonth[i] << "'s sales " << " in " << j + 1 << "st year:\t";
	//		cin >> sale[j][i];
	//		nsum += sale[j][i];
	//	}
	//	cout << "Sales in " << j + 1 << "st year:\t" << nsum << endl;
	//	nsumall += nsum;
	//}
	//cout << "The whole Sales:\t" << nsumall << endl;
}
