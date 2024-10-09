#include<iostream>
using namespace std;
struct date{
    int dd;
    string month;
    int yy;
};
void input(struct date *d1)
{
    cout<<"enter date: ";
    cin>>d1->dd>>d1->month>>d1->yy;

}
void display(struct date d1)
{
    cout<<"Date: "<<d1.dd<<" "<<d1.month<<" "<<d1.yy;
}
int main(){
    struct date A;
    input(&A);
    display(A);
    return 0;
}