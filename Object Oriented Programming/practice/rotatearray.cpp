#include <iostream>
using namespace std;

void rotate(int arr[], int d, int n)
{
    int temp[n];
    int k = 0;

    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100];
    int n;
    int d;

    cin >> n;
    cin >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, d, n);
    printarray(arr, n);
    return 0;
}