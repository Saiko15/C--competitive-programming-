// ● Read integers N, M, then Read matrix NxM. All values are distinct.
// ● A robot starts at cell (0, 0).
// ● Take the value in the current cell and moves.
// ● It can move only one step to either: Right, Bottom or the diagonal.
// ● It always selects the cell that has maximum value.
// ● Print the total values the robot collects
#include<iostream>
using namespace std;

int main() {
    int N, M, matrix[100][100];
    cin >> N >> M;

    for (int i = 0; i < N; ++i){
        for (int j = 0 ; j < M; ++j){
            cin >> matrix[i][j];
        }
    }

}
