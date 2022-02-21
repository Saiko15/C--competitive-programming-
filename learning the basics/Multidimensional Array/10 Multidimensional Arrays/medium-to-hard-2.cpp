// ● Read integers N, M, then Read matrix NxM. Print all positions that are
// mountain. Position is mountain if its value > 8 neighbours values
// ● Code smartly
// ● Input
// ○ 3 3
// ○ 8 6 1
// ○ 3 2 9
// ○ 1 6 4
// ● Output
// ○ 0 0 (8 > 6, 3, 2)
// ○ 1 2 (9 > 1, 2, 5, 4, 6)
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
    // u, d, r, l, ur, ul, dr, dl
    int di[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dj[8] = {0, 0, 1, -1, 1, -1, 1, -1};
    for (int i = 0; i < N; ++i){
        for (int j = 0 ; j < M; ++j){
            bool is_mountain = true;

            for (int d = 0; d < 8; ++d){
                int ni = i + di[d];
                int nj = j + dj[d];

                if (ni < 0 || ni > N || nj < 0 || nj > M)
                    continue;
                
                if(matrix[i][j] < matrix[ni][nj]){
                    is_mountain = false;
                    break;
                }

            }

            if (is_mountain)
                cout << i << " " << j << "\n";
        
            
        }
    }
}