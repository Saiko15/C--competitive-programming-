// ● Read 2 integers for the rows and columns of a matrix ( <= 100). Then read
// rows x cols integer value. Find the position of maximum value in the array. If
// there are several ones, find the last occurance
// ● Input:
// ○ 3 4
// ○ 1 5 1 10
// ○ 2 10 3 4
// ○ 1 10 10 7
// ● Output
// ○ Max value at position 2 2 with value = 10
#include<iostream>
using namespace std;

int main() {
    int row, col;
    int matrix[row][col];
    cin >> row >> col;

    for (int i = 0; i < row; ++i){
        for (int j = 0; j < col; ++j){
            cin >> matrix[i][j];
        }
    }
    int largest_row, largest_col;
    int largest = -1;
    for (int i = 0; i < row ; i++){
        for (int j = 0 ; j < col; ++j){
            if (matrix[i][j] >= largest){
                largest = matrix[i][j];
                largest_row = i;
                largest_col = j;
            }
        }
    }
    cout <<"Max value at position "<< largest_row << " " << largest_col << " with value = "<< largest;
}