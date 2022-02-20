// ● Read 2 strings input and str. Print YES if the given str is a substring for the
// string. Otherwise, print NO
// ● Input ⇒ Outputs
// ○ ABCDEFG ABCD ⇒ YES
// ○ ABCDEFG ABCDEF ⇒ YES
// ○ ABCDEFG EFG ⇒ YES
// ○ ABCDEFG DEFG ⇒ YES
// ○ ABCDEFG BCD ⇒ YES
// ○ ABCDEFG DEF ⇒ YES
// ○ ABCDEFG ACEG ⇒ NO
// ○ ABCDEFG DG ⇒ NO
// ○ ABCDEFG GD ⇒ NO
// ○ ABCDEFG ABCDEFG ⇒ YES
#include<iostream>
using namespace std;

int main() {
    string input, str;
    cin >> input >> str;

    int j = 0;
    bool is_substring = true;
    for (int i = 0; i < input.size() ; i++){
        if (input[i] == str[j]){
            for (int j = 0; j < str.size(); j++){
                if (input[i] == str[j]){
                    is_substring = true;
                    i++;
                }
                else
                    is_substring = false;
            }
            if(is_substring)
                break;
        }
        else
            is_substring = false;
    }
    if(is_substring)
        cout << "YES";
    else    
        cout << "NO";
}