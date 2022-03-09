// Given N, read N unique strings. Then Read Q queries, for each query: print
// all strings that start with this prefix. Print use input order. Use a map
// ● 4
// ○ mostafa
// ○ morad
// ○ nawal
// ○ marwa
// ● 4
// ○ m => [mostafa morad marwa]
// ○ mo => [mostafa morad]
// ○ mos => [mostafa]
// ○ naw => [nawal]
#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    map<string, vector<string>> mp;
    int N, Q;

    string str;
    cin >> N;

    while(N--){
        cin >>str; //mostafa morad nawal marwa

        string s="";
        for (auto c : str)
            s += c, mp[s].push_back(str); 

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