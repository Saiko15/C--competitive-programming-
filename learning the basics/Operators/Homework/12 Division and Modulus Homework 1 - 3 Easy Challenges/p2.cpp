#include<iostream>
using namespace std;

int main () {
    double a, b;
    
    cin >> a >> b;
    double c = a / b;

    // cout<< c<<"\n";

    cout<< c - (int)c<<"\n"; // 8.04 - 8

    return 0;
}