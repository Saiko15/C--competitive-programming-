#include<iostream>
using namespace std;

int main() {
    int a=0, b = 1, N;
    cin >> N;
    cout << a <<" " << b <<" ";
    for (int cnt = 1; cnt <= N; ++cnt){
        int  c = a + b;
        a = b;
        b = c;
        cout << c <<" ";
    }
    return 0;
}