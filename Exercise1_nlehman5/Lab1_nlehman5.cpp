/**
 * @file Exercise1_nlehman5.cpp
 * @author Nathaniel Lehman
 * @date 10/13/26
 * @brief This program validates UPC-A barcodes performing the UPC-A check digit algorithm.
 */

#include<iostream>
using namespace std;

/**
 * @brief Starting point of the program
 * @param none
 * @return return 0 to ensure the program runs.
 */
int main()
{
	char UPCcode[12];
	int Odds = 0;
	int Evens = 0;
	int total = 0;
	int numCheck = 0;
	while (true)
	{
		cout << "Please Enter a 12 Digit UPC Code: " << endl;

		for (int i = 0; i < 12; i++)
		{
			cin >> UPCcode[i];
		}

		for (int i = 0; i < 12; i += 2)
		{
			Odds += UPCcode[i] - '0';
		}
		Odds = Odds * 3;

		for (int i = 1; i < 11; i += 2)
		{
			Evens += UPCcode[i] - '0';
		}
		total = Evens + Odds;
		numCheck = (10 - (total % 10));

		if (numCheck == UPCcode[11] - '0')
		{
			cout << "This is a Valid UPC Code!" << endl;
		}
		else
		{
			cout << "This is Not A Valid UPC Code!" << endl;
		}
	}
	return 0;

}