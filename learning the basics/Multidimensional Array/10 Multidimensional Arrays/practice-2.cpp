// ● Read 2 integers for the rows and columns of a matrix ( <= 100). Then read
// rows x cols integer value.
// ● Print the following 4 values
// ○ The sum of the left diagonal & The sum of the right diagonal
// ○ The sum of the last row & The sum of the last column
// ● Input: 3 4
// ○ 8 16 9 52
// ○ 3 15 27 6
// ○ 14 25 2 10
// ● Output
// ○ 25 104
// ○ 51 68
#include<iostream>
using namespace std;

int main() {
    int row, col;
    int matrix[100][100];
    cin >> row >> col;

    for (int i = 0; i < row; ++i){
        for (int j = 0 ; j < col; ++j){
            cin >> matrix[i][j];
        }
    }
    int left_sum = 0, right_sum= 0, last_r = 0, last_c = 0;
    int right_row=0, right_col = col - 1;
    for (int i = 0; i < row; ++i){
        for (int j = 0 ; j < col; ++j){
            if ( i == j)
                left_sum += matrix[i][j];

            // if ( j >= col/2)
            //     right_sum += matrix[i][j];

            if (i == row-1)
                last_r += matrix[i][j];

            if (j == col-1)
                last_c += matrix[i][j];

            if( i == right_row && j == right_col ){
                right_sum += matrix[i][j];
                right_row++;
                right_col--;
            }
        }
    }

    cout << left_sum << " " << right_sum << "\n";
    cout << last_r << " " << last_c << "\n";
}