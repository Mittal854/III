#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length()-1;i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]>s[j])
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    } 
    cout<<s;  
    return 0;
}