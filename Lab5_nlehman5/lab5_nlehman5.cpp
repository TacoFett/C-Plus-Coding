/**
* Lab5_nlehman5.cpp
* Nathaniel Lehman
* 10/3/26
* A program that generates a multiplication table using functions
*/

#include<iostream>
using namespace std;
/**
 * @brief This function sends a error message if the input doesn't meet the range set.
 * @param none
 * @return none (void)
 */
void printInputValidationError()
{
	cout << "That Number Is Either Too Low Or Too High" << endl;
}

/**
 * @brief Detects if the user input is valid and within the range (4 < input < 10)
 * @param requires the users input and checks if its valid
 * @return An output representing the max digit
 */
bool isMaxDigitInputValid(int input)
{
	return (input > 4 && input < 10);
}

/**
 * @brief Asks the user for a valid input
 * @param none
 * @return Outputs the valid max digit(5-9)
 */
int getMaxDigitInput()
{
	int input;
	cout << "Max Digit: ";
	cin >> input;
	return input;
}

/**
 * @brief Prints out a multiplication table of the valid max digit
 * @param the input must be a valid max digit
 * @return none (void)
 */
void printMultiplicationTable(int maxDigit)
{
	for (int n = 1; n <= maxDigit; n++)
	{
		for (int i = 1; i <= maxDigit; i++)
		{
			cout << i * n << "\t";
		}

		cout << endl;
	}
}

/**
 * @brief Starting point of the program
 * @param none
 * @return return 0 to ensure the program runs.
 */
int main()
{
	int userNumber;

	while (true)
	{
		cout << "Please Enter a Number That Is Greater Than 4 and Less Than 10 " << endl;
		userNumber = getMaxDigitInput();

		if (!isMaxDigitInputValid(userNumber))
		{
			printInputValidationError();
		}

		else
		{
			printMultiplicationTable(userNumber);
		}
	}
	return 0;
}