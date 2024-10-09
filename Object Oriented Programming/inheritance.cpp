#include <iostream>
using namespace std;

class A {
protected:
    int num;
public:
    A() {
    }

    A(int n) {
        num = n;
    }    
};

class B: virtual public A {

};

class C: virtual public A {

};

class D: public B, public C {
public:
    D() {
    }
    D(int n):A(n) {}
    void getnum() {
        cout<< num<< endl;
    }
};


int main() {
    D d(12);
    d.getnum();

    return 0;
}