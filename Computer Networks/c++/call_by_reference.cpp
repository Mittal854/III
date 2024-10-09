#include<iostream>
using namespace std;
void swap(int *a,int *b)            //call by reference using pointer
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swap1(int &a,int &b)          //call by refernce using c++ reference variables
{
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=4,y=5;
    cout<<"the value of x: "<<x<<"\nthe value of y: "<<y<<endl;
    swap(&x,&y);
    cout<<"The value of x: "<<x<<"\nThe value of y: "<<y<<endl;
    swap1(x,y);
    cout<<"The value of x: "<<x<<"\nThe value of y: "<<y<<endl;
    return 0;
}