#include<iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int my_Array[10][10];






int main() {

	for (int i = 0; i <10; i++) {

		for (int b = 0; b <10; b++)
		{
			my_Array[i][b] = (i + 1)*(b + 1);
			cout << my_Array[i][b];
				cout << setw(4);
			}
	}
	cout << setw(4) << endl;
	system("PAUSE");
	return 0;
}