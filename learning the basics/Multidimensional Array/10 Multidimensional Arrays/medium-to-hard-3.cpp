// ● Read integers N, M represents a matrix. A robot start at cell (0, 0).
// ● Read integer K, then K commands. Each command is 2 values
// ○ Direction from 1 to 4: up, right, down, left
// ○ Steps: a number to number steps to take in the direction. Steps [1, 1000000000]
// ○ If the robot hits the wall during the move, it circulates in the matrix.
// ○ For every command, print where is the robot now
// ● Input
// ○ 3 4   4    2 1    3 2    4 2    1 3
// ■ 2 1 means to right 1 step - 3 2 means down 2 steps
// ● Output
// ○ (0, 1) (2,1) (2, 3) (2, 3)
#include<iostream>
using namespace std;

int main() {
    int N, M, matrix[100][100];
    cin >> N >> M;
    // u r d l
    int di[4] = {-1, 0, 1, 0};
    int dj[4] = {0, 1, 0, -1};
    int K, r , steps, ni= 0, nj = 0;
    cin >> K;
    for (int i = 0; i < K; ++i){
        cin >> r >> steps;
        ni = ni + di[r-1] * steps;
        nj = nj + dj[r-1] * steps;
        if(ni < 0)
            ni += N;
        if(nj < 0)
            nj += M;
        if(ni >= N)
            ni -= N;
        if(nj >= M)
            nj -= M;
        cout <<"("<< ni <<", "<< nj <<")\n";
    }
}