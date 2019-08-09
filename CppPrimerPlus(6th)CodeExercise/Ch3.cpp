#include "Ch3.h"

using std::cout;
using std::cin;
using std::endl;
Ch3::Ch3()
{
}


Ch3::~Ch3()
{
}
void Ch3::Ch3_1(){
	cout << "Please enter your height(integer inch): ";
	cin >> nheight;
	cout << "Your height is: " << nheight / Feett2inch << " feets " << nheight % Feett2inch << " inches.\n";
}

void Ch3::Ch3_2(){
	cout << "Please enter your height(integer feet and inch): ";
	cin >> nheight_feet;
	cin >> nheight_inch;
	cout << "Please enter your weight(pound): ";
	cin >> nweight;
	cout << "Your BMI is: " 
		 << (nweight / Kg2pound) / (((Feett2inch*nheight_feet + nheight_inch)*Inch2meter)*((Feett2inch*nheight_feet + nheight_inch)*Inch2meter))
		 << endl;
}

void Ch3::Ch3_3(){
	cout << "Enter a latitude in degree, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	cin >> ndegree;
	cout << "Next, enter the minutes of arc: ";
	cin >> nminute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> nsecond;
	cout << ndegree << " degrees, " << nminute << " minutes, " << nsecond << " seconds = "
		 << ndegree + (float)nminute / degree2minute + (float)nsecond / minute2second << " degrees." << endl;
}

void Ch3::Ch3_4(){
	cout << "Enter the number of seconds: ";
	cin >> lseconds;
	int ndays, nhours, nminutes, nseconds;
	ndays = lseconds / Day2second;
	nhours = lseconds % Day2second / Hour2second;
	nminutes = (lseconds - ndays*Day2second - nhours*Hour2second) / Minute2second;
	nseconds = lseconds - ndays*Day2second - nhours*Hour2second - nminutes*Minute2second;
 	cout << lseconds << " seconds = " << ndays <<" days, "
		 << nhours << " hours, "
		 << nminutes << " minutes, "
		 << nseconds << " seconds.\n";
}

void Ch3::Ch3_5(){
	cout << "Enter the world's population: ";
	cin >> wldpopulation;
	cout << "Enter the population of the US: ";
	cin >> uspopulation;
	cout << "The population of the US is " << (double)uspopulation*100 / wldpopulation << "%"
		<< " of the world population.\n";
}

void Ch3::Ch3_6(){
	cout << "Enter the number of ur miles and gallons : ";
	cin >> fmile;
	cin >> fgallon;
	cout << "Enter the number of ur Kms and Ls : ";
	cin >> fKm;
	cin >> fL;
	cout << "miles per gallon is: " << fmile / fgallon << ".\n";
	cout << "gas using per 100Kms is: " << 100 * (fL / fKm) << ".\n";
}

void Ch3::Ch3_7(){

}



































