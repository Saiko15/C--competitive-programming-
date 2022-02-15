// ● The first terms of this sequence are 0, 1, 3, 6, 2, 7, …
// ○ So last term value is 7 and its index is 5 (zero based)
// ○ The next value is either:
// ■ LastValue - LastIndex - 1 if the following 2 conditions are satisfied:
// ● value > 0 and It did not appear before
// ● E.g. 7 (last value) - last index (5) - 1 = 7-5-1 = 1 (> 0 but already exists)
// ■ Or LastValue + LastIndex + 1 = 7+5+1 = 13
// ● Read integer zero-based index ([1, 200]) and print the value of this index
// ○ E.g. (6 ⇒ 13), (9 ⇒ 21), (17 ⇒ 25)
// ● Don’t use nested loops
// ● The series is: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21, 11, 22, 10, 23, 9, 24, 8, 25, 43
#include<iostream>
using namespace std;
int main() {
    int number[199];
    number[0] = 0;
    number[1] = 1;
    number[2] = 3;
    
    for (int i = 3 ; i < 20; i++){
        number[i] = number[i-1] - (i-1) - 1;
        for ( int j = 0 ; j < i; j++){
            if (number[i] == number[j] || number[i] < 0)
                number[i] = number[i-1] + (i-1) + 1;
        }
    }
    for (int i = 0 ; i < 20; i++){
       cout << number[i] << " ";
    }
}