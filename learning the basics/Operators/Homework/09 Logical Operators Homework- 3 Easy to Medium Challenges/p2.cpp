#include<iostream>
using namespace std;
/*
● nb greater than 25
● ng less than or equal to 30
● nb > 20 and nt > 2 or ng > 30 and nt > 4
● Either nb < 60 or ng < 70
● Neither nb >= 60 nor ng >= 70
● nb is 10 more students than ng
● Difference between nb and ng is more than 10 or nt > 5
● Either nb is 10 more students than ng or ng is 15 more students than nb
*/
int main(){
    int nb, ng, nt;
    cin >> nb >> ng >> nt;
    cout<< (nb > 25)<< "\n";
    cout<< (ng <= 30)<< "\n";
    cout<< ((nb > 20 && nt > 2 )||( ng> 30 && nt> 4))<< "\n";
    cout<< (nb< 60|| ng< 70)<< "\n";
    cout<< (!(nb>= 60)|| !(ng>= 70))<< "\n"; // (Neither) ! before prantheses 
    cout<< (nb == ng + 10)<< "\n";
    cout<< ((nb-ng> 10 || nt> 5))<< "\n"; // More than 10 is >10 not ==10
    cout<< ((nb=ng + 10)|| ( ng=nb+ 15))<< "\n";

    return 0;


}