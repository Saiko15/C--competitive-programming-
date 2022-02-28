#include<iostream>
#include<queue>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(20);
    dq.push_front(15);
    dq.push_back(60);
    dq.push_front(30);
    dq.push_back(25);

    cout << dq.front();
    cout << dq.back();

    dq.pop_back();
    cout << dq.back();

    dq.pop_front();
    cout << dq.front();

}