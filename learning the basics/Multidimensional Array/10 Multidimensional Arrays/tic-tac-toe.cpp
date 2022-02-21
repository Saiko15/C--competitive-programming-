// ● Read integer N for the dimension of tic-tac-toe (3 <= N <= 9). Then run a
// game of 2 users who keep playing till one of them wins or tie. Print the grid
// after each round. Checkout below
#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    char matrix[9][9];

    for (int i = 0 ; i < N; ++i){
        for (int j = 0; j < N; ++j){
            matrix[i][j] = '.';
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    // bool is_there_winner = false;
    // while(!is_there_winner){
    //     cout << 
    // }
}