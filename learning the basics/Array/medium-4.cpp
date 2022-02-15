// ● Read an Integer N, then read N <= 200 integers. For all the digits from 0 to 9,
// we want to know how many times appeared
// ○ Input 2 78 307
// ○ Output:
// ○ 0 1
// ○ 1 0 [digit 1 never appeared]
// ○ 2 0
// ○ 3 1
// ○ 4 0
// ○ 5 0
// ○ 6 0
// ○ 7 2 [digit 7 appeared twice]
// ○ 8 1
// ○ 9 0
#include<iostream>
using namespace std;

int main() {
    int N, number[200];
    cin >> N; // 2


    // int count = 0, cnt;
    for (int i = 0 ; i < N; i++){
        cin >> number[i]; // 78 307
        for (int j = 0 ; j < 10 ; j++){
            int count = 0;
            if (number[i] / 100 != 0){
                if (number[i]/10 == j || number[i]%10 == j || (number[i]/10)%10 == j || number[i]/ 100 == j){
                    count++;
                    cout << j << " " << count <<"\n";
                }
            }
            else {
                if (number[i]/10 == j || number[i]%10 == j )
                {
                    count++;
                    cout << j << " " << count <<"\n";
                }
                

            }
        }   
    }
}