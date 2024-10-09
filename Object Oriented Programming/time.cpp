// #include<iostream>
// using namespace std;
// class time
// {
//     private:
//         int hh;
//         int mm;
//         int ss;
//     public:
//         void input();
//         void display();
//         time add(time x);
//         time diff(time x);
// };
// void time::input()
// {
//     cout<<"Enter time in hours, minutes and seconds: ";
//     cin>>hh>>mm>>ss;
// }
// void time::display()
// {
//     cout<<hh<<":"<<mm<<":"<<ss<<endl;
// }
// time time::add(time x)
// {
//     time temp;
//     temp.ss=ss+x.ss;
//     temp.mm=mm+x.mm+(temp.ss/60);
//     temp.ss=temp.ss%60;
//     temp.hh=hh+x.hh+(temp.mm/60);
//     temp.mm=temp.mm%60;
//     return temp;
// }
// time time::diff(time x)
// {
//     time temp;
//     temp.ss=ss-x.ss;
//     temp.mm=mm-x.mm+(temp.ss/60);
//     temp.ss=temp.ss%60;
//     temp.hh=hh-x.hh+(temp.mm/60);
//     temp.mm=temp.mm%60;
//     return temp;
// }

// int main(){
//     time t1,t2,t3,t4;
//     t1.input();
//     t2.input();
//     t3=t1.add(t2);
//     t4=t1.diff(t2);
//     cout<<"Time 1: ";
//     t1.display();
//     cout<<"Time 2: ";
//     t2.display();
//     cout<<"Sum: ";
//     t3.display();
//     cout<<"Difference: ";
//     t4.display();

//     return 0;
// }
#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void input();
    void display();
    Time add(const Time &x);
    Time diff(const Time &x);
};

void Time::input() {
    cout << "Enter time in hours, minutes, and seconds: ";
    cin >> hours >> minutes >> seconds;
    
    // Validate input (you can add more checks if needed)
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        cout << "Invalid input. Time values must be in the valid range." << endl;
        exit(1); // Exit the program with an error code
    }
}

void Time::display() {
    cout << hours << ":" << minutes << ":" <<  seconds << endl;
}

Time Time::add(const Time &x) {
    Time temp;
    temp.seconds = seconds + x.seconds;
    temp.minutes = minutes + x.minutes + (temp.seconds / 60);
    temp.seconds = temp.seconds % 60;
    temp.hours = hours + x.hours + (temp.minutes / 60);
    temp.minutes = temp.minutes % 60;
    return temp;
}

Time Time::diff(const Time &x) {
    Time temp;
    temp.seconds = seconds - x.seconds;
    if (temp.seconds < 0) {
        temp.seconds += 60;
        minutes--;
    }
    temp.minutes = minutes - x.minutes;
    if (temp.minutes < 0) {
        temp.minutes += 60;
        hours--;
    }
    temp.hours = hours - x.hours;
    return temp;
}

int main() {
    Time t1, t2, t3, t4;
    t1.input();
    t2.input();
    t3 = t1.add(t2);
    t4 = t1.diff(t2);
    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    cout << "Sum: ";
    t3.display();
    cout << "Difference: ";
    t4.display();
    
    return 0;
}
