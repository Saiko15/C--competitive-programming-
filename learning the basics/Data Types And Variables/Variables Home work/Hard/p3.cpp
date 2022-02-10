#include<iostream>
using namespace std;

int main() {
  
    // 5 should be 15 (5+4+3+2+1) so we can deduce that 6*5/2 = 30 / 2 = 15
    // 4 should be 10 (4+3+2+1) so we can deduce that 5*4/2 = 20 / 2 = 10
    // 3 should be 6 (3+2+1) so we can deduce that 4*3/2 = 12 / 2 = 6

    // so the equation can be (n+1) * n / 2

    int n;
    // cin>>n;
    n = 7;

    cout<<(n+1) * n / 2;

    return 0;
}