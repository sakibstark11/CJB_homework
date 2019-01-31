#include <iostream>
#include <Windows.h>

using namespace std;




int main() {

	int years=0;
	double saver_A = 1000;
	double saver_B = 500;
	double interest_A = 1.5;
	double interest_B = 4.5;
	int hundred = 100;


	while (saver_A >= saver_B) {

		saver_A = (saver_A / hundred)*(hundred+interest_A);

		saver_B = (saver_B / 100)*(hundred + interest_B);

		years++;

		cout << "Year: " << years << endl;
		cout << "Saver A has: " << saver_A << endl;
		cout << "Saver B has: " << saver_B << endl << endl;
		
		
	}
	system("PAUSE");
	return 0;
}