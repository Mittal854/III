#include <iostream>
#include <stdlib.h>
#include<stdio.h>
int compare(const void *x, const void *y)
{
    int a = *(int *)x;
    int b = *(int *)y;
    return a - b;
}
using namespace std;

int main()
{
    
    // int n;
    // cin >> n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // qsort(arr, n, sizeof(int), compare);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}