#include "Ch8.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;


Ch8::Ch8()
{
}


Ch8::~Ch8()
{
}

void Ch8::Ch8_1(){
	char str[6]= "Ch8_1";
	cout << "call 1" << endl;
	Ch8_1str(str);
	cout << "call 2" << endl;
	Ch8_1str(str);
	cout << "call 3" << endl;
	Ch8_1str(str, 1);
}

void Ch8::Ch8_1str(const char * str, int n){
	static int times = 1;
	if (n){
		for (int i = 1; i <= times; ++i){
			cout << str << endl;
		}
	}
	else{
		cout << str << endl;
	}
	times++;
}

void Ch8::Ch8_2(){
	CandyBar candybar;
	Ch8_2setCandyBar(candybar);
	Ch8_2showCandyBar(candybar);
}

Ch8::CandyBar & Ch8::Ch8_2setCandyBar(CandyBar& candybar, char * str, float fweight, int ncalorie){
	candybar.sbrand = str;
	candybar.fweight = fweight;
	candybar.ncalorie = ncalorie;
	return candybar;
}

void Ch8::Ch8_2showCandyBar(const CandyBar& candybar){
	cout << "CandyBar's brand name: " << candybar.sbrand << endl
		<< "CandyBar's weight: " << candybar.fweight << endl
		<< "CandyBar's calorie: " << candybar.ncalorie << endl;
}

void Ch8::Ch8_3(){
	string str;
	cout << "Enter a string (q to quit): ";
	while (getline(cin, str) )
	{
		if (str[0] == 'q' && str.size() == 1){
			break;
		}
		Ch8_3toupper(str);
		cout << "Next string (q to quit): ";
		
	}
}

void Ch8::Ch8_3toupper(const string& str){
	char ch;
	for (int i = 0; i < str.size(); i++){
		ch = str[i];
		if (isalpha(ch))
		{
			cout << (char)toupper(ch);
		}
		else
		{
			cout << str[i];
		}
	}
	cout << endl;
}

void Ch8::Ch8_4(){
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	Ch8_4set(beany, testing);
	Ch8_4show(beany);
	Ch8_4show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'U';
	Ch8_4show(testing);
	Ch8_4show(testing, 3);
	Ch8_4show("Done!");
}
void Ch8::Ch8_4set(stringy& stct, char* str){
	int size = strlen(str);
	stct.ct = size;
	stct.str = new char[size];
	strcpy_s(stct.str, size + 1, str);
}

void Ch8::Ch8_4show(const stringy& stct, int n /* = 1 */){
	for (int i = 0; i < n; i++){
		cout << stct.str << endl;
	}
}

void Ch8::Ch8_4show(const char* ch, int n /* = 1 */){
	for (int i = 0; i < n; i++){
		cout << ch << endl;
	}
}
template <typename T> T Ch8::Ch8_5max5(T* arr){
	T Max = arr[0];
	for (int i = 0; i < 5; i++){
		if (Max < arr[i]){
			Max = arr[i];
		}
		else{
			continue;
		}
	}
	return Max;
}
void Ch8::Ch8_5(){
	int arr[5] = { 1, 2, 3, 4, 5 };
	int Max = Ch8_5max5(arr);
	cout << "Max: " << Max << endl;
}

template <typename T> T Ch8::Ch8_6max6(T* arr, int size){
	T Max = arr[0];
	for (int i = 0; i < size; i++){
		if (Max < arr[i]){
			Max = arr[i];
		}
		else{
			continue;
		}
	}
	return Max;
}

template <> char * Ch8::Ch8_6max6(char ** arr, int n)
{
	int Max_len = strlen(arr[0]);
	int tmp_len;
	int Max_idx = 0;

	int i;
	for (i = 0; i < n; ++i)
	{
		tmp_len = strlen(arr[i]);
		if (tmp_len > Max_len)
		{
			Max_len = tmp_len;
			Max_idx = i;
		}
	}
	return arr[Max_idx];
}
void Ch8::Ch8_6(){
	int narr[6] = { 1, 2, 3, 4, 5, 6 };
	double darr[4] = { 2.1, 3.45, 21.3, 32.45 };
	int nMax = Ch8_6max6(narr, 6);
	char* str[] = { "i", "hate", "you", "!", "!" };
	double dMax = Ch8_6max6(darr, 4);
	char * cMax = Ch8_6max6(str, 5);
	cout << "int Max: " << nMax << endl;
	cout << "double Max: " << dMax << endl;
	cout << "str Max's address: " << (void*)cMax << endl;
}

void Ch8::Ch8_7(){
	int things[6] = { 13, 31, 103, 301, 310, 120 };
	debts mr_E[3] = {
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double *pd[3];
	for (int i = 0; i < 3; i++){
		pd[i] = &mr_E[i].amount;
	}
	cout << "Mr. E's things sum:\n";
	Ch8_6ShowArray(things, 6);
	cout << "Listing Mr. E's debts sum:\n";
	Ch8_6ShowArray(pd, 3);
}

template <typename T> void Ch8::Ch8_6ShowArray(T arr[], int n){
	T sum = arr[0];
	for (int i = 1; i < n; i++){
		sum += arr[i];
	}
	cout << sum << endl;
}

template <typename T> void Ch8::Ch8_6ShowArray(T* arr[], int n){
	T sum = *arr[0];
	for (int i = 1; i < n; i++){
		sum += *arr[i];
	}
	cout << sum << endl;
}
