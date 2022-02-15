// ● Read integer N ( <= 900), followed by reading N integers (0 <= value <= 500)
// ● Print the sorted list of the numbers
// ● Input: 13 1 5 5 2 5 7 2 3 3 3 5 2 7
// ● Output: 1 2 2 2 3 3 3 5 5 5 5 7 7
// ● Give your most efficient trial
// ○ You don’t need to google how to sort numbers
// ○ Hint: max value in the array is 500
#include<iostream>
using namespace std;

int main() {
    int N, number[900];
    cin >> N;

    for (int i = 0 ; i < N; i++)
        cin >> number[i];
    int tmp;
    for (int i = 0 ; i < N; i++){
        for (int j = i + 1 ; j < N; j++){
            if (number[i] > number[j]){
                tmp = number[j];
                number[j] = number[i];
                number[i] = tmp;
            }
       }
    }
    for (int i = 0 ; i < N; i++)
        cout << number[i] << " ";
}