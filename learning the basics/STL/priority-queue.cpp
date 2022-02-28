#include<iostream>
#include<queue>
using namespace std;

void print_pq(priority_queue<int> &pq){
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";

}

int main() {
    priority_queue<int> pq;
    pq.push(20); // 20
    pq.push(30); // 30 20
    pq.push(15); // 30 20 15
    pq.push(25); // 30 25 20 15 
    pq.push(10); // 30 25 20 15 10         

    print_pq(pq);
}