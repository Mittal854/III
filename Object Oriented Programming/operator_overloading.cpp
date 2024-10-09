#include<iostream>
using namespace std;
class time
{
    private:
        int hh,mm,ss;
    public:
        void input();
        void display();
        void operator++();
        void operator--();
};
void time::input()
{
    cout<<"Enter time <HH:MM:SS>";
    cin>>hh>>mm>>ss;
}
void time::display()
{
    cout<<"\nHH : MM : SS\n";
    cout<<hh<<" : "<<mm<<" : "<<ss;
}
void time::operator++()
{
    ss++;
    if(ss>=60)
    {
        ss=ss-60;
        mm++;
    }
    if(mm>=60)
    {
        mm=mm-60;
        hh++;
    }
}
void time::operator--()
{
    ss--;
    if(ss<=0)
    {
        ss=ss+60;
        mm--;
    }
    if(mm<=0)
    {
        mm=mm+60;
        hh--;
    }
}
int main(){
    time t1;
    t1.input();
    t1.display();
    ++t1;
    t1.display();
    --t1;
    t1.display();
    return 0;
}