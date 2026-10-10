/**
 * Lab6_nlehman5.cpp
 * Nathaniel Lehman
 * 10/9/26
 * Compare static arrays and vectors for processing student scores.
 */

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * @brief Collects and Averages Test Scores in an 10 size Array.
 * @param none
 * @return none
 */
void arraySolution()
{
	int testScores[10];
	int total = 0;
	int averageScore = 0;
	int highest, lowest;

	for (int i = 0; i < 10; i++) {
		cout << "Please Enter 10 Test Scores: ";
		cin >> testScores[i];
		total += testScores[i];

		while (testScores[i] < 0 || testScores[i] > 100) {
			cout << "This Input is Invalid. Please Input a Score From 0 - 100: ";
			cin >> testScores[i];
		}

		if (i == 0) {
			highest = testScores[i];
			lowest = testScores[i];
		}

		if (testScores[i] > highest) {
			highest = testScores[i];
		}
		if (testScores[i] < lowest) {
			lowest = testScores[i];
		}
	}
	averageScore = total / 10;
	cout << "The Average Of The Test Scores Is: " << averageScore << endl;
	cout << "The Highest Score Is: " << highest << endl;
	cout << "The Lowest Score Is: " << lowest << endl;
	cout << "This Was Output Using Arrays" << endl;
}

/**
 * @brief Collects, Averages, And Displays a list of test scores all stored in a Vector.
 * @param none
 * @return none
 */
void vectorSolution()
{
	vector<int> TestScores;

	int Score = 0;
	int total = 0;
	int Average = 0;
	int Highest = 0;
	int Lowest = 0;
	while (true)
	{
		cout << "Enter A Test Score: ";
		cin >> Score;

		if (Score == -1)
		{
			break;
		}

		if (Score < 0 || Score > 100)
		{
			cout << "That Number is Invalid Please Enter A Valid Test Score: ";
			continue;
		}

		if (TestScores.size() == 1)
		{
			Highest = Score;
			Lowest = Score;
		}

		if (Score > Highest)
		{
			Highest = Score;
		}

		if (Score < Lowest)
		{
			Lowest = Score;
		}

		TestScores.push_back(Score);
		total += Score;
		std::sort(TestScores.begin(), TestScores.end());
		Average = total / TestScores.size();
	}

	cout << "The Average Score Is: " << Average << endl;
	cout << "The Highest Score Is: " << Highest << endl;
	cout << "The Lowest Score Is: " << Lowest << endl;
	cout << "Scores In Ascending Order: " << endl;
	for (int i = 0; i < TestScores.size(); i++)
	{
		cout << TestScores[i] << endl;
	}
	cout << "This Was Output Using A Vector";
}
/**
 * @brief Starting Point Of the Program.
 * @param none
 * @return Returns 0 to indicate program runs.
 */
int main()
{ 
	arraySolution();
	vectorSolution();
	
	return 0;
}

