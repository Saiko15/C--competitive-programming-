#include<iostream>
using namespace std;

int main() {
    int num;
    cin >>num;
    if (num % 2 == 0)
        cout << num % 10 << "\n";
    else
    {
        if (num < 1000)
            cout << num % 100;
        else if (num > 1000 && num < 1000000)
            cout << num % 10000 << "\n";
        else
            cout << num * -1;
    }
    return 0;
}