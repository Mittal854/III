#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of rows: ";
    cin>>n;
    int **arr=new int*[n];
    int a;
    int arr1[100];
    int j=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the no of cols in "<<i+1<<" row: ";
        cin>>a;
        arr[i]=new int[a];
        arr1[j]=a;
        j++;
        for(int j=0;j<a;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr1[i];j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}