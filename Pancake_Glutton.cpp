#include<iostream>
#include<Windows.h>

using namespace std;


int main() {
	
	int total_Pancakes = 0;
	int mostEaten = 0;
	int personMost;
	int leastEaten = 99999;
	int personLeast;
	int store[10];
	int a = 0;
	int eaten;
	for (int person = 1; person <= 10; person++)
	{

		cout << "Enter the number of pancakes eaten by person " << person << endl;
		cin >> eaten;
		total_Pancakes = total_Pancakes + eaten;

		store[a] = eaten;
		a++;

	
		if (eaten > mostEaten)
		{
			mostEaten = eaten;
			personMost = person;
		}
		else { leastEaten = eaten;
		personLeast = person;
		}
	}		
	cout << mostEaten <<" by "<< personMost<< endl;
	cout << leastEaten <<" by "<< personLeast<< endl;
	system("PAUSE");

	return 0;
}