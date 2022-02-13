/**************************************************************************/
/* If we want to call the derived class destructor, we need to declare    */
/* the destructor virtual.                                                */
/**************************************************************************/

#include <iostream>

using namespace std;
class Base { 
    public: 
        Base() { cout<< "Base class constructor called"<<endl; }
        virtual ~Base() { cout<< "Base class destructor called"<<endl; } 
}; 

class Derived : public Base { 
    public: 
        Derived() { cout<< "Derived class constructor called "<<endl; } 
        ~Derived() { cout<< "Derived class destructor called "<<endl; } 
}; 

int main() 
{ 
    Base *bPtr = new Derived();
    delete bPtr;
}
