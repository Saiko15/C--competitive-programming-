#include<iostream>
using namespace std;

int main() {

    string name1, name2;
    int id1, id2;
    double grade1, grade2;

    cout<<"What is student 1 name : ";
    cin>>name1;
    cout<<"what is his ID : ";
    cin>>id1;
    cout<<"What is his grade : ";
    cin>>grade1;

    cout<<"What is student 2 name : ";
    cin>>name2;
    cout<<"what is his ID : ";
    cin>>id2;
    cout<<"What is his grade : ";
    cin>>grade2;

    cout<<"Students Grade In Math"<<"\n";
    cout<<name1<< "(with id "<< id1 <<") got grade: "<<grade1<<"\n";
    cout<<name2<< "(with id "<< id2 <<") got grade: "<<grade2<<"\n";
    cout<<"Average grade is "<< (grade1 + grade2) / 2<<"\n";




    return 0;
}