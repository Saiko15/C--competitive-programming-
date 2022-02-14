#include<iostream>
using namespace std;

int main() {
    int N, number[200];
    cin >> N; // 8

    for (int i = 0 ; i < N; i++){
        cin >> number[i]; // 1 2 3 4 5 6 7 8
    }   
    for (int i = 0 ; i < N/2; i++){
        int tmp;
        tmp = number[i];
        number[i] = number[N-i-1];
        number[N-i-1] = tmp;
    }
    for (int i = 0 ; i < N; i++){
        cout << number[i]<<"\n";
    }
}