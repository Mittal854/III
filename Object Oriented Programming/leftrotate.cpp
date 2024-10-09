#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int arr2[100];
    int n;
    int a;
    cin >> n >> a;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = a; i < n; i++)
    {
        arr2[i - a] = arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        arr2[i + n - a] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}