// ● Input: Read integer T for a number of test cases.
// ● For each test case read integer N followed by reading N integers.
// ● Output: For each test case, print the minimum of the N integers.
// ● Input
// ○ 2 6 10 50 20 70 30 4 3 10 5 30
// ○ Notice here we have 2 test cases
// ■ 6 10 50 20 70 30 4 [6 numbers to read] ⇒ min is 4
// ■ 3 10 5 30
// ● Output
// ○ 4
// ○ 5
#include<iostream>
using namespace std;

int main() {
    int T, N, num;
    cin >> T;

    while (T> 0)
    {   
        int tmp=1000;
        cin >> N;
        while (N> 0)
        {
            cin >> num;
            if (num < tmp)
                tmp= num;
            N--;            
        }
        T--;
        cout << tmp;
    }
    return 0;
}