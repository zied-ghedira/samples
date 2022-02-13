/******************************************************************************/
/* In this program, default argument is provided for the first argument.      */
/* It is incorrect, so the compiler issues an error. Default arguments        */
/* should be provided for the arguments from right to left.                   */
/******************************************************************************/ 
#include <iostream>

using namespace std;

void foo(int a = 10, int b) 
{ 
  cout << “value of a is:” << a << “and b is:” << b <<endl; 
} 

int main() 
{ 
  foo(5, 10); 
} 
