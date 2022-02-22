// ● Implement a function that decides if array is palindrome or not
// ● Define its signature 
#include<iostream>
using namespace std;

bool is_palindrome(int arr[], int len, int start_pos = 0){
    if (start_pos >= len )
        return true;
    
    if(arr[len - 1] != arr[start_pos])
        return false;
    
    return is_palindrome(arr, len -1, start_pos + 1);
}

int main() {
    int arr[]= { 1, 8, 2, 10, 3};
    int arr2[]= { 1, 8, 2, 8, 1};

    cout << is_palindrome(arr, 5) << "\n";
    cout << is_palindrome(arr2, 5) << "\n";
    
}