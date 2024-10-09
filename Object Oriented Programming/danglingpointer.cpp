// #include <iostream>
// using namespace std;
// int main() {
//     int*ptr=new int;
//     cout<<reinterpret_cast<int*>(ptr)<<endl;
//     delete ptr;
//     delete ptr;
//     cout<<reinterpret_cast<int*>(ptr)<<endl;
// }
// #include<iostream>
// using namespace std;
 
// int* fun()
// {
//     int x=5;
//     return &x;
// }
// int main(){
//     int *p=fun();
//     cout<<*p<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;

int main(){
    int *ptr;
    int n1=5;
    ptr=&n1;
    cout<<reinterpret_cast<void*>(ptr)<<"\n";
    {
        int *ptr2;
        cout<<*ptr<<"\n";
        int n2=10,n3=20;
        ptr2=&n2;
        cout<<reinterpret_cast<void*>(ptr2)<<"\n";
    }
    // ptr=ptr2;
    cout<<reinterpret_cast<void*>(ptr)<<"\n";
    {
        int n4=30;
        ptr=&n4;
        cout<<reinterpret_cast<void*>(ptr)<<"\n";
    }
    return 0;
}