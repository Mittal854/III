#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string Course;
    int semester;
public:
    void getdata();
    void display();
    static int totalCount;
};

void Student::getdata() {
    cout<< "Enter the details"<< endl;
    cout<< "Roll No: ";
    cin>> rollNo;
    cout<< "Name: ";
    cin>> name;
    cout<< "Course: ";
    cin>> Course;
    cout<< "Semester: ";
    cin>> semester;
    cout<< endl;
    totalCount++;
}

void Student::display() {
    cout<< "Student Details"<< endl;
    cout<< "RollNo: "<< rollNo<< endl;
    cout<< "Name: "<< name<< endl;
    cout<< "Course: "<< Course<< endl;
    cout<< "Semester: "<< semester<< endl;
}

int Student::totalCount;

int main() {

    Student A;
    A.getdata();
    Student B;
    B.getdata();
    Student C;
    C.getdata();
    Student D;
    D.getdata();

    cout<< "Total number of objects: "<< D.totalCount<< endl;

    return 0;
}