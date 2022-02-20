// ● Read 2 strings input and str. Print YES if the given str is a subsequence for
// the string. Otherwise, print NO
// ● Input ⇒ Outputs
// ○ ABCDEFG ABCD ⇒ YES
// ○ ABCDEFG ABCDEF ⇒ YES
// ○ ABCDEFG EFG ⇒ YES
// ○ ABCDEFG DEFG ⇒ YES
// ○ ABCDEFG BCD ⇒ YES
// ○ ABCDEFG DEF ⇒ YES
// ○ ABCDEFG ACEG ⇒ YES
// ○ ABCDEFG DG ⇒ YES
// ○ ABCDEFG GD ⇒ NO
// ○ ABCDEFG ABCDEFG ⇒ YES
#include<iostream>
using namespace std;

int main() {
    string input, str;
    cin >> input >> str;

    int j = 0;
    bool is_subsequence = true;
    for (int i = 0; i < input.size() ; ++i){
        
        if (input[i] == str[j]){
            ++j;
            if (j == str.size()){
                is_subsequence = true;
                break;
            }
        }
        else
            is_subsequence = false;

    }
    if(is_subsequence)
        cout << "YES";
    else
        cout << "NO";
}