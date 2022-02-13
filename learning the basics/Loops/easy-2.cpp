// Input: Read an integer N followed by a single character
// ● Output: Print the character N times as below
// ● Input ⇒ Output
// ○ 5 Y ⇒ YYYYY
// ○ 3 # ⇒ ###
#include<iostream>
using namespace std;

int main() {
    int N;
    char ch;
    cin>> N >> ch;

    while (N> 0)
    {
        cout<<ch;
        N--;
    }
    return 0;
}