// ● Count How many X, Y numbers such that
// ○ X in range [50-300]
// ○ Y in range [70-400]
// ○ X < Y
// ○ (X+Y) divisible by 7
// ● Output
// ○ 8040

#include<iostream>
using namespace std;

int main() {
    int X,Y;
    int count=0;


    for (int X= 50; X <= 300; ++X){
        for (int Y = 70; Y <= 400; ++Y){
            if ( X<Y && (X + Y) % 7 == 0)
                count++;
        }
    }
    cout << count << "\n";
}