// #include <iostream>
// using namespace std;
// class complex
// {
// private:
//     int real;
//     int img;

// public:
//     void input()
//     {
//         cin >> real >> img;
//     }
//     void display()
//     {
//         cout << real << "+" << img << "i" << endl;
//     }
//     complex Add(complex c)
//     {
//         complex temp;
//         temp.real = real + c.real;
//         temp.img = img + c.img;
//         return temp;
//     }
//     complex Multiply(complex c)
//     {
//         complex temp;
//         temp.real = real * c.real - img * c.img;
//         temp.img = real * c.img + img * c.real;
//         return temp;
//     }
//     complex Divide(complex c)
//     {
//         complex temp;
//         temp.real = (real * c.real + img * c.img) / (c.real * c.real + c.img * c.img);
//         temp.img = (img * c.real - real * c.img) / (c.real * c.real + c.img * c.img);
//         return temp;
//     }
// };
// int main()
// {
//     int real, img;
//     cin >> real >> img;
//     complex c1, c2;
//     c1.input();
//     c2.input();
//     c1.display();
//     c2.display();
//     complex c3 = c1.Add(c2);
//     c3.display();
//     complex c4 = c1.Multiply(c2);
//     c4.display();
//     complex c5 = c1.Divide(c2);
//     c5.display();
//     return 0;
// }
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float img;
public:
    Complex() {
    }
    Complex(float a, float b) {
        real = a;
        img = b;
    }
    ~Complex() {}
    void input();
    void display();
    Complex add(Complex a2);
    Complex multiply(Complex a2);
    Complex divide(Complex a2);
};

Complex Complex::add(Complex a2) {
    Complex a;
    a.real = this->real+a2.real;
    a.img = this->img + a2.img;

    return a;
}

Complex Complex::multiply(Complex a2) {
    Complex a;
    a.real = this->real*a2.real - this->img*a2.img;
    a.img = this->real*a2.img + a2.real*this->img;
    return a;
}



Complex Complex::divide(Complex a2) {
    Complex a, b;
    Complex temp = a2;
    temp.img = -temp.img;
    a = this->multiply(temp);
    b = a2.multiply(temp);
    
    a.real = a.real/b.real;
    a.img = a.img/b.real;
    return a;
}

void Complex::input() {
    cout<< "Enter the real part: ";
    cin>> real;
    cout<< "Enter the imaginary part: ";
    cin>> img;
}

void Complex:: display() {
    cout<< "Number: "<< real<< "+"<< img<<"i"<< endl;
}

int main() {
    Complex c1;
    Complex c2;
    c1.input();
    c2.input();
    // c1.display();
    // c2.display();

    // Complex c3 = c1.add(c2);
    // c3.display();

    // Complex c4 = c1.multiply(c2);
    // c4.display();

    Complex c4 = c1.divide(c2);
    c4.display();

    return 0;
}