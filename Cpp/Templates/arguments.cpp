/********************************************************************************************************************/
/* Type Conversions During Type Deduction                                                                           */
/* Note that automatic type conversions are limited during type deduction:                                          */
/*  When declaring call parameters by reference, even trivial conversions do not apply to type deduction.          */
/* Two arguments declared with the same template parameter T must match exactly.                                    */
/*  When declaring call parameters by value, only trivial conversions that decay are supported: Qualifications     */
/* with const or volatile are ignored, references convert to the referenced type, and raw                           */
/* arrays or functions convert to the corresponding pointer type. For two arguments declared with                   */
/* the same template parameter T the decayed types must match.                                                      */
/********************************************************************************************************************/

/* Compilation error: error: no matching function for call to 'max(int&, float&)' */
#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T>
T max(T a, T b) {
    cout << "option1" << endl;
    return (b < a) ? a : b;
}

int main(int argc, char **argv)
{
  int a{5};
  float b{7.0};
    
  cout << ::max(a,b) << endl; //Possible fix is: ::max<double>(a,b)
  
  return 0;
}
