// ● Develop a function that do reverse for the string. Function is:
// ● string reverse_str(const string & str);
// ○ Don’t try to change str content or you will get compilation error 
#include<iostream>
using namespace std;

string reverse_str(const string & str){
    string alt = str;
    int l = str.size() -1;
    int cnt = 0;
    for (; cnt < l; cnt++){
        int tmp = alt[l];
        alt[l] = alt[cnt];
        alt[cnt] = tmp;
        l--;
    }
    return alt;
}


int main() {

    cout << reverse_str("abcde");
}