// ● Read integer N (>= 3), then read N integers. Find the 3 lowest numbers.
// ○ Don’t change the array content
// ○ Don’t iterate on the array more than once
// ● Input ⇒ Output
// ○ 5 4 1 3 10 8 ⇒ 1 3 4
// ○ 3 7 9 -2 ⇒ -2 7 9
#include<iostream>
using namespace std;

int main() {
    int N, number[99];
    cin >> N;

    for (int i = 0 ; i < N; i++)
        cin >> number[i];

    int the_lowest, the_2nd_lowest, the_3rd_lowest;
    for (int i = 0 ; i < 3; i++){
        for (int j = i + 1 ; j < N; j++){
            if (number[i] > number[j])
                the_lowest = number[j];
            else
                the_lowest = number[i];

            cout << the_lowest << " ";
        }
        
        
        

    }
    
}