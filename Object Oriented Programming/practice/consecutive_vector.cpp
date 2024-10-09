#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool consecutive(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr.at(i)+1!=arr.at(i+1))
        {
            return false;
        }
    }
    return true;
}
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
    //cout<<arr.empty();
    cout<<consecutive(arr);
    return 0;
}