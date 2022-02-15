// Given a number N (<= 200) and an array A of N numbers.
// ● Print the smallest possible result of A[i] + A[j] + j - i , where 1  ≤  i < j  ≤  N.
// ● Input ⇒ Output
// ○ 4 20 1 9 4 ⇒ 7   (1 + 4 + 3 - 1)
#include<iostream>
using namespace std;

int main() {
    int N, number[199];
    cin >> N;

    for (int i = 0 ; i < N; i++)
        cin >> number[i];
    int smallest = 5000;
    for (int i = 0 ; i < N - 1; i++){
        for (int j = i+1 ; j < N; ++j) {
            if ( (number[i] + number[j] + j - i) < smallest )
                smallest = number[i] + number[j] + j - i;
        }
    }
    cout << smallest << " ";
    
}