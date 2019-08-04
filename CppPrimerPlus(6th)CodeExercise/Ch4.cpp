#include "Ch4.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
Ch4::Ch4()
{
}


Ch4::~Ch4()
{
}

void Ch4::Ch4_1(){
	cout << "What is your first name? ";
	string sfirstname;
	getline(cin,
		sfirstname);
	cout << "What is your last name? ";
	string slastname;
	getline(cin,
			slastname);
	cout << "What letter grade do you deserve? ";
	char cgrade;
	cin >> cgrade;
	cout << "What is you age? ";
	int nage;
	cin >> nage;
	cout << "Name: " << slastname << ", " << sfirstname
		 << endl;
	cout << "Grade: " << (char)(cgrade + 1)
		 << endl;
	cout << "Age: " << nage
		 << endl;
}

void Ch4::Ch4_2(){
	string sname;
	string sdessert;
	cout << "Enter your name:\n";
	getline(cin,
		sname);
	cout << "Enter your favorite dessert:\n";
	getline(cin,
		sdessert);
	cout << "I have some delicious " << sdessert
		 << " for you, " << sname
		 << "\n";
}

void Ch4::Ch4_3(){
	const int Size = 20;
	char cfirstname[Size], clastname[Size];
	cout << "Enter your fast name: ";
	cin.getline(cfirstname,
		Size);
	cout << "Enter your last name: ";
	cin.getline(clastname,
		Size);
	cout << "Here's the information in a single string: " << clastname << ", " << cfirstname
		 << endl;
}

void Ch4::Ch4_4(){
	string cfirstname, clastname;
	cout << "Enter your fast name: ";
	getline(cin,
		cfirstname);
	cout << "Enter your last name: ";
	getline(cin,
		clastname);
	cout << "Here's the information in a single string: " << clastname << ", " << cfirstname
		 << endl;
} 

void Ch4::Ch4_5(){

	CandyBar snack = { "Mocha Munch",
		2.3,
		350 };
	cout << "snack brand: " << snack.sbrand<< endl
		 << "snack weight: " << snack.fweight << endl
		 << "snack calorie: " << snack.ncalorie << endl;
}

void Ch4::Ch4_6(){
	CandyBar some[3] = {
		{ "Mocha Munch", 2.3, 350 },
		{ "Mocha Munch", 2.3, 350 },
		{ "Mocha Munch", 2.3, 350 },
	};
	int i = 0;
	for (i; i < 3; i++)
	{
		cout << "some[" << i << "] brand: " << some[i].sbrand << endl
			 << "some[" << i << "] weight: " << some[i].fweight << endl
			 << "some[" << i << "] calorie: " << some[i].ncalorie << endl;
	}

}

void Ch4::Ch4_7(){
	pizza mypizza;
	cout << "Enter the pizza's brand name: ";
	getline(cin, mypizza.sbrand);
	cout << "Enter the pizza's diameter: ";
	cin >> mypizza.fdiameter;
	cout << "Enter the pizza's weight: ";
	cin >> mypizza.fweight;
	cout << "mypizza's brand: " << mypizza.sbrand << endl
		<< "mypizza's diameter: " << mypizza.fdiameter << endl
		<< "mypizza's weight: " << mypizza.fweight << endl;
}

//void Ch4::Ch4_8(){
//	pizza *mypizza = new pizza;
//	cout << "Enter the pizza's diameter: ";
//	cin >> mypizza->fdiameter;
//	cout << "Enter the pizza's brand name: ";
//	getline(cin, mypizza->sbrand);
//	cin.get();
//	cout << "Enter the pizza's weight: ";
//	cin >> mypizza->fweight;
//	cout << "mypizza's brand: " << mypizza->sbrand << endl
//		<< "mypizza's diameter: " << mypizza->fdiameter << endl
//		<< "mypizza's weight: " << mypizza->fweight << endl;
//}

void Ch4::Ch4_9(){
	CandyBar * pCandyBar = new CandyBar[3];
	int i = 0;
	for (i; i < 3; i++)
	{
		*(pCandyBar + i) = { "Mocha Munch", 2.3, 350 };
		cout << "CandyBar[" << i << "] brand: " << (pCandyBar + i)->sbrand << endl
			<< "CandyBar[" << i << "] weight: " << (pCandyBar + i)->fweight << endl
			<< "CandyBar[" << i << "] calorie: " << (pCandyBar + i)->ncalorie << endl;
	}
}

void Ch4::Ch4_10(){

}