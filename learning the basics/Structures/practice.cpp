// ● Define a class, name it queue. It should internally have an array and support
// following operations
// ○ void add_end(int value): add to the end of current array
// ○ void add_front(int value): add to the front of this array
// ○ int remove_front(): remove the front value and remove it. Return the value
// ○ void print(): print the array
#include<iostream>
using namespace std;

struct queue {
    int arr[100]{};
    int added = 0;
    void shift_right() {
        for (int i = added; i > 0; --i){
            arr[i] = arr[i-1];
        }
    }

    void shift_left(){
        for (int i = 0; i < added-1; ++i){
            arr[i] = arr[i+1];
        }
    }

    void add_end(int value){
        arr[added] = value;
        added++;
    }

    void add_front(int value){
        shift_right();
        arr[0] = value;
        added++;
    }

    int remove_front(){
        int val = arr[0];
        shift_left();
        added--;
        return val;
    }

    void print(){
        for (int i = 0; i < added; ++i){
            cout << arr[i]<<" ";
        }
    }
};

int main() {
    queue my_queue;
    my_queue.add_end(5);
    my_queue.add_end(6);
    my_queue.add_end(7);
    my_queue.add_end(8);
    my_queue.add_front(4);
    my_queue.add_front(3);
    cout << my_queue.remove_front() << "\n";
    my_queue.print();
}