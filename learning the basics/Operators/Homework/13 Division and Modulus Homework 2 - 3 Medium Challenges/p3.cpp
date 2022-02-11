#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int b = a % 10000;
    int c = b / 1000;

    cout<<c<<"\n";
}