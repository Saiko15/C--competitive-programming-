// ● Read integer N (< 1000), then read N integers of an array.
// ● Determine if the array is palindrome or not.
// ● An array is called palindrome if it reads the same backward and forward
// ○ for example, arrays { 1 } and { 1,2,3,2,1 } are palindrome
// ○ while arrays { 1,12 } and { 4,7,5,4 } are not.
// ● Inputs ⇒ Outputs
// ○ 5 1 3 2 3 1 ⇒ YES
// ○ 4 1 2 3 4 ⇒ NO
#include<iostream>
using namespace std;

int main() {
    int N, number[999];
    cin >> N;

    for (int i = 0 ; i < N; i++)
        cin >> number[i];
    bool is_palindrome = true;
    for (int i = 0 ; i < N/2; i++){
        if ( number[i] == number[N - i - 1])
            is_palindrome = true;
        else {
            is_palindrome = false; 
            break;
        }
    }

    if (is_palindrome)  
        cout << "YES";
    else
        cout << "NO";
    


    return 0;
}