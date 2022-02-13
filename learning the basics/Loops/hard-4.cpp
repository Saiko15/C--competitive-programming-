// ● Read integer T for number of test cases.
// ● For each test case read integer N. Then read N integers a, b, c
// ● Output: Compute the sum of the following expression:
// ○ a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……
// ■ That is the k-th number is repeated k times
// ● Input:
// ○ 2
// ○ 3 5 7 2
// ○ 4 1 2 3 4
// ● Output
// ○ 62 [as (5 + 7*7 + 2*2*2) = 62]
// ○ 288 [as (1+2*2+3*3*3+4*4*4*4) = 288]

#include<iostream>
using namespace std;

int main() {
    int T, N, num;
    cin >> T; //2

    while (T > 0) // 2
    {
        int cst=1;
        int multi = 1;
        int sum = 0;
        cin >> N; //3
        while (N> 0) //3 2 1
        {
            int result=1;
            cin >> num; // 5 7 2
            multi = cst;
            // sum = sum + (num^multi);// 5 54 64 "I relized that there's no Exponential operator in c++"
            while (multi> 0)
                result *= num, multi--;  // 5 
            sum += result;
            N--; //2 1 0
            cst++; //2 3 4
        }
        cout << sum<<"\n"; // 64 
        T--; // 1
    }
}