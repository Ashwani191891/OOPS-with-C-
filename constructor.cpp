#include<iostream>
using namespace std;

class Base
{
private:
    int x;
    string y; 
public:
    Base(){// Default constructor
        cout<<"What is your name : ";
        cin>>y;
        cout<<"Hi "<<y<<" welcome to the class Base!\n"<<endl;
    };
    Base(int a){// Parameterized constructor
        x = a;
        cout<<"The private x has stored "<<x<<" value in it\n"<<endl;
    };
    Base(string b){// Overloading of constructor
        y = b;
        cout<<"y has stored "<<y<<" in it\n"<<endl;
    };
    Base(Base &obj){// Copy constructor
        cout<<"Copy constructor called\n"<<endl;
        x = obj.x;
        cout<<"The private x has stored "<<x<<" value in it\n"<<endl;

    }
};


int main()
{
    Base cons1;
    Base cons3("Hi I'm Ashwani");
    Base cons2(57);
    Base cons4(cons2);

return 0;
}