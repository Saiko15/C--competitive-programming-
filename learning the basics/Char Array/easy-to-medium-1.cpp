// ● Read 2 strings input and str. Print YES if the given str is a prefix for the string.
// Otherwise, print NO
// ● Input ⇒ Outputs
// ○ ABCDEFG ABCD ⇒ YES
// ○ ABCDEFG ABCDEF ⇒ YES
// ○ ABCDEFG EFG ⇒ NO
// ○ ABCDEFG DEFG ⇒ NO
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

    bool is_prefix = true;
    for (int j = 0; j < str.size(); j++){
        if (str[j] != input[j]){ 
            is_prefix = false;
             break;
        }
        else
            is_prefix = true;
    }
    if (is_prefix)
        cout << "YES";
    else
        cout << "NO";
    
}