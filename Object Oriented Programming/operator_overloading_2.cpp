#include<iostream>
using namespace std;
class distance1
{
    private:
        int km;
        int m;
        int cm;
    public:
        void input();
        void display();
        void operator++();
        void operator--();
};
void distance1::input()
{
    cout<<"Enter distance <km m cm>";
    cin>>km>>m>>cm;
}
void distance1::display()
{
    cout<<"\nKM M CM\n";
    cout<<km<<" "<<m<<" "<<cm;
}
void distance1::operator++()
{
    cm++;
    if(cm>=100)
    {
        cm=cm-100;
        m++;
    }
    if(m>=1000)
    {
        m=m-1000;
        km++;
    }
}
void distance1::operator--()
{
    cm--;
    if(cm<=0)
    {
        cm=cm+100;
        m--;
    }
    if(m<=0)
    {
        m=m+1000;
        km--;
    }
}
int main(){
    distance1 d1;
    d1.input();
    d1.display();
    ++d1;
    d1.display();
    --d1;
    d1.display();

    return 0;
}