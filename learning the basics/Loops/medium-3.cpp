// ● Read an integer N (1 <= 30): Print the first N numbers that are
// ○ multiple of 3 but not multiple of 4
// ● Input: 11
// ● Output: 3 6 9 15 18 21 27 30 33 39 42
// ● Notice
// ○ 12 is divisible by both 3 and 4 ⇒ so excluded

#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int num = 1;

    if (N > 1 && N <= 30 )
    {
        while (N > 0)
        {
           // int count_of_nums = N;
           // while (count_of_nums>0){
                    if (num % 3 == 0 && num % 4 != 0)
                    {
                        cout << num << "\n";
                        N--;
                    }
                    num++;
           // }
           // N--;
        }
    }
}