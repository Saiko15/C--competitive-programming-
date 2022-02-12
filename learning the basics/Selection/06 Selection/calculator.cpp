#include<iostream>
using namespace std;

int main() {
    char operation;
    double x, y;

    cin >> x >> operation >> y;
    if (operation == '+')
    {   
        cout<<x+y;
    }
    else if (operation == '-')
    {
        cout<<x-y;
    }
    else if (operation == '/')
    {
        cout<<x/y;
    }
    else if (operation == '*')
    {
        cout<<x*y;
    }
    else
        cout << "write the right operation" ;

    return 0;
}