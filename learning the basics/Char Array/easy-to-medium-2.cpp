// ● Read 2 strings input and str. Print YES if the given str is a suffix for the string.
// Otherwise, print NO
// ● Input ⇒ Outputs
// ○ ABCDEFG ABCD ⇒ NO
// ○ ABCDEFG ABCDEF ⇒ NO
// ○ ABCDEFG EFG ⇒ YES
// ○ ABCDEFG DEFG ⇒ YES
// ○ ABCDEFG BCD ⇒ NO
// ○ ABCDEFG DEF ⇒ NO
// ○ ABCDEFG ACEG ⇒ NO
// ○ ABCDEFG DG ⇒ NO
// ○ ABCDEFG GD ⇒ NO
// ○ ABCDEFG ABCDEFG ⇒ YES
#include<iostream>
using namespace std;

int main() {
    string input, str;
    cin >> input >> str;

    int j = input.size() - 1;
    bool is_suffix = true;
    for (int i = str.size()-1; i >= 0 ; i--){
        if (str[i] == input[j])
            is_suffix = true;
        else
            is_suffix = false;
        j--;
    }
    if (is_suffix)
        cout << "YES";
    else
        cout << "NO";
}