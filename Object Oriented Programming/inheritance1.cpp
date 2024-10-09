#include<iostream>
using namespace std;

class customer{
    private:
        int custid;
        string name;
        string city;
        string contact;
    public:
        void getcust();
        void showcust();
};

class savingAC: public customer{
    private:
        int accno;
        float amount;
    public:
        void deposit();
        void withdraw();
};
class loanAC: public customer{
    private:
        int accno;
        float amount;
        float emi;
    public:
        void emideposit();
        void loansanc();
};


int main(){
    
    return 0;
}