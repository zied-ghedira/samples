/****************************************************************************/
/* In this Foo(int) doesn’t call Foo() to set i, but it calls Foo() to      */
/* create a temporary that’s destroyed. So, the variable i is left          */
/* uninitialized (it does not get initialized to 10), hence the output.     */
/* In C++, it is incorrect to call a constructor for the same object        */
/* from another constructor, which is possible in languages like Java/C#.   */
/* This program shows a usual programming mistake in C++ made by programmers*/ 
/* from Java/C# background.                                                 */
/****************************************************************************/
#include <iostream>

using namespace std;
class Foo { 
    public: 
        Foo(int) { Foo(); } //Wrong call, correct call: Foo(int) : Foo() {  }  
        Foo() { i = 10; } 
        int i; 
}; 

int main() {
    Foo f(20); 
    cout << f.i; 
}
