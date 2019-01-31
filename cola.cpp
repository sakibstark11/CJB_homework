#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	string user;	
	char choice;
	cout << " type your preferences then press enter and type your name " << endl;
	cout << "water  -  Enter w" << endl;
	cout << "coke   -  Enter c" << endl;
	cout << "tango  -  Enter t" << endl;
	cout << "sprite -  Enter s" << endl;
	cout << "vimto  -  Enter v" << endl;
	cin >> choice;	
	cin >> user;
	switch (choice)
	{
	case 'w': cout << user << " Selected drink is: water" << endl;
		break;

	case 'c': cout << user << " Selected drink is: coke" << endl;
		break;

	case 't': cout << user << " Selected drink is: tango" << endl;
		break;

	case 's': cout << user << " Selected drink is: sprite" << endl;
		break;

	case 'v': cout << user << " Selected drink is: Vimto" << endl;
		break;

	default:
		cout << "Error. Choice was not valid, here is your money back." << endl;

	}
	system("PAUSE");
	return 0;
}