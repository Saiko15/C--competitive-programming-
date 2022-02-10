#include<iostream>
using namespace std;

int main() {
    int x = 6;
    int y = -x; // -6
    int z = -y; // 6

    bool male = true;
    bool female = !male; // not male (false)

    cout<< !0 << !1 ; // not zere is 1, not one is 0

    // ++a prefix increment then assign
    // a++ postfix assign then incerement

    int a =10;
    // int b = a++; // b is still 10 , a is 11
    int b = ++a; // b is still 11 , a will be 11 in the memory

    cout<<"\n"<< a <<b;
    cout<<"\n"<< a + b; // 22
    cout<<"\n"<< ++a + ++b; //24
    cout<<"\n"<< ++a + b++; //25 // b here is still 12 but next b will b 13
    cout<<"\n"<< a + b; // 26
    cout<<"\n"<< a++ + ++b; //27    
    cout<<"\n"<< a + b; // 28 (a=14, b=14)
    cout<<"\n"<< a++ + ++a; //30 because ++a go for both a (a=15) ==> wrong
                            // the right is ==> a prints as 14 then increase as 15, then ++a will be 16
    cout<<"\n"<< a + a; // 32 because the previous a++ go for both a (a=16) ==> wrong
                        // the right is ==> a remains as 16 from the previous output

    int c=5, d= --c, h= c--; // prefix decrement and postix decrement
    cout<<"\n"<<c << d << h<<"\n"; // 3 4 4
    cout<<"\n"<<c << d << h<<"\n";  // also 3 4 4
    
    // Assingnment Operator
    // int x (LHS left hand side) = y * 2 (RHS right hand side)  = calles assignment operator
    // RHS is expression (y*2) it's evaluated then assigned to LFS
    // RHS must be an integer. if string would be CE (Compiler Error)
    // ******** 
    // Comma Operator
    // evaluates from left to right, return the last thing after the-comma result
    cout<<(10, x=1, b=2*x, z=x+b, 40); //40
 


}