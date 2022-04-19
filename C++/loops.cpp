#include <iostream>
using namespace std;

int main()
{
//	loops in C++

//	1. for loop
	cout << "for loop" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << i << endl;
	}
	
//	2. while loop
	cout << "while loop" << endl;
	int i = 0;
	while (i <= 10)
	{
		cout << i << endl;
		i++;
	}

//	3. do-while loop
	cout << "do-while loop" << endl;
	do
	{
		cout << i << endl;
		i++;
	} while (i <= 20);

	return 0;
}
