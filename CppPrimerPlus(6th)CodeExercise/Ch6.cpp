#include "Ch6.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
Ch6::Ch6()
{
}


Ch6::~Ch6()
{
}

void Ch6::Ch6_1(){
	cout << "Enter text(to stop, enter @): ";
	char ch;
	cin.get(ch);
	cout << "Your input: ";
	while (ch != '@')
	{
		if (!isdigit(ch))
		{
			islower(ch) ? cout << (char)toupper(ch) : cout << (char)tolower(ch);
		}
		cin.get(ch);

	}
	cout << endl;
}

void Ch6::Ch6_2(){
	std::array<double, 10> donation;
	cout << "Enter 10 donation value: ";
	int count = 0, k = 0;
	double sum = 0.0, average = 0.0;

	while (count < 10 && cin >> donation[count])
	{
		sum += donation[count];
		++count;
	}
	average = sum / count;
	if (count != 0)
	{
		for (int i = 0; i < count; i++)
		{
			if (average > donation[i])
			{
				k++;
			}
		}
		cout << "The average is: " << average
			<< " , and " << k << " numbers are bigger than the average."
			<< endl;
	}
	else
	{
		cout << "Please enter numbers\n";
	}
}

void Ch6::Ch6_3(){
	cout << "Please enter one of the following choices:\n"
		 << "c) carnaivore               p) pianist\n"
		 << "t) tree                     g) game\n";
	char choice;
	bool i = true;
	while (i){
		cin >> choice;
		switch (choice)
		{
		case 'c': {cout << "A maple is a tree.\n";
					i = false;
					break; }
		case 'p': {cout << "A maple is a tree.\n";
					i = false; 
					break; }		
		case 't': {cout << "A maple is a tree.\n";
					i = false;
					break; }
		case 'g': {cout << "A maple is a tree.\n";
					i = false;
					break; }	
		default: cout << "Please enter a c, p, t, or g: ";
		}
	}
}

void Ch6::Ch6_5(){
	double income = 0.0;
	cout << "Enter your income: ";
	while (cin >> income && income >= 0){
		if (income <= 5000)
		{
			cout << "tax:\t" << 0 << " tvarps";
		}
		else if (income <= 15000)
		{
			cout << "tax:\t" << (income - 5000)*0.1 << " tvarps";
		}
		else if (income <= 35000)
		{
			cout << "tax:\t" << 10000 * 0.1 + (income - 15000)*0.15 << " tvarps";
		}
		else
		{
			cout << "tax:\t" << 10000 * 0.1 + 20000 * 0.15 + (income - 35000)*0.2 << " tvarps";
		}
		cout << endl;
	}
}

void Ch6::Ch6_6(){
	struct donation
	{
		string patron_name;
		double value;
	};
	int number = 0, indx = 0;
	cout << "Enter the number of patrons: ";
	cin >> number;
	donation* pdonation = new donation[number];
	//new an array to save Grand Patron's index of pdonation
	int* pindex = new int[number]();  //initialize all elem to 0
	for (int i = 0; i < number; i++){
		cout << "Enter the " << i + 1 << "st patron's name: ";
		cin >> (pdonation + i)->patron_name;
		cout << "Enter the " << i + 1 << "st patron's donation value: ";
		cin >> (pdonation + i)->value;
		if ((pdonation + i)->value > 10000){
			pindex[indx] = i+1; //save Grand Patron's index of pdonation
			indx++; //count the number of Grand Patron
		}
	}
	cout << "Grand Patrons:\n";
	if (indx == 0){
		cout << "None" << endl;
	}
	else{
		for (int i = 0; i < indx; i++){
			cout << "Patron name: " << pdonation[pindex[i] - 1].patron_name
				<< ", Donation value: " << pdonation[pindex[i] - 1].value
				<< endl;
		}
	}
	cout << "Patrons:\n";
	if (indx == number){
		cout << "None" << endl;
	}
	else {
		for (int i = 0; i < number; i++){
			int *reslut = std::find(pindex, pindex + number, i + 1);
			if (reslut == pindex + number){
				cout << "Patron name : " << pdonation[i].patron_name
					 << ", Donation value: " << pdonation[i].value
					 << endl;
			}
		}
	}
}