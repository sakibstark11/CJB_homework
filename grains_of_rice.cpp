// ConsoleApplication4.cpp : Defines the entry point for the console application.
//grains

#include <iostream>
#include <string>
using namespace std;
int main()
{
	char y, n;
	string s;
	long day = 1;
	double riceToday = 1;
	double totalRice = 1;
	cout << "ready to count? press y to confirm" << endl;
	cin >> s;
	if (s == "y")
	{
		do
		{
			cout << "Day:" << day << " rice today :" << riceToday << " total rice so far!: " << totalRice << endl;
			riceToday = (riceToday * 2);
			totalRice = riceToday + totalRice;
			day++;
		} while (day < 65);
	}
	else if (s == "n")
	{
		cout << "okay" << endl;
	}
	return 0;
}

