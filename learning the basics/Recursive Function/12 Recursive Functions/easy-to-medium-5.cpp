// ● double average(int arr[], int len);
// ● Write a function that computes array average
// ○ Don’t divide by length in the main
// ● Input 1, 8, 2, 10, 3 ⇒ 4.8

#include<iostream>
using namespace std;

// double sum(int arr[], int len){
//     if (len == 1)
//         return arr[0];

//     return arr[len-1] + sum(arr, len-1);
// }

// double average(int arr[], int len){


//     return sum(arr, len) / len;
// }

double average(int arr[], int len){ // we need it in one function
    if (len == 1)
        return arr[0];

    return (arr[len-1]  + (average(arr, len-1) * (len-1) )) / len;

}

int main() {
    int arr[] = { 1, 8, 2, 10, 3 };
    cout << average(arr, 5);
}