#include<iostream>
using namespace std;

class fraction
{
private:
    int num;
    int den;

    int gcd(int a, int b) {
        return (b == 0) ? a : gcd(b, a % b);
    }

    void simplify() {
        int common = gcd(num, den);
        num /= common;
        den /= common;
    }

public:
    void input();
    void display();
    fraction operator+(fraction x);
    fraction operator-(fraction x);
    fraction operator*(fraction x);
    fraction operator/(fraction x);
    bool operator==(fraction x);
    
};

void fraction::input()
{
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;
    simplify(); // Simplify the fraction after input
}

void fraction::display()
{
    cout << "\nThe fraction is: " << num << "/" << den;
}

fraction fraction::operator+(fraction x)
{
    fraction res;
    res.num = (num * x.den) + (x.num * den);
    res.den = den * x.den;
    res.simplify(); // Simplify the result
    return res;
}

fraction fraction::operator-(fraction x)
{
    fraction res;
    res.num = (num * x.den) - (x.num * den);
    res.den = den * x.den;
    res.simplify(); // Simplify the result
    return res;
}

fraction fraction::operator*(fraction x)
{
    fraction res;
    res.num = num * x.num;
    res.den = den * x.den;
    res.simplify(); // Simplify the result
    return res;
}

fraction fraction::operator/(fraction x)
{
    fraction res;
    res.num = num * x.den;
    res.den = den * x.num;
    res.simplify(); // Simplify the result
    return res;
}

int main()
{
    fraction f1;
    fraction f2;
    fraction f3;
    fraction f4;
    fraction f5;
    fraction f6;
    f1.input();
    f2.input();
    f1.display();
    f2.display();
    f3 = f1 + f2;
    f4 = f1 - f2;
    f5 = f1 * f2;
    f6 = f1 / f2;
    f3.display();
    f4.display();
    f5.display();
    f6.display();
    return 0;
}
