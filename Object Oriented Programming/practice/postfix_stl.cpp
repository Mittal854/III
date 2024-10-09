#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<int> final;
    for(char i:s)
    {
        if(i>='0' && i<='9')
        {
            final.push(i-'0');
        }
        else{
            int num2=final.top();
            final.pop();
            int num1=final.top();
            final.pop();
            if(i=='+')
            {
                final.push(num1+num2);
            }
            else if(i=='-')
            {
                final.push(num1-num2);
            }
            else if(i=='*')
            {
                final.push(num1*num2);
            }
            else if(i=='/')
            {
                final.push(num1/num2);
            }
        }
    }
    int res=final.top();
    cout<<res;
    return 0;
}