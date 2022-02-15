// ● Read an integer N (< 200), then read N integers.
// ○ Assume all values [0, 2000]
// ● Print the array after doing the following operations:
// ○ Find minimum number in these numbers.
// ○ Find maximum number in these numbers.
// ○ Replace each minimum number with maximum number and Vise Versa.
// ● Input ⇒ Output
// ○ 7 4 1 3 10 8 10 10 ⇒ 4 10 3 1 8 1 1 
#include<iostream>
using namespace std;

int main() {
    int N, number[200];
    cin >> N;

    for (int i = 0 ; i < N; i++){   // we can merge this loop 
        cin >> number[i];           //                    /
}                                   //                   /       
    int max = -1, min = 2001, tmp;  //                  /
    for (int i = 0 ; i < N; i++){   //with this loop <_/ 
        if (max <= number[i]){
            max = number[i];
           // tmp = max;
        }
        else if (min >= number[i])
            min = number[i];
    }
    for (int i = 0 ; i < N; i++){
        if( number[i] == max)
            number[i] = min;
        else if (number[i] == min)
            number[i] = max;
    }
    for (int i = 0 ; i < N; i++){
        cout << number[i] << " ";
    }
    // cout << max <<" " << min;
    // for (int i = 0 ; i < N; i++){
    //     int tmp;

    // }
    // for (int i = 0 ; i < N; i++){
    //     if (number[i] <= number[i + 1])
    //         min = number[i];
    // }
}