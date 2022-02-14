// ● Read integer N (<500), then print all prime numbers <= N
// ○ Output should be comma separated, as below
// ■ Don’t print comma after the last number
// ● Input ⇒ Output
// ○ 18 ⇒ 2,3,5,7,11,13,17
// ■ No comma after last number!
#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i=2 ; i < N; ++i){
        bool prime = true;
        for (int j = 2; j < i; ++j){
            if (i % j == 0 && i != j){
                prime = false;
                break;
            }
        }
        if (prime)
            cout << i << " ";
    }
}