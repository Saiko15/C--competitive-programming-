#include<iostream>
using namespace std;

int main() {
    int a;
    cin>>a;


    bool i_e = (a % 2 == 0);

    double b= a/2.0; // should be 2.0 not only 2
    bool i_e2 = (((b - (int)b)*2)==0) ;

    int c = a % 10;
    bool i_e3 = c == 0 || c == 2 || c == 4 || c == 6 || c == 8;


    cout<<i_e<<i_e2<<i_e3<<"\n";
}