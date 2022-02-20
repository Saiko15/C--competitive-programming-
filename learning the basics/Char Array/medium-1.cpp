// ● Read a string of letters and then compress each group of same letter
// ○ E.g. if the sub-string is cccc ⇒ c4
// ○ Use _ between each group
// ● Input ⇒ Outputs
// ○ ccccDDDxxxxxxxxe ⇒ c4_D3_x8_e1
// ○ xxxxxxxx ⇒ x8
#include<iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count = 1;

    for (int i = 0; i < str.size() ; i++){
        if ( str[i] == str[i+1])
            count++;
        else{
            cout << str[i] << count;
            count = 1;
            if (i != str.size()-1)
                cout << "_";

        }
    }
}