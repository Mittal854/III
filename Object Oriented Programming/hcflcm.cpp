#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    int max=num1>num2?num1:num2;
    int min=num1<num2?num1:num2;
    int i=1;
    int hcf=1;
    while(i<=min)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
        i++;
    }
    int lcm=(num1*num2)/hcf;
    cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<hcf<<endl;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm<<endl;
    return 0;
}