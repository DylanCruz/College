// STEP 1: Complete the documentation below
//     This includes the blanks after = further down
//
// RectArea.cpp
// Written by: Dylan Cruz
// On the Date: 9/4/2013
//
// This program computes the area of a rectangle given
// its total dimensions and the ratio between its length
// and width.  Along the way, it must determine what the
// actual measurements are.
//
// For example, some problems this could solve are:
//    The length is 2 * the width and the perimeter is 12.
//			What is the area?   (Answer: 8 for 4x2)
//	  The length is 3 * the width and the perimeter is 24.
//			What is the area?   (Answer: 27 for 9x3)
//
// ALSO STEP 1:  (VERY IMPORTANT!)\
//		complete the equations below, which will
//		derive the formula necessary to complete this tutorial
//
// Some of the relevant formulas for this program are
//    Given length and width, Area of a Rectangle = length * width
//    Given length and width, Perimeter of a Rectangle = (length + width) * 2
//    if length = ratio * width, then 
//		  given width and ratio, Perimeter = (2 * (ratio * width)) + (width * 2)
//    or solving for the previous for width, 
//		  given Perimeter and ratio (and nothing else), 
//			width = perimeter / (2*(ratio + 1))

// The following lines will be part of every C++ program in this course:
#include <iostream>
using namespace std;

// Every C++ program has a function named main()
int main()
{
	//  STEP 2:  Declare all of the variables needed for this program,
	//     including those for input, output, and intermediate calculations.

	double length;
	double width;
	double perimeter;
	double area;
	double ratio;

	// STEP 3:  Input values from the keyboard (there are two inputs).
	//    Be sure to tell that user what inputs are expected.
	//	  NOTE:  They are NOT the length and width of the rectangle!

	cout << "Please enter the perimeter of the rectangle: ";
	cin >> perimeter;
	cout << "Please enter the ratio of length to width: ";
	cin >> ratio;
	cout << endl;

	// STEP 4:  Determine the width, length and area of the rectangle.
	//    Remember to use an asterisk to represent multiplication.

	width = perimeter / (2*(ratio + 1));
	length = (perimeter - (2*width)) / 2;
	area = length * width;

    // STEP 5:  Output the results, with explanatory text.

	cout << "The width of the rectangle is " << width << endl;
	cout << "The length of the rectangle is " << length << endl;
	cout << "The area of the rectangle is " << area << endl;
	cout << endl;

	return 0;
}
//  STEP 6:  Build a solution, and then Debug/Start-without-debugging.
//         (Ratio 1, Perimeter 24)  (Ratio 4, Perimeter 30) and
//         (Ratio 9, Perimeter 40)  should all have an area of 36.
//			 Fix your program if it yields incorrect results
//
//  STEP 7:  From the Build menu, pick the option to Clean your solution
//
//  STEP 7:  Log in to ANGEL, and submit this .cpp file
//		     into the Tutorial dropbox (not the .sln file)
//			 You will find this C++ source inside a nested folder
