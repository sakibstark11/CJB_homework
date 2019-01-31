#include <iostream>

using namespace std;
int main()
{
	int first_arrays[100];
	for (int c = 0; c <= 99; c++)
	{
		first_arrays[c] = c+1;
	}
	for(int c = 0; c <= 99; c++)
	cout << first_arrays[c] << endl;
	return 0;
}