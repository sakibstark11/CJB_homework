#include <iostream>
 
#include <windows.h>

using namespace std;


int half(int userInput)
{
	cout <<userInput << endl;
	int newNumber = userInput / 2;
	if(newNumber > 0)
	{
		userInput = newNumber;
		cout << half(userInput) << endl;

	}
	else if(newNumber ==0) {
		system("PAUSE");
			exit(0); }
	return newNumber;
}
int inputs(int num1, int num2)
{
	int answer = num1*num2;

	return answer;
}
void sayHello(int loop)
{
	for (int x =0; x<loop;x++)
	{
		cout << "hello" << endl;
	}
}

int main()
{
	
	cout << inputs(3, 3) << endl;
	sayHello(3);
	half(100);
	

	system("PAUSE");
	return 0;
	
}
