#include<iostream>
using namespace std;

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; ++i){
        res *= i;
    }
    return res;
}


int main() {
    cout << factorial(3) << "\n";
    cout << factorial(4) << "\n";
    cout << factorial(5) << "\n";
    cout << factorial(6) << "\n";

}