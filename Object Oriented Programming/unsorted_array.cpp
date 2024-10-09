#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr=new int[n]; 
    int *arr1=new int[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr1[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        arr1[num]++;
    }
    int mis=0;
    int twice=0;
    for(int i=1;i<=n;i++)
    {
        if(arr1[i]==0)
        {
            mis=i;
        }
        if(arr1[i]>1)
        {
            twice=i;       
        }
    }
    cout<<mis<<" "<<twice;
    delete[] arr;
    delete[] arr1;
    return 0;
}