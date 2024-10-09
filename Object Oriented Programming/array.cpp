#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int arr1[100];
    int n;
    int k=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int sum=arr[i];
        
        arr1[k]=i;
        k++;
        for (int j=i+1;j<n;j++)
        {
            if(sum<7)
            {
                sum=sum+arr[j];
                arr1[k]=j;
                k++;
            }
            else if(sum==7)
            {
                break;
            }
            else if(sum>7)
            {
                k=0;
                break;
            }

        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}