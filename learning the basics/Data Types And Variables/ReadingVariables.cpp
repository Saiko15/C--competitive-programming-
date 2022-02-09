#include<iostream>
using namespace std;

int main(){
    /*
    int num;                        //Declare Variable in memory : num

    cout<<"Enter a number\n";       //Print Enter a number

    cin>>num;                       //Trying to read a number, Compiler here FREEZES, it waits you enter a numebr.
                                        
    cout<<"************\n";
    cout<<2 * num + 1<<endl;
    */
    int a, b;

    cout<<"Enter two numbers"<<endl;

    cin>> a >> b;

    cout<<"Result of Addition :"<< a + b <<"\n";
    cout<<"Result of Multiplication :"<< a * b <<"\n";

    return 0;
}