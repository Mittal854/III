#include<iostream>
using namespace std;
class Employee
{
    private:
    int EmpId;
    string name;
    string design;
    float basics;
    float hra;
    float da;
    float ta;
    float pf;
    float gross;
    float net;
    public:
    void input();
    void calculate();
    void display()const;
    Employee()
    {
        EmpId=1001;
        name="Admin";
        basics=NULL;
        hra=NULL;
        da=NULL;
        ta=NULL;
        pf=NULL;
        gross=NULL;
        net=250000;
    }
};
void Employee::input()
{
    cout<<"Enter the Employee ID: ";
    cin>>EmpId;
    cout<<"Enter the Employee Name: ";
    cin>>name;
    cout<<"Enter the Employee Designation: ";
    cin>>design;
    cout<<"Enter the Basic Salary: ";
    cin>>basics;
}
void Employee::calculate()
{
    hra=basics*0.2;
    da=basics*0.2;
    ta=basics*0.1;
    pf=basics*12.5/100;
    gross=basics+hra+da+ta;
    net=gross-pf;
}
void Employee::display()const
{
    cout<<"Employee ID: "<<EmpId<<endl;
    cout<<"Employee Name: "<<name<<endl;
    cout<<"Employee Designation: "<<design<<endl;
    cout<<"Basic Salary: "<<basics<<endl;
    cout<<"HRA: "<<hra<<endl;
    cout<<"DA: "<<da<<endl;
    cout<<"TA: "<<ta<<endl;
    cout<<"PF: "<<pf<<endl;
    cout<<"Gross Salary: "<<gross<<endl;
    cout<<"Net Salary: "<<net<<endl;

}
int main(){
    Employee A;
    const Employee *Admin=new Employee();
    A.input();
    A.calculate();
    A.display();
    //Admin->display();

    return 0;
}