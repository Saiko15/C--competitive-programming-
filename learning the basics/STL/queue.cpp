#include<iostream>
#include<queue>
using namespace std;


void print_q(queue<int> &q){            // & by referrence make it same in memory
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

int main() {

    queue<int> q;
    q.push(10);
    q.push(15);
    q.push(17);
    q.push(20);

    print_q(q);             // 10 15 17 20 -- if not by referrence will be 10 15 17 20 

    q.push(30);
    print_q(q);             // 30                                          10 10 15 17 20 30         

}