#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "enter switch case number: ";
	cin >> num;
	
	switch(num)
	{
		case 1:
			cout << "this is case 1";
			break;
			
		case 2:
			cout << "this is case 2";
			break;
			
		default:
			cout << "NSC";
			break;
	}
}

