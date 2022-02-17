// ● Read integers N, M, then Read matrix NxM. Then read 2 indices of columns.
// Swap the 2 columns together. Print the new matrix.
// ● Input: 3 4
// ○ 8 16 9 52
// ○ 3 15 27 6
// ○ 14 25 2 10
// ○ 0 3
// ● Output
// ○ 52 16 9 8
// ○ 6 15 27 3
// ○ 10 25 2 14
#include<iostream>
using namespace std;

int main() {
    int row, col;
    int matrix[100][100]; // it doesno't work when i make it matrix[row][col] be careful
    cin >> row >> col;

    for (int i = 0; i < row; ++i){
        for (int j = 0 ; j < col; ++j){
            cin >> matrix[i][j];
        }
    }

    int indice_one, indice_two;
    cin >> indice_one >> indice_two;

    for (int i = 0; i < row; ++i){
            int tmp = matrix[i][indice_one];
            matrix[i][indice_one] = matrix[i][indice_two];
            matrix[i][indice_two] = tmp;
    }

    for (int i = 0; i < row; ++i){
        for (int j = 0 ; j < col; ++j){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}