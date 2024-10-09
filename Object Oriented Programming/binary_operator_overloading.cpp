#include<iostream>
using namespace std;
class complex
{
    private:
        int real;
        int img;
    public:
        void input();
        void display();
        complex operator+(complex);
        complex operator-(complex);
        complex operator*(complex);
};
void complex::input()
{
    cout<<"Enter real part: ";
    cin>>real;
    cout<<"Enter img part: ";
    cin>>img;
}
void complex::display()
{
    cout<<"\nComplex no is "<<real<<" + "<<img<<"i";
}
complex complex:: operator+(complex c)
{
    complex res;
    res.real=real+c.real;
    res.img=img+c.img;
    return res;

}
complex complex::operator-(complex c)
{
    complex res;
    res.real=real-c.real;
    res.img=img-c.img;
    return res;
}
complex complex::operator*(complex c)
{
    complex res;
    res.real=(real*c.real)-(img*c.img);
    res.img=(real*c.img)+(img*c.real);
    return res;
}
int main(){
    complex c1;
    complex c2;
    complex c3;
    complex c4;
    complex c5;
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    c3=c1+c2;
    c3.display();
    c4=c1-c2;
    c4.display();
    c5=c1*c2;
    c5.display();
    return 0;
}