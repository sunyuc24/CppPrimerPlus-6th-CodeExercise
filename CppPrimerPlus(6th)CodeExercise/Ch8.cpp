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

Ch8::CandyBar & Ch8::Ch8_2setCandyBar(CandyBar & candybar, char * str, float fweight, int ncaloire){
	
}
