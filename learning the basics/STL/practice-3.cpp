#include<iostream>
#include<map>
#include<stack>
using namespace std;

bool is_valid(string s){ // ([])
    map<char, char> mp;
    mp[')'] = '(';
    mp['}'] = '{';
    mp[']'] = '[';

    stack<char> parentheses;

    for (char ch : s){
        if (mp.count(ch)){
            if (parentheses.empty())
                return false;
            
            char close = mp[ch];
            char open = parentheses.top();
            if (open != close)
                return false;
            parentheses.pop();
        }
        else
            parentheses.push(ch); 
    } 

    return parentheses.empty();
    
    
    //return true;
}

int main() {

    cout << is_valid("([])");
    cout << is_valid("([({[()]})])");
    cout << is_valid("([({[()])");
    // map<char, char> mepo;
    // mepo[')'] = '(';
    // mepo['}'] = '{';
    // mepo[']'] = '[';

    // cout << mepo[')'] ;
    // cout << mepo.count('{');
    // cout << mepo.count('}');
}