#include<iostream>
using namespace std;

int main(){
    int marks[100];
    int count;
    cout << "Enter the number of students: ";
    cin>>count;
    cout<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<"Enter the marks of "<<i+1<<" student: ";
        cin>>marks[i];
    }
    cout<<endl;
    for(int i=0;i<count;i++)
    {  
        cout<<"The marks of "<<i+1<<"student is: "<<marks[i]<<endl;
    }
    int *p=marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
    return 0;
}