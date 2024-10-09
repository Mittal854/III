#include<iostream>
using namespace std;
int main()
{   //Reference variable
    int a=5;
    int &b=a;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    //Typecasting
    float c=5.5;
    cout<<"c="<<c<<endl;
    cout<<"(int)c="<<(int)c<<endl;
    cout<<"int(c)="<<int(c)<<endl;
    cout<<"a+c="<<a+c<<endl;
    cout<<"a+(int)c="<<a+(int)c<<endl;
    cout<<"a+int(c)="<<a+int(c)<<endl;
    return 0;
    
}