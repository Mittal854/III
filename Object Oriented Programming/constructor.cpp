#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,width;
    int area,perimeter;
    public:
    void input();
    void calc();
    void display();
    rectangle();
    rectangle(int l,int w);
};
rectangle::rectangle()
{
    length=0;
    width=0;
    area=0;
    perimeter=0;
}
rectangle::rectangle(int l,int w)
{
    length=l;
    width=w;
}

int main(){
    
    return 0;
}