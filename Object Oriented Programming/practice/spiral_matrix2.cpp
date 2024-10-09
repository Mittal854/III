#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int arr[r*c];
    for(int i=0;i<r*c;i++)
    {
        cin>>arr[i];
    }
    int arr2[r][c];
    int sr=0;
    int sc=0;
    int er=r-1;
    int ec=c-1;
    int tc=r*c;
    int c1=0;
    int j=0;
    while(c1<tc)
    {
        for(int i=sc;i<=ec;i++)
        {
            arr2[sr][i]=arr[j];
            j++;
            c1++;
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            arr2[i][ec]=arr[j];
            j++;
            c1++;
        }
        ec--;
        if(sc<=ec)
        {
            for(int i=ec;i>=sc;i--)
            {
                arr2[er][i]=arr[j];
                j++;
                c1++;
            }
            er--;
        }
        if(sr<=er)
        {
            for(int i=er;i>=sr;i--)
            {
                arr2[i][sc]=arr[j];
                j++;
                c1++;
            }
            sc++;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int k=0;k<c;k++)
        {
            cout<<arr2[i][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}