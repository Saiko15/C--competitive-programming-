#include<iostream>
using namespace std;

int main() {

    double a = 3.0 / 7.0;
    double b = 1 + 3.0 / 7.0 - 1;
    cout<<( a == b ); // 0 (false) not true because C++ has an approximate representation for real values

    a = 5, b = 4.9999;
    cout<<( a == b ); // sometimes 0 and somtimes 1 
                      // so don't use equality with doubles, you can use <, >.  

}