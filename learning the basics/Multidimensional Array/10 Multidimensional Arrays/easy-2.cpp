// ● Read integer N, then Read Square matrix NxN. Then, print 2 values. The
// sum of the lower triangle matrix and the upper triangle.
// ● Input
// ○ 3
// ○ 8 16 9
// ○ 3 15 27
// ○ 14 25 29
// ● Output
// ○ 94 (8+15+29+3+25+14)
// ○ 104 (8+15+29+16+27+9)
#include<iostream>
using namespace std;

int main() {
    int N, matrix[100][100];
    cin >> N;

    for (int i = 0; i < N; ++i){
        for (int j = 0 ; j < N; ++j){
            cin >> matrix[i][j];
        }
    }

    int lower_triangle= 0, upper_triangle=0;
    for (int i = 0 ; i < N; ++i){
        for (int j = 0 ; j < N; ++j){
            if ( i == j){
                lower_triangle += matrix[i][j];
                upper_triangle += matrix[i][j];
            }
            else if ( i == 0 || j == N - 1)
                upper_triangle += matrix[i][j];
            else if (j == 0 || i == N - 1)
                lower_triangle += matrix[i][j];
            
            
            // if (i == N - 1)
            //     lower_triangle += matrix[i][j];
            // else if ( i == N - 2 && !(j > N-2))
            //     lower_triangle += matrix[i][j];
            // else if ( i == N -3 && !(j > N-3))
            //     lower_triangle += matrix[i][j];
            // else
            //     upper_triangle+= matrix[i][j];

        }
    }
    cout << lower_triangle << " " << upper_triangle;
}