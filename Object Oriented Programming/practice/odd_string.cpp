#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length()-1;i++)
    {   if(s[i]!='-' && s[i+1]!='-')
    {
        int num1=s[i]-'0';
        int num2=s[i+1]-'0';
        if(num1%2!=0 && num2%2!=0)
        {
            s.insert(i+1,"-");
        }
    }
    }
    cout<<s;
    return 0;
}