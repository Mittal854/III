#include <iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

float add(float a, float b) {
    return a+b;
}

int main() {
    int n1=10, n2=20;
    float a=4.5, b=6.89;
    int(*fun)(int, int);
    fun = &add;
    cout<< fun(n1,n2)<< endl;
    cout<< "Address of add: "<< fun<< endl;
    cout<< "Address of add: "<< reinterpret_cast<void *>(fun)<< endl;

    float (*fun1)(float, float);
    fun1 = &add;
    cout<< fun1(a,b)<< endl;
    cout<< "Address of add: "<< fun1<< endl;
    cout<< "Address of add: "<< reinterpret_cast<void *>(fun1)<< endl;

    //reinterpret_cast is a typecast operator to change the datatype of a pointer

    return 0;
}















