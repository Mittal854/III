#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void stringnum(vector<string> arr)
{
    for (string i : arr)
    {
        for (char el : i)
        {
            if (isdigit(el))
            {
                cout << i<<" ";
                break;
            }
        }
    }
}
int main()
{
    vector<string> arr;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    stringnum(arr);
    return 0;
}