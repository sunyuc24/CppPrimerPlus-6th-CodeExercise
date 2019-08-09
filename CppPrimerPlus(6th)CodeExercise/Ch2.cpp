#include "Ch2.h"


Ch2::Ch2(){}

Ch2::~Ch2(){}

void Ch2::Ch2_1(){
	using std::cout;
	using std::endl;
	cout << "my name is Sunyuc" << endl;
	cout << "my address is UESTC" << endl;
}

void Ch2::Ch2_2(){
	using std::cout;
	using std::endl;
	using std::cin;
	double distance_long;
	cout << "Please input a number" << endl;
	cin >> distance_long;
	cout << distance_long << " long(s) are" <<" "<<220 * distance_long << " mile(s). " << endl;
}
void Ch2::Ch2_4(){
	using std::cout;
	using std::endl;
	using std::cin;
	cout << " enter your age: ";
	int age;
	cin >> age;
	cout << endl << "your age includes " << age * 12 << " monthes" << endl;
}
void Ch2::Ch2_5(double degree){
	using std::cout;
	cout << degree << " degrees Celsius is " << 1.8*degree + 32.0 << " degrees Fahrenheit.\n";
}
void Ch2::Ch2_6(double light_years){
	std::cout << light_years << " light years = " << 63240 * light_years << " astronomical units.\n";
}void Ch2::Ch2_7(int hours, int mins){
	using std::cout;
	cout << "time: " << hours << ":" << mins << std::endl;
}

