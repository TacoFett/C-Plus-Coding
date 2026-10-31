/**
 * Lab8_nlehman5.cpp
 * Nathaniel Lehman
 * 10/31/26
 * Demonstrates Stack vs Heap Memory and use of pointers and references.
 */
#include <iostream>

using namespace std;

int main()
{
	int stackInt = 20;

	int* heapInt = new int(30);

	int* ptrToStack = &stackInt;

	int& refToStack = stackInt;


	cout << "Stack Variable (stackInt):" << endl;
	cout << "Value: " << (stackInt) << endl;
	cout << "Address: " << (&stackInt) << "\n\n";

	cout << "Heap Variable (heapInt): " << endl;
	cout << "Value: " << (*heapInt) << endl;
	cout << "Address: " << (&heapInt) << "\n\n";

	cout << "Pointer To Stack (ptrToStack): " << endl;
	cout << "Value: " << (*ptrToStack) << endl;
	cout << "Address: " << (&ptrToStack) << "\n\n";

	cout << "Reference To Stack (refToStack):" << endl;
	cout << "Value: " << (refToStack) << endl;
	cout << "Address: " << (&refToStack) << endl;



}