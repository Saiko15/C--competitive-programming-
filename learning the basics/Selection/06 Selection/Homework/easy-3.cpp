#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= 100 && b >= 100 && c>=100)
        cout << -1 << "\n";
    else if (a >= 100 && b >= 100 && c<100)
        cout << c << "\n";
    else if (a >= 100 && b < 100 && c>=100)
        cout << b << "\n";
    else if (a < 100 && b >= 100 && c>=100)
        cout << a << "\n";
    else if (a < 100 && b < 100 && c>=100)
    {
        if (a < b)
            cout << b <<"\n";
        else
            cout << a<<"\n";
    }  
    else if (a < 100 && b >= 100 && c<100)
    {
        if (a < c)
            cout <<  c <<"\n";
        else
            cout << a<<"\n";
    }   
    else if (a >= 100 && b < 100 && c<100)
    {
        if (c < b)
            cout << b <<"\n";
        else
            cout <<c<<"\n";
    } 
    else if (a < 100 && b < 100 && c<100)
    {
        if (a < b && a < c)
        {
            if (b<c)
                cout << c <<"\n";
            else
                cout <<  b <<"\n";

        }
        else if (b < a && b < c)
        {
            if (a<c)
                cout << c <<"\n";
            else
                cout << a <<"\n";
        }
        else
        {
            if (a<b)
                cout <<  b <<"\n";
            else
                cout <<  a <<"\n";

        }
    } 


    
    return 0;
}