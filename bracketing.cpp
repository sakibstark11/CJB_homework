#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
#include <string>
using namespace std;

int main() {

	srand(time(0));
	int genNumber;
	int userNumber;
	string user;
	genNumber = 1 + rand() % 100;
	cout << "Random number between 1 and 100 is generated! Guess the number!" << endl;

	cin >> userNumber;
	if (userNumber >= 1 && userNumber <= 100) {
		if (userNumber == genNumber) {
			cout << "You guessed the number" << endl;
		}
		else {
			cout << "wrong guess" << endl;
		}
	}
	else {
		cout << "invalid" << endl;
	}
	system("PAUSE");

		int num, guess, trials = 0;

		srand(time(0)); 

		num = rand() % 100 + 1;

		

		do

		{

			cout << "your number is " << num << endl;
			cout << "c for correct, h for higher, l for lower" << endl;
			cin >> user;


			trials++;

			if (user == "h" || "l")
			{

				cout << "okay , trying";
				num = rand() % 100 + 1;

			}


		} while (user != "c");
		cout << "okay, great" << endl;
		system("PAUSE");





		return 0;


}





