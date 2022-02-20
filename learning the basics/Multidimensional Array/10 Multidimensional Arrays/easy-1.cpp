// ● Read integers N, M, then Read matrix NxM. Then read Q for Q queries.
// ● Each query is 2 integers: first and 2nd row indices (1-based)
// ● Compare the 2 rows and print YES if first row < 2nd for all the row values
// ● Input ⇒ Output
// ○ 3 4
// ○ 8 16 9 52
// ○ 3 15 27 6
// ○ 14 25 29 10
// ○ 3
// ○ 1 2 ⇒ NO
// ○ 2 3 ⇒ YES
// ○ 1 3 ⇒ NO
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

    int Q, indice_one, indice_two;
    bool is_smaller = true;
    cin >> Q;
    for (int i = 0; i < Q; ++i){
        cin >> indice_one >> indice_two;
        for (int j = 0; j < M; ++j){
            if (matrix[indice_one - 1][j] < matrix[indice_two - 1][j])
                is_smaller = true;
            else{
                is_smaller = false;
                break;
            }
        }
        if(is_smaller)
            cout <<"YES\n";
        else
            cout << "NO\n";
    }

}