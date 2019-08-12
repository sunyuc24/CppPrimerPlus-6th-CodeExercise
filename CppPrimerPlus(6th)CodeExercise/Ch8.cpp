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

void Ch8::Ch8_4set(stringy& stct, char ch[]){
	char *pch = new char[sizeof(ch)];
	for (int i = 0;i < sizeof(ch); i++)
	{
		pch[i] = ch[i];
	}
	stct.str = pch;
	stct.ct = sizeof(ch)-1;
}

void Ch8::Ch8_4show(const stringy& stct){
	cout << stct.str;
}

void Ch8::Ch8_4show(const stringy& stct, int n /* = 1 */){
	for (int i = 0; i < n; i++){
		cout << stct.str << endl;
	}
}

void Ch8::Ch8_4show(const char ch[]){
	for (int i = 0; i < sizeof(ch); i++){
		cout << ch[i];
	}
	cout << endl;
}

void Ch8::Ch8_4show(const char ch[], int n /* = 1 */){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < sizeof(ch); j++){
			cout << ch[i];
		}
		cout << endl;
	}
}