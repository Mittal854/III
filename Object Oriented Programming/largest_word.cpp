#include<iostream>
using namespace std;

int main(){
    string s;
    string final;
    getline(cin,s);
    int max=0;
    int index=0;
    for(int i=0;i<s.length();i++)
    {
        int len=0;
        if(s[i]==' ' || s[i]=='\0')
        {
            for(int j=index;j<i;j++)
            {
                len++;
            }
            if(len>max)
            {
                max=len;
            }
            index=i+1;
        }
    }
    index=0;
    for(int i=0;i<s.length();i++)
    {
        int len=0;
        if(s[i]==' ' || s[i]=='\0')
        {
            for(int j=index;j<i;j++)
            {
                len++;
            }
            if(max==len)
            {
                for(int j=index;j<i;j++)
                {
                    final+=s[j];
                }
            }   
            index=i+1;
        }
    }
    cout<<final;
    return 0;
}