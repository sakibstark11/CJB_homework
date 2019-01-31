#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	for (int i = 5; i > 0; i--)
	{
		for (int j = i; j > 1; j--)
		{
			cout << " - ";
		}
		for (int k = 5 - i; k > -1; k--)
			cout << " * ";

		cout << endl;
	}
	
	system("PAUSE");
	return 0;
}