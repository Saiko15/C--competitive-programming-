// ● Read integer N ( <= 900), followed by reading N integers (0 <= value <= 500)
// ● Print the unique list of the numbers, but preserve the given order
// ● Input: 13 1 5 5 2 5 7 2 3 3 3 5 2 7
// ● Output: 1 5 2 7 3
// ○ Observe: input is not sorted list
// ○ Observe: output preserves the original order: e.g. 5 appears before 2
// ● Don’t use nested loops
 
#include<iostream>
using namespace std;

int main() {
    int N, number[900];
    cin >> N;

    for (int i = 0 ; i < N; i++)
        cin >> number[i];

    int num;
    for (int i = 0 ; i < N; i++){
        for ( int j = i + 1 ; j < N; j++){
            if (number[i] == number[j])
                number[j] = 0;
        }
    }
    for (int i = 0 ; i < N; i++)
        if (number[i] != 0)
            cout << number[i] << " ";
}