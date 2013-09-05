// Fahrenheit to Kelvin temperature conversion
// Fall 2013			Roger Christman
// A simple program to convert a temperature

// Given:  for F = temperature in Fahrenheit and
//			   C = temperature in Centigrade
//     F = (9/5)C + 32
// also, 0 C = 273.15 kelvin

// since Fahrenheit is an input to this problem,
// these equations need to be rearranged
//     C = (F-32) / (9/5)      computes C from F
//     K = C + 273.15          computes Kelvin from C

#include <iostream>
using namespace std;
int main()
{
	// declare constants
	const double FREEZING_F = 32;			// water freezing in Fahrenheit
	const double FREEZING_K = 273.15;		// water freezing in kelvin
	const double DEGREES_F_PER_DEGREES_C = 1.8;

	// declare variables
	double degreesF;				// temp in Fahrenheit
	double degreesC;				// temp in Centigrade
	double kelvins;					// temp in kelvin

	// input a temperature and convert it
	cout << "Please enter a temperature in Fahrenheit:  ";
	cin >> degreesF;

	// compute, using reworked equations above
	degreesC = (degreesF - FREEZING_F) / DEGREES_F_PER_DEGREES_C;
	kelvins = degreesC + FREEZING_K;

	// output results
	cout << "Temperature is also " << degreesC << " Centigrade or " 
		<< kelvins << " Kelvin" << endl;

	return 0;
}