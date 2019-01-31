#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	int user;
	cout << "enter your score: " << endl;
	cin >> user;
	if (user >= 0 && user <= 100)
	{
		if (user == 100)
		{
			cout << "perfect score" << endl;
		}
		if (user >= 0 && user <= 59)
		{
			cout << "grade F";
		}
		if (user >= 60 && user <=69)
		{
			cout << "grade D";
		}
		if (user >= 70 && user <= 79)
		{
			cout << "grade C";
		}
		if (user >=80 && user <=89)
		{
			cout << "grade B";
		}
		if (user >= 90 && user <100)

		{
			cout << "grade A";
		}
	}
	else { cout << "this is why u failed"; }
	cout << endl;
	system("PAUSE");

	return 0;
}