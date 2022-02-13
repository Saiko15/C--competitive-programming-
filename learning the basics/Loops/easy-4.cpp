//● Read integer N, then print a face down left angled triangle that has N rows.
#include<iostream>
using namespace std;

int main() {
    int N, row;
    cin >> N;
    // row = N;

    while (N> 0)
    {
        int col = N;
        while (col>0)
        {
            cout << "* ";
            col--;
        }
        cout <<"\n";
        N--;
    }
}