// ● Read an Integer N, then read N <= 200 integers. Find the value that repeated
// the most number of times.
// ○ Each integer is -500 <= value <= 270
// ● Example for array: 7 -1 2 -1 3 -1 5 5
// ○ -1 repeated 3 times: the largest
// ● Don’t use nested loops
#include<iostream>
using namespace std;

int main() {
    int N, number[200];
    cin >> N;

    for (int i = 0 ; i < N; i++)
        cin >> number[i];

    int largest, count, most_iterable, most_count = 0;
    for (int i = 0 ; i < N; i++){
        count = 1;
        for (int j = i + 1 ; j < N; j++){
            if (number[i] == number[j]){
                largest = number[i];
                count++;
            }
        }
        if (most_count < count){
            most_count = count;
            most_iterable = largest;
        }


    }
    cout << most_iterable << " " << most_count;

}