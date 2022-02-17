// ● Read a string and do the following conversions for its letters
// ○ If it is an upper letter, don’t change
// ○ If it is lower letter, use this map of 26 letters:
// ■ abcdefghijklmnopqrstuvwxyz
// ■ YZIMNESTODUAPWXHQFBRJKCGVL
// ■ E.g. a ⇒ Y and z ⇒ L
// ○ If it is digit, use this map of 10 letters:
// ■ 0123456789
// ■ !@#$%^&*()
// ● Input ⇒ Output
// ○ acMNmn39 ⇒ YIMNPW$)
// ○ vwXYZ0123 ⇒ KCXYZ!@#$
#include<iostream>
using namespace std;

int main() {
    string s;
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string upper = "YZIMNESTODUAPWXHQFBRJKCGVL";
    string digit = "0123456789";
    string symbol= "!@#$%^&*()";
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        for (int j = 0 ; j < lower.size(); j++){
            if (s[i] == lower [j])
                s[i] = upper[j];
        }
        for (int k = 0 ; k < digit.size(); k++){
            if (s[i] == digit[k])
                s[i] = symbol[k];
        }

    }
    cout << s;

}
