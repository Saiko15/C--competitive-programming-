// ● Read integer N ( < 1000), followed by reading N integers (0 <= value <= 500)
// ● The N numbers are ordered from small to large
// ● Print the unique list of the numbers, but preserve the given order
// ● Input: 12 1 1 2 2 2 5 6 6 7 8 9 9
// ● Output: 1 2 5 6 7 8 9
// ○ Observe: input is sorted list
// ● Optional Constraints:
// ○ Don’t use nested loops!
// ○ Use only 1 single array
// ○ Or Do it without even using arrays at all
#include<iostream>
using namespace std;

int main() {
    int N, number[1000];
    cin >> N;
    int tmp;
    for (int i = 0 ; i < N; i++){
        cin >> number[i];
        
    }
    for (int i = 0 ; i < N; i++){
        if ( N == i +1 )
            break;
        else if (number[i] != number[i - 1])
            cout << number[i] << " ";
    }
    // for (int i = 0 ; i < N; i++){
    //     cout << number[i] << " ";
    // }
}