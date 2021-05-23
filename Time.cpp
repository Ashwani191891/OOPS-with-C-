#include <iostream>
using namespace std;
 
class Time
{
private:
    int hours;
    int minutes;
 
public:
    void Get_Time();
    friend void Add_Time(Time ,Time);
};
 
void Time::Get_Time()
{
    cout << "\tEnter Time" << endl;
    cout << "Hours : ";    
    cin>>hours;
    cout << "Minutes : ";  
    cin>>minutes;
}
 
void Add_Time(Time tm1,Time tm2)
{
    int min = tm1.minutes+tm2.minutes;
    int hrs = tm1.hours+tm2.hours + (min/60); 
    min = min%60;
    cout << "Time after add: ";
    cout << hrs << ":" << min << endl;
}
 
int main()
{
    Time tm1,tm2; 
    tm1.Get_Time();
    tm2.Get_Time();
    Add_Time (tm1, tm2);
    return 0;
}