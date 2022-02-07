#include<iostream>
using namespace std;

int main(){
    // cout<<"Hello World"<<endl;
    cout<<"Hello World ";
    cout<<"I'm Ahmed";
    cout<<endl;

    cout<<"Hello World\n";
    cout<<"I'm Ahmed"; 
    cout<<endl;

    //return 0; if we put return 0 here all after that will be ignored cuz return 0 means we are done

    cout<<"Hello World"<<endl;
    cout<<"I'm Ahmed";
    cout<<endl;


    cout<<"Hello World "<<"I'm Ahmed"<<endl<<"I live in Cairo"<<endl; // << called Extraction Operater

    cout<<"Hello World\n I'm Ahmed\n I live in Cairo\n";

    cout<<123<<"\n"; // 123 is a number
    cout<<"123"<<"\n"; // 123 is not a number

    cout<<1234<<"\n";
    cout<<1234<<"\n\n";

    cout<<12<<34<<"\n";
    cout<<1234<<"\n";
    cout<<endl;

    cout<<1+2+3<<"\n";
    cout<<"1+2+3"<<"\n";
    cout<<"1+2+3 = "<<1+2+3<<"\n";
        cout<<endl;

    cout<<6/2<<"\n"; // 3
    cout<<7/2<<"\n"; // also 3 because it's an integer
    cout<<7.0/2.0<<"\n"; // 3.5 because it's double
    cout<<endl;

    cout<<10*10*10*10*10*10*10*10*10<<"\n";
    cout<<10*10*10*10*10*10*10*10*10*10<<"\n"; //overflow happens becuase integer have limits numbers
    cout<<"\n10*10*10*10*10*10*10*10*10*"<<"\n"; // \n can be in the beginning not necessary to be at the end

    
    return 0;
}