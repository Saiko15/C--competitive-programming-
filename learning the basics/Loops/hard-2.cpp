// Read an integer N, then find its reverse integer R
// ○ Print R R*3
// ● input ⇒ Output
// ○ 123 ⇒ 321 963

#include<iostream>
using namespace std;

int main() {
    int N, first_num, second_num, third_num;
    cin >> N;
    first_num = N / 100;
    second_num = (N % 100) /10;
    third_num = N % 10;
    cout << third_num*100 + second_num*10 + first_num << " ";
    cout << third_num*300 + second_num*30 + first_num*3 <<"\n"; 
    // while (N> 0)
    // {
    //     N / 10
    // }

}