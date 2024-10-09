#include<iostream>
using namespace std;

typedef union money
{                                       //allows us to use only one variable at a time
    int dollar;
    char rubles;
    float ruppee;
}m;
int main(){
    m m1;
    m1.dollar=10;
    m1.ruppee=20.45;
    cout<<"The value of dollar is: "<<m1.dollar<<endl;              //garbage value
    cout<<"The value of ruppee is: "<<m1.ruppee<<endl;
    return 0;
}