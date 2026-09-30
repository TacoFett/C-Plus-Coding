/**
* Lab4_nlehman5.cpp
* Nathaniel Lehman
* 9/28/26
* A program that generates a multiplication table
*/

#include<iostream>
using namespace std;

int main()
{
	int userNumber;
	while (true)
	{
		cout << "Please Enter a Number That Is Greater Than 4 and Less Than 10 " << endl;
		cin >> userNumber;

		if (userNumber < 4)
		{
			cout << "That Number Is Too Low, Please Enter A Higher Number " << endl;
		}
		else if (userNumber > 10)
		{
			cout << "That Number Is Too High, Please Enter A Lower Number " << endl;
		}
		else if (userNumber >= 4 && userNumber <= 10)
		{
			for (int n = 1; n <= userNumber; n++)
			{
				
				for (int i = 1; i <= userNumber; i++)
				{
					cout << i * n << "\t";
				}
				
				cout << endl;
			}	
		}
	}
	
	return 0;
}