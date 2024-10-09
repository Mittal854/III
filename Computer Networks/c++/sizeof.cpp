#include<iostream>
using namespace std;
int main()
{
    float a=5.5f;
    long double b=5.5l;
    cout<<"The size of 5.5 is: "<<sizeof(5.5)<<endl;
    cout<<"The size of 5.5f is: "<<sizeof(5.5f)<<endl;
    cout<<"The size of 5.5F is: "<<sizeof(5.5F)<<endl;
    cout<<"The size of 5.5l is: "<<sizeof(5.5l)<<endl;
    cout<<"The size of 5.5L is: "<<sizeof(5.5L)<<endl;
    return 0;
}