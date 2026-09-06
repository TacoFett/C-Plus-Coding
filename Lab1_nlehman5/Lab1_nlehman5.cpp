/**
* Lab1_nlehman5.cpp
* Nathaniel Lehman
* 9/6/26
* A Simple program made for greeting
*/

#include<iostream>
using namespace std;

int main()
{
	string FirstName, LastName;
	cout << "Please enter your First Name: ";
	cin >> FirstName;
	cout << "Please enter your Last Name: ";
	cin >> LastName;
	cout << "Welcome to C++ Programming " << FirstName << " " << LastName << endl;
}