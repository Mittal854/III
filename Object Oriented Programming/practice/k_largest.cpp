#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int k;
    int n;
    int arr1[100];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }   
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int j=0;
    for(int i=0;i<n;i++)
    {   int flag=1;
        for(int t=0;t<j;t++)
        {
            if(arr[i]==arr1[t])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            arr1[j]=arr[i];
            j++;
        }
    }
    cout<<endl;
    cout<<arr1[j-k];
    cout<<endl;
    for(int i=0;i<j;i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}