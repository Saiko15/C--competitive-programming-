// ● Read integer N, then read N strings.
// ○ Print only the strings (of 2 letters).
// ○ These 2 letters must be letter ‘N’ and letter ‘O’
// ■ Regardless of lower or upper case
// ■ Regardless of the 2 letters order
// ■ E.g. print “No”, “ON”, “no” but ignore e.g. “YEs”, “Noooo”
// ■ That is: a word of 2 letters only N and O
// ● Input
// ○ 9 Yss NO noOO oN Mostafa no nN oOOooo oO
// ● Output
// ○ NO oN no

#include<iostream>
using namespace std;

int main() {
    int N;
    string s = " ";
    cin >> N;

    while (N > 0)
    {
        cin >> s;
        if (s == "NO" || s == "ON" || s == "oN" || s == "On" || s == "on" || s== "No" || s == "nO" || s == "no")
        {
            cout << s << "\n";
        }
        N--;
        
    }
}