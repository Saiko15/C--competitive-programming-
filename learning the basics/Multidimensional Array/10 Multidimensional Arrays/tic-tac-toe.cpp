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

    bool is_there_winner = false;
    while(!is_there_winner){
        int r, c;
        cout << "Player X turn. Enter empty location (r, c): ";
        cin >> r >> c;
        matrix[r-1][c-1] = 'X';
        cout << "Player O turn. Enter empty location (r, c): ";
        cin >> r >> c;
        matrix[r-1][c-1] = 'O';

        if (matrix[1][1] == matrix[2][2] && matrix[1][1] == matrix[0][0]){
            cout << "Player" << matrix[1][1] << "won\n";
            is_there_winner = true;
        }
        if(matrix[0][0] == matrix[0][2] && matrix [0][0] == matrix[0][1]){
            cout << "Player" << matrix[1][1] << "won\n";
            is_there_winner = true;
        }
            
            

    }
}