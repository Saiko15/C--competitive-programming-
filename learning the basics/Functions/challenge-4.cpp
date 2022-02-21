// ● Read N, then N integers for an Array. Call a function with the array to check if
// the array is palindrome or note
// ○ We already coded it before
// ○ Just copy code and rearrange to call function with array
#include<iostream>
using namespace std;

bool is_palindrome (int arr[20]){
    bool is_ok = true;
    int N = 5 - 1;
    for (int i = 0; i < N/2; i++){
        if (arr[N]==arr[i])
            is_ok = true;
        else
            is_ok = false;
        N--;
    }
    if(is_ok)
        return true;
    else
        return false;
}

int main() {
    int N, arr[20];
    cin >> N;

    for (int i = 0 ; i < N;i++){
        cin >> arr[i];
    }

    cout << is_palindrome(arr);
}