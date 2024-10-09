#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int prec(char a)
{
    if (a == '/' || a == '*')
    {
        return 2;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    stack<char> temp;
    vector<char> res;
    string s;
    cin >> s;
    for (char i : s)
    {
        if (i != '+' && i != '-' && i != '*' && i != '/' && i != '(' && i != ')')
        {
            res.push_back(i);
        }
        else if (i == '(')
        {
            temp.push(i);
        }
        else if (i == ')')
        {
            while (!temp.empty() && temp.top() != '(')    
            {
                res.push_back(temp.top());
                temp.pop();
            }
            temp.pop();
        }
        else
        {
            while (!temp.empty() && prec(i) <= prec(temp.top()))
            {
                res.push_back(temp.top());
                temp.pop();
            }
            temp.push(i);
        }
    }
    while (!temp.empty())
    {
        res.push_back(temp.top());
        temp.pop();
    }
    for (char i : res)
    {
        cout << i;
    }
    return 0;
}