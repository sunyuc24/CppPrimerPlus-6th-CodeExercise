#include "Ch7.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Ch7::Ch7()
{
}


Ch7::~Ch7()
{
}
void Ch7::Ch7_1(){
	double ndigit1 = 1, ndigit2 = 1;
	double harmaverage = 0;
	cout << "Enter two digits(to stop, enter 0): " << endl;
	while (cin >> ndigit1 >> ndigit2){
		if (ndigit1 == 0 || ndigit2 == 0){
			break;
		}
		else{
			harmaverage = Ch7_1harmaverage(ndigit1, ndigit2);
			cout << "Harmonic average of " << ndigit1 << " and " << ndigit2 << " is " << harmaverage << endl;
		}	
	}
}

double Ch7::Ch7_1harmaverage(double &ndigit1, double &ndigit2){
	double harmaverage;
	return harmaverage = 2.0 * ndigit1 * ndigit2 / (ndigit1 + ndigit2);
}