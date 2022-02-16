// ● Read integers N (< 200) and K (<= 1000000). Code for small K first
// ○ Find the game winner for following game:
// ● There is a group of N people in Circle numbered 1, 2, …. N
// ○ Someone is a master of the game.
// ○ He starts from Person #1. Count K. Then remove this person from the circle.
// ○ He keeps doing so till only 1 person remains. This is the winner.
// ● Input 4 2
// ○ Means we have people: 1, 2, 3, 4. Master starts at 1
// ○ Count 2 persons (2 removed), start from 3
// ○ Count 2 persons (4 removed), start from 1
// ○ Count 2 persons (3 removed), 1 is winner
// ● Output
// ○ People removed in order: 2 4 3 1 [same answer for 10 2 why?]
// ● Input ⇒ Output
// ○ 7 1 ⇒ 1 2 3 4 5 6 7
// ○ 7 2 ⇒ 2 4 6 1 5 3 7
// ○ 7 3 ⇒ 3 6 2 7 5 1 4
// ○ 7 4 ⇒ 4 1 6 5 7 3 2
// ○ 7 5 ⇒ 5 3 2 4 7 1 6
// ○ 7 6 ⇒ 6 5 7 2 1 4 3
// ○ 7 7 ⇒ 7 1 3 6 2 4 5
// ○ 7 14 ⇒ 7 2 6 3 5 4 1
// ○ 7 1000 ⇒ 6 3 2 1 4 7 5
// ○ 7 99999 ⇒ 4 7 5 2 1 3 6
#include<iostream>
using namespace std;

int main() {
    int number[200], N, K;
    cin >> N;

    for (int i = 0 ; i < N; i++)
        number[i] = i + 1;

    cin >> K;
    
    for (int j = 0 ; j < N; j++){
        for ( int i = K-1; i < N; i += K){
             cout << number[i] << " ";
             if ( i == N -1)
                i = K - 2;
        }
         
    }

    for (int i = 0 ; i < N; i++)
        cout << number[i] << " ";


}