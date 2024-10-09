#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> bracket;
    string s;
    bool balance = false;
    getline(cin, s);
    for (char i : s)
    {
        if (i == '(' || i == '{' || i == '[')
        {
            bracket.push(i);
        }
        else if (i == ')' || i == '}' || i == ']')
        {
            char b = bracket.top();
            if (bracket.empty())
            {
                balance = false;
                break;
            }
            else if ((i == ')' && b != '(') || (i == '}' && b != '{') || (i == ']' && b != '['))
            {
                balance = false;
                break;
            }
            else{
                balance=true;
            }
            bracket.pop();
        }
    }
    if(!bracket.empty())
    {
        balance=false;
    }
    if (balance)
    {
        cout << "Balanced bracket";
    }
    else
    {
        cout << "UnBalanced brackets";
    }
}