#include<iostream>
using namespace std;

int factorial(int n) {
    cout << "this called factorial of " <<n<<"\n";
    if (n == 1)
        return 1; // return 1 to stop recursion at n == 1;
        // cout << "\n"; // only for test to know the line after return will execute or not
    // else // doesn't matter because if n == 1 will return 1 and stop at this line.
        return factorial(n - 1) * n;
}

int main() {
    cout << factorial(6);
}