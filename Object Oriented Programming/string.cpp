#include<iostream>
using namespace std;
class strings
{
    private:
        string s;
    public:
        void input();
        void display();
        strings operator+(strings x);
        void operator==(strings x);
};
void strings::input()
{
    cout<<"Enter the string: ";
    getline(cin,s);
}
void strings::display()
{
    cout<<"\nThe string is: "<<s;
    cout<<endl;
}
strings strings::operator+(strings x)
{
    strings res;
    res.s=res.s+s;
    res.s=res.s+' ';
    res.s=res.s+x.s;
    return res;
}
void strings::operator==(strings x)
{
    if(s==x.s)
    {
        cout<<"\nThe strings are equal";
        cout<<endl;
    }
    else{
        cout<<"\nThe strings are not equal";
        cout<<endl;
    }
}
int main(){
    strings a,b,c;
    a.input();
    b.input();
    c=a+b;
    a.display();
    b.display();
    c.display();
    a==b;
    return 0;
}