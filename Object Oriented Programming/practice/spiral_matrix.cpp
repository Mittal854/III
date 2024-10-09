#include<iostream>
using namespace std;

int main(){
    int r,c0;
    cin>>r>>c0;
    int arr[r][c0];
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c0;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c0;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sr=0;
    int sc=0;
    int er=r-1;
    int ec=c0-1;
    int tc=r*c0;
    int c=0;
    while(c<tc)
    {
        for(int i=sc;i<=ec;i++)
        {
            cout<<arr[sr][i]<<" ";
            c++;
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            cout<<arr[i][ec]<<" ";
            c++;
        }
        ec--;
        if(sc<=ec)
        {
            for(int i=ec;i>=sc;i--)
            {
                cout<<arr[er][i]<<" ";
                c++;
            }
            er--;
        }
        if(sr<=er)
        {
            for(int i=er;i>=sr;i--)
            {
                cout<<arr[i][sc]<<" ";
                c++;
            }
            sc++;
        }
    }
    return 0;
}