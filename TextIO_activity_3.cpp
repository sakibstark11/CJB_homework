
// Random number generators
// Rolling a dice 100 times


#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	int count1 = 0; // count of 1s rolled
	int count2 = 0; // count of 2s rolled
	int count3 = 0; // count of 3s rolled
	int count4 = 0; // count of 4s rolled
	int count5 = 0; // count of 5s rolled
	int count6 = 0; // count of 6s rolled
	int new_Score; // total score to be written 
			   //int previous_score;
	srand(time(0)); // seed the pseudo random number generator

	for (int roll = 1; roll <= 100; roll++) // 100 rolls
	{
		int diceRoll;
		diceRoll = 1 + rand() % 6; // store a random number between 1 and 6

		switch (diceRoll)
		{
		case 1:
			++count1;
			break;
		case 2:
			++count2;
			break;
		case 3:
			++count3;
			break;
		case 4:
			++count4;
			break;
		case 5:
			++count5;
			break;
		case 6:
			++count6;
			break;
		default:
			break;
		}
	}
	new_Score = count1 * 1 + count2 * 2 + count3 * 3 + count4 * 4 + count5 * 5 + count6 * 6;
	
	
	int previous_Score;
	ifstream inputFileStream;
	inputFileStream.open("output.txt");
	inputFileStream >> previous_Score;

	if (inputFileStream.good())
	{
		cout << "looking up the previous score" << endl;

		if (!inputFileStream.fail())
		{
			inputFileStream >> previous_Score;
			cout << "score was " << previous_Score << endl;
		}
		}
		system("pause");
		cout << "You have rolled " << count1 << " ones" << endl;
		cout << "You have rolled " << count2 << " twos" << endl; // count of 1s rolled
		cout << "You have rolled " << count3 << " threes" << endl; // count of 1s rolled
		cout << "You have rolled " << count4 << " fours" << endl; // count of 1s rolled
		cout << "You have rolled " << count5 << " fives" << endl; // count of 1s rolled
		cout << "You have rolled " << count6 << " sixes" << endl; // count of 1s rolled
		cout << "Your score this game is: " << new_Score << endl;
		cout << "End of program" << endl;
		system("pause");
		if (previous_Score < new_Score)
		{
			cout << "it's a new high score " << endl;
			cout << "--writing to output.txt started--" << endl;
			ofstream outputFileStream;
			outputFileStream.open("output.txt");
			outputFileStream << endl;
			outputFileStream << new_Score << endl;
			outputFileStream << previous_Score << endl;
			outputFileStream.close();
			cout << "--writing to output.txt finished--" << endl << endl;
		}
		else if (previous_Score > new_Score || previous_Score == new_Score)
		{
			cout << "unlucky" << endl;
			cout << "--writing to output.txt started--" << endl;
			ofstream outputFileStream;
			outputFileStream.open("output.txt");
			outputFileStream << endl;
			outputFileStream << previous_Score << endl;			
			outputFileStream << new_Score  << endl;
			outputFileStream.close();
			cout << "--writing to output.txt finished--" << endl << endl;
		}
	return 0;
}