#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<int> final1;
    reverse(s.begin(),s.end());
    for(char i:s)
    {
        if(i>='0' && i<='9')
        {
            final1.push(i-'0');
        }
        else{
            int num1=final1.top();
            final1.pop();
            int num2=final1.top();
            final1.pop();
            if(i=='+')
            {
                final1.push(num1+num2);
            }
            else if(i=='-')
            {
                final1.push(num1-num2);
            }
            else if(i=='*')
            {
                final1.push(num1*num2);
            }
            else if(i=='/')
            {
                final1.push(num1/num2);
            }
        }
    }
    int res=final1.top();
    cout<<res;
    return 0;
}