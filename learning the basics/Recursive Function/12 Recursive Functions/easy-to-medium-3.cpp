// ● int arr_max(int arr[], int len);
// ● Write a function that computes array maximum
// ● Input 1, 8, 2, 10, 3 ⇒ 10

#include<iostream>
using namespace std;

int arr_max(int arr[], int len){
    if (len == 1)
        return arr[0]; // not return 1;

    return max(arr[len - 1], arr_max(arr, len - 1));
    
}

int main() {
    int arr[100], len;
    cin >> len; // 5
    for (int i = 0; i < len; ++i){
        cin >> arr[i]; // 1 8 2 10 3
    }

    cout << arr_max(arr, len);

}