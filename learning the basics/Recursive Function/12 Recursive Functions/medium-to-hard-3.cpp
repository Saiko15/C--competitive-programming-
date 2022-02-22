// ● Write a function that sums only the first N elements in an array.
// ● Define its signature
// ● Input [1, 3, 4, 6, 7], 3 ⇒ 8 (1+3+4
#include<iostream>
using namespace std;

int sum_first_n (int arr[], int len, int N){
    if(N == 0)
        return 0;
    
    return arr[N - 1] + sum_first_n(arr, len-1, N- 1);
}

int main() {
    int arr[]= {1, 3, 4, 6, 7};

    cout << sum_first_n(arr, 5, 3);
}