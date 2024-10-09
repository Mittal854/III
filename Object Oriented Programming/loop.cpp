// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int decimalNumber;

//     cout << "Enter a decimal number: ";
//     cin >> decimalNumber;

//     string binary = "";
//     int temp = decimalNumber;
//     while (temp > 0)
//     {
//         binary = to_string(temp % 2) + binary;
//         temp /= 2;
//     }

//     string octal = "";
//     temp = decimalNumber;
//     while (temp > 0)
//     {
//         octal = to_string(temp % 8) + octal;
//         temp /= 8;
//     }
//     string hexadecimal = "";
//     temp = decimalNumber;
//     while (temp > 0)
//     {
//         int remainder = temp % 16;
//         if (remainder < 10)
//         {
//             hexadecimal = to_string(remainder) + hexadecimal;
//         }
//         else
//         {
//             hexadecimal = char('A' + remainder - 10) + hexadecimal;
//         }
//         temp /= 16;
//     }
//     cout << "Binary: " << binary << endl;
//     cout << "Octal: " << octal << endl;
//     cout << "Hexadecimal: " << hexadecimal << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int decimalToBinary(int decimalNumber)
{
    int binary = 0;
    int base = 1;

    while (decimalNumber > 0)
    {
        int remainder = decimalNumber % 2;
        binary = binary + remainder * base;
        decimalNumber = decimalNumber / 2;
        base = base * 10;
    }

    return binary;
}

int decimalToOctal(int decimalNumber)
{
    int octal = 0;
    int base = 1;

    while (decimalNumber > 0)
    {
        int remainder = decimalNumber % 8;
        octal = octal + remainder * base;
        decimalNumber = decimalNumber / 8;
        base = base * 10;
    }

    return octal;
}

string decimalToHexadecimal(int decimalNumber)
{
    string hexadecimal = "";

    while (decimalNumber > 0)
    {
        int remainder = decimalNumber % 16;
        if (remainder < 10)
        {
            hexadecimal = char('0' + remainder) + hexadecimal;
        }
        else
        {
            hexadecimal = char('A' + remainder - 10) + hexadecimal;
        }
        decimalNumber = decimalNumber / 16;
    }

    return hexadecimal;
}

int main()
{
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << "Binary: " << decimalToBinary(decimalNumber) << endl;
    cout << "Octal: " << decimalToOctal(decimalNumber) << endl;
    cout << "Hexadecimal: " << decimalToHexadecimal(decimalNumber) << endl;

    return 0;
}
