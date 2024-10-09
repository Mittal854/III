#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int e=n-1;
    while(i<e)
    {
        swap(arr[i++],arr[e--]);
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}