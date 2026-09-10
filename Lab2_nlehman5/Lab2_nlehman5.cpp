/**
* Lab2_nlehman5.cpp
* Nathaniel Lehman
* 9/9/26
* A program made to calculate the perimeter of a rectangle.
*/

#include<iostream>
using namespace std;

int main()
{
	float length, width, perimeter;
	cout << "This is a program made to calculate the perimeter of a rectangle." << endl;
	cout << "Please enter the length of the rectangle: " << endl;
	cin >> length;
	cout << "Please enter the width of the rectangle: " << endl;
	cin >> width;
	perimeter = 2 * (length + width);
	cout << "The perimeter of the rectangle is: " << perimeter << endl;
	return 0;
}