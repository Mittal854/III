#include<iostream>
using namespace std;

int fact1(int num)
{
    int f=1;
    int i=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
int factrec(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return num*factrec(num-1);
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<fact1(num)<<endl;
    cout<<"Factorial of "<<num<<" is "<<factrec(num)<<endl;
    return 0;
}