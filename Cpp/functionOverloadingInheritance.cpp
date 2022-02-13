/*************************************************************************/
/* Function overloading doesn't work with inheritance                    */
/* https://www.geeksforgeeks.org/does-overloading-work-with-inheritance  */
/*************************************************************************/
#include <iostream>

using namespace std;

class Test {
    public:
        void foo() { 
            cout << "inside void foo()" << endl;
        }
};

class TestDri : public Test {        
    public: 
        void foo(int i) {
            cout << "inside void foo(int a)" << endl;
        }
};

void foo(int a, int b=2)
{
    cout << "values are: a == " << a << " b == " << b << endl;
}

int main()
{
    TestDri testDri;
    testDri.foo();
}
