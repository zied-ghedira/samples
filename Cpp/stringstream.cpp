/********************************************************************/
/* Input is a string contaning 3 numbers seperated by space         */
/********************************************************************/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
    string s,word;
    int a{0}, b{0}, c{0}, sum{0};
    getline(cin, s);
    stringstream ssin(s);

    ssin >> a >> b >>c;
    sum = a + b + c;

    cout << sum;
    
    return 0;
}
