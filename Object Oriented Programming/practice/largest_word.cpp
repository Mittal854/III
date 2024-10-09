#include<iostream>
using namespace std;

int main(){
    string s;
    string s1;
    getline(cin,s);
    cout<<s;
    int max=0;
    int index=0;
    for (int i=0;i<=s.length();i++)
    {   int count=0;
        if(s[i]==' ' || s[i]=='\0')
        {
            for(int j=index;j<i;j++)
            {
                count++;
            }
            if(count>max)
            {
                max=count;
            }
            index=i+1;
        }
    }
    int index1=0;
    for(int i=0;i<=s.length();i++)
    {
        int len=0;
        if(s[i]==' ' || s[i]=='\0')
        {
            for(int j=index1;j<i;j++)
            {
                len++;
            }
            if(len==max)
            {
                for(int k=index1;k<i;k++)
                {
                    s1+=s[k];
                }
            }
            index1=i+1;
        }
    }
    cout<<endl;
    cout<<s1;
    return 0;
}