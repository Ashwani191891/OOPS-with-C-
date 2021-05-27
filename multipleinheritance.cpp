#include<iostream>
using namespace std;

class Base1
{
public:
    int a = 5;
};

class Base2
{
public:
    int b = 19;
};

class Base3
{
public:
    int c = 15;
};

class Derived1 : public Base1 , public Base2 , public Base3
{
public:
    void show(){
        cout<<"\nVariable in Base1 is : "<<a;
        cout<<"\nVariable in Base2 is : "<<b;
        cout<<"\nVariable in Base3 is : "<<c;
    }
    
};

int main()
{
    Derived1 obj;
    obj.show();
    return 0;
}