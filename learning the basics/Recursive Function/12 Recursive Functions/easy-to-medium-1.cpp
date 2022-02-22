// ● Implement 3n+1 function to compute the length of the sequence
// ● int length_3n_plus_1(int n)
// ● E.g. length_3n_plus_1(6) ⇒ 9
#include<iostream>
using namespace std;
int len=1;
void sequence(int n){
    
    // cout << n << " ";
    if (n == 1)
        return;
    else if(n % 2== 0){
        sequence(n/2);
        len++;
    
    }
    else if (n%2==1){
        sequence(3*n + 1);
        len++;

    }   
}
int length_3n_plus_1(int n){
    sequence(n);
    return len;
    
}

int main() {
    cout <<length_3n_plus_1(6); 
}