// ● Given N, read N (!unique) strings. Then Read Q queries, for each query: print
// all strings that start with this prefix. Print them ordered no duplicate.
// ● 5
// ○ mostafa
// ○ morad
// ○ nawal
// ○ marwa
// ○ mostafa
// ● 4
// ○ m => [marwa morad mostafa]
// ○ mo => [morad mostafa]
// ○ mos => [mostafa]
// ○ naw => [nawal]
#include<iostream>
#include<map>
#include<set>
using namespace std;

int main(){
    map<string, set<string>> mp;
    int N, Q;

    string str;
    cin >> N;

    while(N--){
        cin >>str; //mostafa morad nawal marwa

        string s="";
        for (auto c : str)
            s += c, mp[s].insert(str); 

    }

    cin >> Q;
    while(Q--)
    {
        cin >> str; //m mo mos naw
        for (auto s : mp[str])
           cout << s << " ";
        cout << "\n";
        
    }
    
    return 0;
}