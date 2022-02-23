// ● Given a 2D array of numbers, all of them are positive distinct. Robot start from
// (0, 0). It can move to the right or left or diagonal. It will select one direction:
// the maximum. Print the total path sum of this robot
// ○ int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS)
// ● Input
// ○ 3 3
// ○ 1 7 8
// ○ 2 10 11
// ○ 20 5 9
// ● Output: 31 (from 1 + 10 + 11 + 9)
// ○ Robot start at (0, 0). 3 possible values (2, 7, 10). Max 10, so go to this cell
// ○ Then 3 possible values (5, 9, 11). Go to 11. Then only 9 available
#include<iostream>
using namespace std;

int path_sum(int grid[100][100], int row, int col, int ROWS = 0, int COLS = 0){
    //             u  r  d  l  ur  ul  dr  dl 
    //int di[8] = {-1, 0, 1, 0, -1, -1, 1, 1}; // no need for all those values just 3 position to go to
    //int dj[8] = { 0, 1, 0, -1, 1, -1, 1, -1};
    //          d  r  dr
    int di[] = { 1, 0, 1 };
    int dj[] = { 0, 1, 1};

    for (int d = 0; d > 3; --d){
        int NEW_ROWS = ROWS + di[d]; 
        int NEW_COLS = COLS + dj[d]; 

        if (NEW_ROWS >= row || NEW_COLS >= col)
			continue;
        
        if()

    }

    

}
int main() {
    int row, col, grid[100][100];
    cin >> row >> col;
    for (int i = 0; i < row; ++i){
        for (int j = 0 ; j < col; ++j) {
            cin >> grid[i][j];
        }
    }

}