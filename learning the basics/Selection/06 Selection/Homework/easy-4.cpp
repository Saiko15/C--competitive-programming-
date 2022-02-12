#include<iostream>
using namespace std;

int main() {
    int x, n1, n2, n3, n4, n5;
    cin >> x >> n1 >> n2 >> n3 >> n4 >> n5;

    int a = 0;
    if (n1 < x)
        a += 1;
    if (n2 < x)
        a += 1;
    if (n3 < x)
        a += 1;
    if (n4 < x)
        a += 1;
    if (n5 < x)
        a += 1;
    
    cout << a << 5-a;
}