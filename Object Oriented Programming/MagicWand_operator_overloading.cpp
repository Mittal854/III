#include<iostream>
using namespace std;
class MagicWand{
    private:
        string core;
        int length;
    public:
        void input();
        void display();
        MagicWand operator+(MagicWand x);
};
void MagicWand::input()
{   
    cout<<"Core Material:";
    getline(cin,core);
    cout<<"and length is: ";
    cin>>length;
    cin.ignore();
}
void MagicWand::display()
{
    cout<<"A combined wand with core material "<<core<<" and length "<<length<<" inches";
}
MagicWand MagicWand::operator+(MagicWand x)
{
    MagicWand res;
    res.length=length+x.length;
    if(length>x.length)
    {
        res.core=core;
    }
    else{
        res.core=x.core;
    }
    return res;
}
int main(){
    MagicWand w1,w2,w3;
    w1.input();
    w2.input();
    w3=w1+w2;
    w3.display();
    return 0;
}