#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter an no. : ";
    cin>>n;
    int count=0;
    int arr[100];
    int a=n;
    while(n!=0)
    {
        arr[count]=n%10;
        n=n/10;
        count++;
    }
    int sum=0;
    int sum1=0;

    for(int i=0;i<count;i++)
    {
        sum+=pow(arr[i],count);
    }
    int arr1[100];
    for(int i=0;i<count;i++)
    {
        arr1[i]=arr[count-i-1];
    }
    if(sum==a)
    {
        for(int i=0;i<count;i++)
        {
            if(i%2!=0)
            {
                sum1+=arr1[i];
            }
        }   
    }
    else
    {
         for(int i=0;i<count;i++)
        {
            if(i%2==0)
            {
                sum1+=arr1[i];
            }
        }
    }
    cout<<"The sum is: "<<sum1<<endl;
    return 0;
}