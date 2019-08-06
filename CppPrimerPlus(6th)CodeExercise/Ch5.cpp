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
	S = "constructor has been called";
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
	cout << S << endl;
	int* psale = new int[12];
	int nsum = 0;
	for (int i = 0; i < 12; i++){
		cout << "Enter " << *(smonth+i) << "'s sales:\t";
		cin >> *(psale + i);
		nsum += *(psale + i);


	}
	cout << "Sales in this year: \t" << nsum << endl;
	delete[] psale;
}

void Ch5::Ch5_6(){
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
	int sale[3][12];
	int nsum, nsumall;
	int j, i;
	for (j = 0, nsumall = 0; j < 3; j++){
		for (i = 0, nsum = 0; i < 12; i++){
			cout << "Enter " << smonth[i] << "'s sales " << "in " << j + 1 << "st year:  \t";
			cin >> sale[j][i];
			nsum += sale[j][i];
		}
		cout << "Sales in " << j + 1 << "st year: \t" << nsum << endl;
		nsumall += nsum;
	}
	cout << "The whole Sales:\t" << nsumall << endl;
}

void Ch5::Ch5_7(){
	struct Car
	{
		string smake;
		int nmade;
	};
	int nnum;
	cout << "How many cars do you wish to catalog? ";
	cin >> nnum;
	Car *car = new Car[nnum];
	for (int i = 0; i < nnum; i++)
	{
		cin.get();
		cout << "Car #" << i + 1 << ":\n";
		cout << "Please enter the make: ";
		getline(cin, (car + i)->smake);
		cout << "Please enter the year made: ";
		cin >> (car + i)->nmade;
	}
	cout << "Here is your collection:\n";
	for (int i = 0; i < nnum; i++){
		cout << (car + i)->nmade << " " << (car + i)->smake
			<< endl;
	}
}

void Ch5::Ch5_8(){
	char word[20];
	int nsum = 0;
	cout << "Enter words (to stop, type the word done):\n";
	do
	{
		cin >> word;
		nsum++;
	} while (strcmp(word, "done"));
	cout << "You enter a total of " << nsum - 1 << " words.\n";
}

void Ch5::Ch5_9(){
	string word;
	int nsum = 0;
	cout << "Enter words (to stop, type the word done):\n";
	do
	{
		cin >> word;
		nsum++;
	} while (word != "done");
	cout << "You enter a total of " << nsum - 1 << " words.\n";
}

void Ch5::Ch5_10(){
	int nnum;
	cout << "Enter number of rows: ";
	cin >> nnum;
	for (int j = 0; j < nnum; j++){
		int i = nnum - j, k = j;
		while (i > 1)
		{
			cout << ".";
			i--;
		}
		while (k >= 0)
		{
			cout << "*";
			k--;
		}
		cout << endl;
	}
}
