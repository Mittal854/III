#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *b = &a;
    int **c = &b;
    cout << "Address of a= " << &a << endl; // & Address
    cout << "Address of a= " << b << endl;
    cout << "Value at b= " << *b << endl; // * Dereference
    cout << "Value at b= " << a << endl;
    cout << "Address of b= " << &b << endl;
    cout << "Address of b= " << c << endl;
    cout << "Value at c= " << *c << endl;
    cout << "value at adress value_at(value_at(c))= " << **c << endl; // ** Double pointer
    return 0;
}