#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"Base Class Constructor is called:\n";
    }
    ~base()
    {
        cout<<"Base Class Destructor is called:\n";
    }
};

class derived_1:public base
{

public:
    derived_1()
    {
        cout<<"Derived_1 Class Constructor is called\n";
    }

    ~derived_1()
    {
        cout<<"Derived_1 Class Destructor is called\n";
    }
};
class derived_2:public base
{
public:
    derived_2()
    {
        cout<<"Derived_2 Class Constructor is called\n";
    }


    ~derived_2()
    {
        cout<<"Derived_2 Class Destructor is called\n";
    }
};

class mutual_child:public derived_1,public derived_2
{
public:
    mutual_child()
    {
        cout<<"mutual child class constructor is called\n\n\n";
    }
    ~mutual_child()
    {
        cout<<"mutual child class destructor is called\n";
    }

};

int main(void)
{
    mutual_child m1;
}
