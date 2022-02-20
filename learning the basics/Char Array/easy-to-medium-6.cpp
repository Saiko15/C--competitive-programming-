// ● Read a string, then divide it to consecutive groups of same letter. Print each
// group
// ● Input ⇒ outputs.
// ○ “111222aabbb” ⇒ 111 222 aa bbb
// ○ HHHH ⇒ HHHH
#include<iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 1; i < str.size() ; i++){
        if (str[i] == str[i-1])
            cout << str[i];
        else
            cout << str[i-1] << " ";

        if(i == str.size() -1)
            cout << str[i];
    }
}