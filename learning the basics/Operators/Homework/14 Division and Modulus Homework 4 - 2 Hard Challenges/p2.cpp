#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int m = a/30;
    int y = m/12;

    //y = 

    cout<< y<<" " << m - (y * 12) <<" "<< a - (m * 30) <<"\n";
}