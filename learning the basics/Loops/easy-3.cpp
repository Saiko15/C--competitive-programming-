// Problem #3: Print left angled triangle
// ● Read integer N, then print a left angled triangle that has N rows as below
// 5
// * 
// * *
// * * *
// * * * *
// * * * * *

#include<iostream>
using namespace std;

int main () {
    // int N;
    // cin >> N;
    // while (N> 0)
    // {
    //     if (N> 0) {cout<<"*\n"; N--;}
    //     if (N> 0) {cout<<"* *\n"; N--;}
    //     if (N> 0) {cout<<"* * *\n"; N--;}
    //     if (N> 0) {cout<<"* * * *\n"; N--;}
    //     if (N> 0) {cout<<"* * * * *\n"; N--;}
    //     if (N> 0) {cout<<"* * * * * *\n"; N--;}
    //     if (N> 0) {cout<<"* * * * * * *\n"; N--;}
    //     if (N> 0) {cout<<"* * * * * * * *\n"; N--;}
    //     if (N> 0) {cout<<"* * * * * * * * *\n"; N--;}
    //     if (N> 0) {cout<<"* * * * * * * * * *\n"; N--;}
    // }

    int N, row; 
    cin >> N;
    row = N;
    while (N> 0)
    {
        int col= (row - N) + 1;

        while (col > 0)
        {
            cout << "* ";
            col--;
        }
        cout <<"\n";
        N--;
    }
    return 0;
    
}
