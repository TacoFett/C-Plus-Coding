/**
* Lab3_nlehman5.cpp
* Nathaniel Lehman
* 9/19/26
* A program made calculate the Area of Rectangle and a Circle
*/

#include<iostream>
using namespace std;

int main()
{
	int Selection;
	float length, width, radius, area, area2;
	const double PI = 3.14159;
	
	cout << "Menu" << endl;
	cout << "1: Calculate The Area Of a Rectange" << endl;
	cout << "2: Calculate The Area Of a Circle" << endl;
	cout << "3: Quit" << endl;
	cout << "Please Enter a Selection: " << endl;
	cin >> Selection;

	if (Selection == 1)
	{
		cout << "Please Enter The Length Of The Rectangle: ";
		cin >> length;
		cout << "Please Enter The Width Of The Rectangle: ";
		cin >> width;
		area = length * width;
		cout << "The Area Of The Rectangle Is: " << area << endl;
	}

	
	else if (Selection == 2)
	{
		cout << "Please Radius Of The Circle: ";
		cin >> radius;
		area2 = (radius * radius) * PI;
		cout << "The Area Of The Circle Is: " << area2 << endl;
	}

	
	else if (Selection == 3)
	{
		cout << "Have a Good Rest Of Your Day!" << endl;
		return 0;
	}

	
	else
	{
		cout << "Please Enter 1, 2 Or 3" << endl;
	}
	
}