// ● Count how many (a, b, c, d) with following property:
// ○ 1 <= a, b, c, d <= 200
// ○ a + b = c + d
// ● Code it once using 4 loops
// ○ How much time does it take!
// ● Code it once using 3 loops only
// ● Future: With hash tables, you can do it using 2 loops only
#include<iostream>
using namespace std;

int main() {

    int count=0;
    for (int d = 0; d <= 200; d++){
        for (int c=0; c < d; ++c){
            for (int b=0; b <d; ++b){
                int a= d + c - b;
                if (1<=a && a<=200)
                    count++;
            }
        }
    }
    cout << count << "\n";



    // int count=0;
    // for (int d = 0; d <= 200; d++){
    //     for (int c=0; c < d; ++c){
    //         for (int b=0; b <d; ++b){
    //             for (int a=1; a < d; ++a){
    //                 if (a+b == c +d)
    //                     count++;
    //             }
    //         }
    //     }
    // }
    // cout << count << "\n";
    
}