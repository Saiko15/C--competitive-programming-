#include<iostream>
using namespace std;

int main() {
    int X, s1, e1, s2, e2, s3, e3;
    int result = 0;
    cin >> X >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
    if (X>s1 && X<e1)
        result += 1;
    if (X>s2 && X<e2)
        result += 1;
    if (X>s3 && X<e3)
        result += 1;
    
    cout << result;
    // 7 1 10 5 6 4 40 ⇒ 2
    //10 5 15 6 100 3 30 ⇒ 3
    //10 100 200 100 101 120 170 ⇒ 0 
    return 0;
}