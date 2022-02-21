// ● Read 2 integers N and M, then Read matrix NxM.
// ● Then read integer Q, for Q queries.
// ● For each query read 4 integers: i j r c
// ○ Represents a grid (submatrix): top left (i, j) and (r, c) for (# rows, # cols)
// ● For each query, print how many prime numbers in the requested grid.
// ○ Each query should be answered using nested loops maximum not more
// ○ In future: with smart precomputation it can be done without loops
// ■ It is called Image integral in Computer Vision field
// ● Input ⇒ Output
// ○ 3 4
// ○ 8 2 9 5
// ○ 3 2 27 6
// ○ 7 8 29 22
// ○ 2
// ○ 1 0 2 2 ⇒ 3 (primes 3, 2, 7 in rectangle (0, 1) (2, 1) )
// ○ 0 1 2 3 ⇒ 3 (primes 2, 5, 2 in rectangle (0, 1) (1, 3) )
#include<iostream>
using namespace std;

int main() {
    int N, M, matrix[100][100], is_prime[100][100] = { 0 };
    cin >> N >> M;

    for (int i = 0; i < N; ++i){
        for (int j = 0 ; j < M; ++j){
            cin >> matrix[i][j];

            is_prime[i][j] = 1;
            for (int k = 2; k < matrix[i][j]; ++k){
                if(matrix[i][j] % k == 0){
                    is_prime[i][j] = 0;
                    break;
                }
            }
        }
    }

    int Q, i, j, r, c;
    cin >> Q;
    for (int k = 0; k < Q; ++k){
        cin >> i >> j >> r >> c;

        for (; r >= i ; r--){
            for (; c >= j ; c--){
                if (is_prime[r][c])
                    cout << matrix[r][c] << " "; ;
            }
        }
        cout <<"\n";
    }

}