// #include<iostream>
// using namespace std;

// int main(){
//     ineligible:
//         cout<<"You are ineligible to vote"<<endl;
//     cout<<"Enter your age: ";
//     int age;
//     cin>>age;
//     if(age<18){
//         goto ineligible;
//     }
//     else{
//         cout<<"You are eligible to vote"<<endl;
//     }
//     return 0;
// }
#include <iostream>
int main() {
    int day = 2;

    switch (day) {
        case 1:
            std::cout << "Sunday";
            break;
        case 2:
            std::cout << "Monday";
        case 3:
            std::cout << "Tuesday";
            break;
        default:
            std::cout << "Other day";
            break;
    }
    return 0;
}
