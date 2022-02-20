// ● Read integers N, M, then Read matrix NxM. Compute another array, the
// transpose
// ● Input/output as in image
#include<iostream>
using namespace std;

int main() {
    int N, M, matrix[100][100] ,new_matrix[100][100];
    cin >> N >> M; 

    for (int i = 0; i < N; ++i){  // 4x5
        for (int j = 0 ; j < M; ++j){
            cin >> matrix[i][j];
            new_matrix[j][i] = matrix[i][j];

        }
    }

    for (int i = 0; i < M; ++i){ //5x4
        for (int j = 0 ; j < N; ++j){
            cout << new_matrix[i][j] << " ";
        }
        cout << "\n";
    }
}