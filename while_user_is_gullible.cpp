#include <iostream>
#include <Windows.h>
using namespace std;


	
int main() {

	int user=0, trials=-1;
	
	while (user != trials)
	{
		trials++;
		cout << "you have to enter a number other than " << trials << endl;
		cin >> user;
		
	}
	if (user == trials) { cout << "opps that is it" << endl; }
	system("PAUSE");
	return 0;
}