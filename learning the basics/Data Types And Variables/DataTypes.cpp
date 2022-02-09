#include<iostream>
using namespace std;

int main() {
    int age = 22;
    string name = "Ahmed";
    bool is_married = true;
    double salary = 2400.60;
    char group = 'S'; // char can be numbers from -128 to 127

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

    bool b1= -20, b2= 0, b3 = 39; // bool can be numbers. all number (Positive or negative) is 1(true) except 0 is 0(false)
    cout<<b1<<b2<<b3<<"\n";

    cout<<(3/2) + (7/2)<<"\n"; // 1 + 4 int remove the fractional part.
    cout<<(3.0/2) + (7/2.0)<<"\n";

    double a1 = 2, a2= 3, a3= 7; // don't have to be 2.0, 3.0 or 7.0. just be double is enough.
    cout<<(a2/a1) + (a3/a1)<<endl;
    return 0;
}