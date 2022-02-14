// ● Read three numbers N, A, B. Print the summation of the numbers between 1
// and N whose sum of digits is between A and B.
// ● Input / Output
// ○ 20 2 5 ⇒ 84
// ■ Numbers whose sums of digits are between 2 and 5, are: 2,3,4,5,11,12,13,14, 20.
// ● E.g. digits sum of 13 is 4 : which is between (2, 5)
// ○ 10 1 2 ⇒ 13
// ○ 100 4 16 ⇒ 4554
#include<iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B; // 10 1 2
    int sum = 0;
    for (int i =1; i <= N; ++i){
        for (int j=A; j<=B; ++j){
            if (i/10 + i%10 == j)
                sum += i;
        }
    }
    cout << sum<<"\n";
}