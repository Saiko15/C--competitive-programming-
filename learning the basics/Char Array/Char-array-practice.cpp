#include<iostream>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T; // AM CICPC => ACMICPC,  abc defghi => adbecfghi


    for (int i = 0; i < T.size() ; i++){
            
            if ( i < S.size()  )
                cout << S[i];
                
            if ( i < T.size())
                cout << T[i];
            
        
    } 


}