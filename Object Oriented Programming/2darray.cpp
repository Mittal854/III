#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[5][4];
    for (int j = 0; j < 5; j++)
    {
        cin >> arr[j][0];
    }
    cout << endl;
    for (int j = 0; j < 5; j++)
    {
        int count = 0;
        int no = arr[j][0];
        while (no != 0)
        {
            no = no / 10;
            count++;
        }
        arr[j][1] = count;
    }
    for (int j = 0; j < 5; j++)
    {
        int sum = 0;
        int no = arr[j][0];
        while (no != 0)
        {
            int rem = no % 10;
            sum = sum + rem;
            no = no / 10;
        }
        arr[j][2] = sum;
    }
    for (int j = 0; j < 5; j++)
    {
        int rev = 0;
        int no = arr[j][0];
        while (no != 0)
        {
            int rem = no % 10;
            rev = rev * 10 + rem;
            no = no / 10;
        }
        arr[j][3] = rev;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}