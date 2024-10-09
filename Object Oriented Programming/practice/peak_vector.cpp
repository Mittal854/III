#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num;
        cin>>num;
        arr.push_back(num);
    }
    for(int i=1;i<arr.size()-1;i++)
    {
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}