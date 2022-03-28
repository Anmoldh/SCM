#include <iostream>
using namespace std;

int main()
{
    cout << "operators in c++" << endl;
    cout << "following are types of operators" << endl;

    // Assignment Operators --> Used to assign value 
    int a = 8, b=4;

    // Arithmetic Operators
    cout << "value of a + b is " << a + b << endl;
    cout << "value of a - b is " << a - b << endl;
    cout << "value of a * b is " << a * b << endl;
    cout << "value of a / b is " << a / b << endl;
    cout << "value of a % b is " << a % b << endl;
    cout << "value of a ++ is " << a ++ << endl;
    cout << "value of a -- is " << a -- << endl;
    cout << "value of ++ a is " << ++ a << endl;
    cout << "value of -- a is " << -- a << endl;
    cout << endl;

    // Comparison Operators
    cout << "The Value of a == b is " << (a == b) << endl;
    cout << "The Value of a != b is " << (a != b) << endl;
    cout << "The Value of a > b is " << (a > b) << endl;
    cout << "The Value of a < b is " << (a < b) << endl;
    cout << "The Value of a >= b is " << (a >= b) << endl;
    cout << "The Value of a <= b is " << (a <= b) << endl;
    cout << endl;

    // Logical Operators
    cout << "The Value of this Logical and operator ((a == b) && (a > b)) is " << ((a == b) && (a > b)) << endl;
    cout << "The Value of this Logical or operator ((a == b) || (a > b)) is " << ((a == b) || (a > b)) << endl;
    cout << "The Value of this Logical not operator (!(a == b)) is " << (!(a == b)) << endl;
    cout << endl;

    return 0;
}
