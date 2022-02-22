// ● Write a function that sums only the last N elements in an array.
// ● Define its signature
// ● Input [1, 3, 4, 6, 7], 3 ⇒ 17 (4+6+7)
#include<iostream>
using namespace std;

int sum_last3(int arr[],int len, int N = 3){
    if ( N == 0)
        return 0;
    sum_last3(arr, len - 1, N - 1);
    return arr[len-1] +  arr[len-2];
}

int main() {
    int arr[] = { 1, 3, 4, 6, 7};
    cout << sum_last3(arr, 5 );
}