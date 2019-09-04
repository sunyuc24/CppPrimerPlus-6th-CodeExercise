#include "Ch10_7.h"


Plorg::Plorg(){
	CI = 50;
	strcpy_s(name, "Plorg");
}

void Plorg::reset(char * ch, const int& c){
	strcpy_s(name, ch);
	CI = c;
}

void Plorg::show()const{
	std::cout << "name: " << name << std::endl;
	std::cout << "CI: " << CI << std::endl;
}