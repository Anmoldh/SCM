#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Manipulators
    // int a = 3, b = 78, c = 1223;
    // cout << "The value of a without setw is " << a << endl;
    // cout << "The value of b without setw is " << b << endl;
    // cout << "The value of c without setw is " << c << endl;

    // cout << "The value of c is " << setw(4) << a << endl;
    // cout << "The value of c is " << setw(4) << b << endl;
    // cout << "The value of c is " << setw(4) << c << endl;

    // Operators Precedence
    int a = 3, b = 4;
    int c = (a*5)+b-45+87;
    cout << c;

    return 0;
}
