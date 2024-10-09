#include<iostream>
using namespace std;

int main(){
    int n;
    int *ptr=&n;
    double a;
    double *pt=&a;
    int arr[2]={1,2};
    cin>>n;
    cin>>a;
    cout<<"Size of n "<<sizeof(n);
    cout<<"\nSize of a "<<sizeof(a);
    cout<<"\nSize of ptr "<<sizeof(ptr);
    cout<<"\nSize of pt "<<sizeof(pt);
    // ptr=ptr+1;
    // cout<<"\n"<<*ptr;
    //cout<<0[arr];
    return 0;
}