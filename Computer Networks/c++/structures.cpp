#include<iostream>
using namespace std;

typedef struct student                  //typedef is used to give a name to a structure
{
    int roll;
    char name[50];
    float marks;
}st;

int main(){
    st A;
    cout<<"Enter the roll number of student: "; 
    cin>>A.roll;
    cout<<"Enter the name of student: ";
    cin>>A.name;
    cout<<"Enter the marks of student: ";
    cin>>A.marks;
    cout<<endl;
    cout<<"The roll number of student is: "<<A.roll<<endl;
    cout<<"The name of student is: "<<A.name<<endl;
    cout<<"The marks of student is: "<<A.marks<<endl;

    return 0;
}