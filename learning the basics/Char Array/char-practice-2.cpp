#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s; // bAAAaaazz ==> b 1  a 3  z 2

    int frequency[150] = { 0 };

    for (int i = 0; i < s.size() ; i++){
        frequency[s[i]]++; 
    }

    for (char i = 'a'; i <= 'z'; i++){
        if(frequency[i])
            cout << i << " " << frequency[i] <<"\n";
    }
    
    
    
    
    
    //for ( int i = 0; i < s.size(); ++i){
    //     int count =1;
    //     bool is_upper = false;

    //     for (int j = 0 ; j < s.size(); ++j ){
    //         if (s[i] >= 'A' && s[i] <= 'z'){
    //             is_upper = true;
    //             break;
    //         }
    //         if (s[i] == s[j] )
    //             count++;
    //     }
    //     if(!is_upper)
    //         cout << s[i] <<" " << count << "\n";
    // }



}