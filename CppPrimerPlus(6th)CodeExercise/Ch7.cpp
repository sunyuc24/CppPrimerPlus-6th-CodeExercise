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
	Ch7_3a(x);
	Ch7_3b(&x);
	Ch7_3a(x);
	}

void Ch7::Ch7_3a(box x){
	cout << "maker " << x.maker << endl;
	cout << "height " << x.height << endl;
	cout << "width " << x.width << endl;
	cout << "length " << x.length << endl;
	cout << "volume " << x.volume << endl;
}

void Ch7::Ch7_3b(box * px){
	px->volume = px->height * px->length * px->width;
}

void Ch7::Ch7_5(){
	int n;
	cout << "Enter a number: ";
	while (cin >> n)
	{
		cout << n << "! = " << Ch7_5recursion(n) << endl;
		cout << "Enter a number: ";
	}
}

long Ch7::Ch7_5recursion(int n){
		if (n == 0)
			return 1;

		return n * Ch7_5recursion(n - 1);
}

void Ch7::Ch7_6(){
	const int Len = 10;
	int count = 0;
	double a[Len] = { 0.0 };
	Ch7_6Fill_array(a, Len, count);
	Ch7_6Show_array(a, count);
	Ch7_6Reverse_array(a, count);
	Ch7_6Show_array(a, count);
	}

void Ch7::Ch7_6Fill_array(double * arr, int n, int &count){
	int i;
	double elem;
	for (i = 0; i < n; ++i){
		arr[i] = 0.0; 
	}
	for (i = 0; i < n; ++i)
	{
		cout << "Enter arr[" << i << "](enter a digit): ";
		if (cin >> elem){
			arr[i] = elem;
		}
		else{
			break;
		}
	}
	count = i;
	cout << "You enter " << count << " digits totally" << endl;
}

void Ch7::Ch7_6Show_array(const double * arr, int n){
	for (int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Ch7::Ch7_6Reverse_array(double * arr, int n){
	int i;
	int mid = n / 2;
	double temp;
	for (i = 0; i < mid; ++i){
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}

void Ch7::Ch7_9(){
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n'){
		continue;
	}
	student * pstu = new student[class_size];
	int entered = Ch7_9getinfo(pstu, class_size);
	for (int i = 0; i < entered; ++i){
		Ch7_9display1(pstu[i]);
		Ch7_9display2(&pstu[i]);
	}
	Ch7_9display3(pstu, entered);
	delete[] pstu;
	cout << "Done" << endl;
}

int Ch7::Ch7_9getinfo(student * pstu, int n){
	student * pt;
	int i;
	for (i = 0; i < n; ++i){
		pt = pstu + i;
		cout << "Enter info student #" << i << ":" << endl;
		cout << "fullname: ";
		// detect blank line
		cin.getline(pt->fullname, SLEN);
		if (!pt->fullname){
			break;
		}
		cout << "hobby: ";
		cin.getline(pt->hobby, SLEN);
		cout << "ooplevel: ";
		cin >> pt->ooplevel;
		cin.get();
	}
	return i;
}

void Ch7::Ch7_9display1(student stu){
	cout << "name: " << stu.fullname << endl;
	cout << "hobby: " << stu.hobby << endl;
	cout << "ooplevel: " << stu.ooplevel << endl;
}

void Ch7::Ch7_9display2(const student * pstu){
	cout << "name: " << pstu->fullname << endl;
	cout << "hobby: " << pstu->hobby << endl;
	cout << "ooplevel: " << pstu->ooplevel << endl;
}

void Ch7::Ch7_9display3(const student pa[], int n){
	student * pt;
	for (int i = 0; i < n; ++i){
		cout << "info #" << i << endl;
		cout << "name: " << (pa + i)->fullname << endl;
		cout << "hobby: " << (pa + i)->hobby << endl;
		cout << "ooplevel: " << (pa + i)->ooplevel << endl;
	}
}

void Ch7::Ch7_10(){
	double x, y; 
	double(Ch7::*pfunc_arr[2])(double, double);
	pfunc_arr[0] = &Ch7::Ch7_10add; 
	pfunc_arr[1] = &Ch7::Ch7_10mul;

	cout << "Enter 2 floats: ";
	while ((cin >> x) >> y){
		double res;
		for (int i = 0; i < 2; ++i){
			res = Ch7_10calculate(x, y, pfunc_arr[i]);
			cout << "result #" << i << ": " << res << endl;
			cout << "Enter 2 floats again: " << endl;
		}
	}
}

double Ch7::Ch7_10add(double x, double y){
	return x + y;
}

double Ch7::Ch7_10mul(double x, double y){
	return x * y;
}

double Ch7::Ch7_10calculate(double x, double y, double(Ch7::*pf)(double,double)){
	return (this->*pf)(x, y);
}

