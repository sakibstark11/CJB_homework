#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	
	string r1[] = { "0","I","II","III","VI","V","VI","VII","VIII","IX" };
	string r2[] = { "X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
	string r3[] = { "C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
	string r4[] = { "M","MM","MMM","MMMM" };

	int userInput;
	cout << "Please enter value lower than 4999: " << endl;
	cin >> userInput;

	int thousands = userInput / 1000;
	int hundreds = userInput % 1000 / 100;
	int tens = userInput % 1000 % 100 / 10;
	int units = userInput % 1000 % 100 % 10;

	cout << "thousands: " << thousands << endl;
	cout << "hundreds: " << hundreds << endl;
	cout << "tens: " << tens << endl;
	cout << "units: " << units << endl;
	if(userInput<10)
	{
		cout << r1[units];
	}
	else if(userInput >=10 && userInput<100)
	{
		cout << r2[tens - 1] << r1[units] << endl;
	}
	else if (userInput>99 && userInput<1000)
	{
		cout << r3[hundreds - 1] << r2[tens - 1] << r1[units] << endl;
	}
	else if (userInput>1000)
	{cout <<r4[thousands-1] << r3[hundreds - 1] << r2[tens - 1] << r1[units] << endl;
	}

	system("PAUSE");

	return 0;
}
