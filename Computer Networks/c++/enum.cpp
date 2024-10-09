#include <iostream>
using namespace std;

int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    }; // enum is used to assign names to the integer values
    meal m1 = breakfast;
    meal m2 = lunch;
    cout << "The value of m1 is: " << m1 << endl;
    cout << "The value of m2 is: " << m2 << endl;
    return 0;
}