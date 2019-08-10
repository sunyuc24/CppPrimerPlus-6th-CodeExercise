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

void Ch7::Ch7_2(){
	double score_golf[10] = { 0 };
	cout << "Enter your golf scores: " << endl;
	int count;
	count = Ch7_2fill(score_golf);
	double avg;
	avg = Ch7_2getavg(score_golf, count);
	Ch7_2output(score_golf, count);
	cout << "averages: " << avg << endl;
}

int Ch7::Ch7_2fill(double* p){
	int count;
	for (count = 0; count < 10; ++count)
	{
		cout << "Enter score(" << count + 1 << "): ";
		double score;
		cin >> score;
		if (score <= 0.0)
			break;
		p[count] = score;
	}

	return count + 1;
}
double Ch7::Ch7_2getavg(double * p, int n){
	double sum;
	int i;
	double avg;

	for (i = 0, sum = 0.0; i < n; ++i)
		sum += p[i];

	avg = sum / (double)n;

	return avg;
}

void Ch7::Ch7_2output(double * p, int n){
	int i;
	for (i = 0; i < n-1; ++i)
		std::cout << p[i] << " ";
	std::cout << std::endl;
}

void Ch7::Ch7_3(){
	box x = { "cpp", 2.0, 3.0, 3.5, 0.0 };
	a(x);
	b(&x);
	a(x);
	}

void Ch7::a(box x){
	cout << "maker " << x.maker << endl;
	cout << "height " << x.height << endl;
	cout << "width " << x.width << endl;
	cout << "length " << x.length << endl;
	cout << "volume " << x.volume << endl;
}

void Ch7::b(box * px){
	px->volume = px->height * px->length * px->width;
}
