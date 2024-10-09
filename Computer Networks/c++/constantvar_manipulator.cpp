#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;
int main()
{
    const int a = 1;
    int b = 1;
    int c = 3, d = 532, e = 34234;
    cout << a << endl;
    // a=2;       e
    cout << b << endl;
    b = 2;
    cout << b << endl;
    cout << "the value of c is " << c << endl;
    cout << "the value of d is " << d << endl;
    cout << "the value of e is " << e << endl;
    cout << "the value of c with setw is " << setw(5) << c << endl; // Manipulator
    cout << "the value of d with setw is " << setw(5) << d << endl;
    cout << "the value of e with setw is " << setw(5) << e << endl;

    return 0;
}