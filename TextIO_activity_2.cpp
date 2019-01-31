#include <windows.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
//wordcheckercounter
using namespace std;

int main1()
{
	{
		cout << "reading the inputdata2 file" << endl;
		ifstream inputFileString;
		inputFileString.open("inputwords.txt");
		if (inputFileString.good())
		{
			cout << "it is fine and dandy" << endl;
			int number = 0;
			string userString;
			string inputString;
			cin >> userString;
			inputFileString >> inputString; // read 1st word
			while (!inputFileString.fail()) // check 1st word, and 2nd word
			{
				if (userString == inputString) // check if 1st matches, 2nd as well
				{
					number++;
					cout << number << " found" << endl;
				}
				inputFileString >> inputString; // read 2nd word, 3rd...
			}
			if (inputFileString.eof())
			{
				cout << "Reached the end of file marker" << endl;
			}
			inputFileString.close();
		}
	}
	return 0;
}
