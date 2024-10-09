#include <iostream>
// #include <string>
using namespace std;

int main()
{
    string s;
    string s2;
    getline(cin, s);
    int index = 0;
    for (int i = 0; i <= s.length(); i++)
    {

        if (s[i] == ' ' || s[i] == '\0')
        {
            for (int j = i - 1; j >= index; j--)
            {
                s2 += s[j];
            }
            s2 += s[i];
            index = i + 1;
        }
    }
    cout << endl;
    cout << s2;
    return 0;
}