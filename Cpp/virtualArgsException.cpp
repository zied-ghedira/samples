/************************************************************************/
/* This program output is: Derived class foo called with = 10.          */
/* Member is resolved at compilation time                               */
/************************************************************************/

#include <iostream>

using namespace std;

class Base 
{ 
public: 
    virtual void foo(int i = 10) 
    { 
        cout<<"Base class foo called with"<<i; 
    } 
}; 

class Derived : public Base 
{ 
public: 
    virtual void foo(int i = 5) 
    { 
        cout<<"Derived class foo called with = "<<i; 
    } 
}; 

int main() 
{ 
    Base * bPtr = new Derived(); 
    bPtr->foo(); 
}
