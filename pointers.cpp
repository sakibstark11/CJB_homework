#include <iostream>
#include <Windows.h>
using namespace std;


int pointer(int cube)
{
	cube = cube ^ 3;
	cout << cube << endl;
	return cube;
}

int main()
{

	pointer(88);

	const int cube = 9;



	const int *pointer = &cube;
	cout << *pointer << endl;
	cout << &cube << endl;


	const int a = 1;
	const int b = 2;
	const int *pointerToConstInt = &a;
	pointerToConstInt = &b; 
	

	system("PAUSE");

	return 0;
}