#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "tell me your age" << endl;
	cin >> age;
	
	if (age < 18){
		cout << "you are under age rn";
	}
	else if (age == 18){
		cout << "you are 18 years old";
	}
	else{
		cout << "you are an adult";
	}
	return 0;
}
