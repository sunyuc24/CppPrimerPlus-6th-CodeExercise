#include "Ch2.h"
#include "Ch3.h"
#include "Ch4.h"
#include "Ch5.h"
#include "Ch6.h"
#include "Ch7.h"
#include "Ch8.h"
#include "Ch10_6.h"
#include "Ch11_1.h"
int main()
{
	using namespace std;
	using VECTOR::Ch11_1_Vector;
	srand(time(0));     // seed random-number generator
	double direction;
	Ch11_1_Vector step;
	Ch11_1_Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	// write to file
	ofstream fout;
	fout.open("walk.txt");

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		// write to file
		fout << "Target Distance: " << target << ", ";
		fout << "Step Size: " << dstep << endl;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, VECTOR::Ch11_1_Vector::POL);
			result = result + step;
			fout << steps << ": " << result << endl;
			steps++;
		}
		cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";

	return 0;
}