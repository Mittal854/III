#include <iostream>

using namespace std;
int a = 50;
int main()
{
    int a, b, c;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "\nEnter the value of c: ";
    cin >> c;
    a = b + c;
    cout << "The sum a is: " << a;
    cout << "\nThe value of global a is:" << ::a;
    return 0;
}
