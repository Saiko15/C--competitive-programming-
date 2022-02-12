#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if(age > 35) // (age == 40) NOT (age = 40) ==> it's assignment not eguality
    {            // (age) it will true because if age != 0 then it's true. be careful
        int x= 2;
        cout<<"you're old\n";
        cout<< 2 * age + x;
    }
    // x = 8; // can't access x here it's local and invisible outside the braces  
    cout<<"bye";
}