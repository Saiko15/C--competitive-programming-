#include<iostream>
using namespace std;

int main() {
    int N, number[200];
    cin >> N;

    for (int i = 0 ; i < N; i++)
        cin >> number[i];
    int max1, max2;
    for (int i = 0 ; i < N; i++){
        
        if (number[i] >= number[i + 1])
            max1 = number[i];
        else
            max1 = number[i + 1];
    }
    int max_final = max1;
    max1 = -100000000;
    for (int i = 0 ; i < N; i++){
        if (number[i] >= number[i + 1])
            max2 = number[i];
        else
            max2 = number[i + 1];
    }
    cout << number[max_final]<<"\n";
    cout << number[max2]<<"\n";
    cout << number[max_final] + number[max2];
    
}