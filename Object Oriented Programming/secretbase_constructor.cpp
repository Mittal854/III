#include<iostream>
#include<string>
using namespace std;
class SecretBase
{
    private:
        string location;
        int level;
    public:
        SecretBase()
        {
            location="Unknown";
            level=0;
            cout<<"Location is:"<<location<<" and security level is:"<<level<<endl;
        }
        SecretBase(string loc,int lev)
        {
            location=loc;
            level=lev;
            cout<<"Location is:"<<location<<" and security level is:"<<level<<endl;
        }
        ~SecretBase()
        {
            cout<<"Secret base destroyed"<<endl;
        }
};
int main(){
    SecretBase base;
    string s;
    int l;
    getline(cin,s);
    cin>>l;
    SecretBase base2(s,l);
    return 0;
}