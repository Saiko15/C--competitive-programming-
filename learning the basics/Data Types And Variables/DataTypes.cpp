#include<iostream>
using namespace std;

int main() {
    int age = 22;
    string name = "Ahmed";
    bool status = true;
    double salary = 2400.60;
    char ch = 'S';

    cout<<"My name is "<<name<<". I'm "<<age<<". My monthly salary is "<<salary<<endl; 

    // Declare 
    int a;
    // Assign
    a = 55;
    // get
    cout<<a<<endl;
    //Reassign
    a=60;
    cout<<"2n + 1 = "<<a * 2 + 1<<endl;

    int age1; //unitialliezed: Garbage. DON'T.
    int age2 = 22; // C-style, popular
    int age3 (30); // constructor intiallization
    int age4 {40}; // Modern intiallization: The Preferred 
    return 0;
}