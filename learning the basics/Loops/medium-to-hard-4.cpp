// ● Read an integer N (< 500) and print YES if it is prime, otherwise NO
// ○ A prime number is greater than 1 AND cannot be formed by multiplying two smaller numbers.
// ■ In other words, number%whatever != 0
// ■ The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23, and 29.
// ● Input ⇒ Output
// ○ 13 ⇒ YES (only 1 * 13)
// ○ 12 ⇒ NO (E.g. 12 = 2 *6, so 12 can be divided by 2 or 6)
#include<iostream>
using namespace std;

int main() {
    int N, num=0;
    cin >> N;
    bool prime = true;

    for (int i = 2; i < N; ++i){
        if (N % i == 0){
            // cout <<"NO"<<"\n";
            prime = false;
            break;   
        }
    }
    if (prime)
        cout <<"YES";
    else
        cout <<"NO";
    

    return 0;
    
}