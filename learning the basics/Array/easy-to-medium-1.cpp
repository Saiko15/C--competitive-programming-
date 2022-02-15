// ● Read an Integer N, then read N (<= 200) integers.
// ● Print YES if the array is increasing.
// ○ An array is increasing if every element is >= the previous number
// ● Inputs
// ○ 4 1 2 2 5 ⇒ YES
// ○ 5 1 0 7 8 9 ⇒ NO [0 is < 1, the previous number]
// ○ 2 -10 10 ⇒ YES 

#include<iostream>
using namespace std;

int main() {
    int N, number[200];
    cin >> N;
    for (int i = 0 ; i < N; i++){
        cin >> number[i];
    }
    bool is_incresing = true;
    for (int i = 0 ; i < N; i++){
        if (N == i + 1)
            break;
        else if (number[i] <= number[ i + 1])
            is_incresing = true;
        else
        {
            is_incresing = false;
            break;
        } 
    }
    if (is_incresing)
        cout <<"YES\n";
    else
        cout << "NO\n"; 

}
