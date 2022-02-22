// ● void array_increment(int arr[], int len)
// ● The function increments each arr[i] with i
// ● E.g. for input
// ○ [1, 2, 5, 9] it be [1+0, 2+1, 5+2, 9+3]
// ○ 1 8 2 10 3 ⇒ 1 9 4 13 7 

#include<iostream>
using namespace std;

void array_increment(int arr[], int len){
    if (len == 1)
        cout <<arr[0] <<" ";
    else{
        array_increment(arr, len-1);
        cout << arr[len-1] + len-1 <<" ";
    }
}

int main() {
    int arr[] = {1, 2, 5, 9};
    int arr2[] = {1, 8, 2, 10, 3};
    array_increment(arr, 4);
    array_increment(arr2, 5);
}