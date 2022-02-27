#include<iostream>
#include<algorithm>
using namespace std;


int length_of_books, length_of_users, length_of_books_borrowed_by_user ;

struct book{
    int id, quantity, borrowed_books_ids;
    string name, who_borrowed;

    void add_book() {
        cout << "Enter book info : id & name& total quantity : ";
        cin >> id >> name >> quantity;
        length_of_books++;
    }

    void print(){
         cout << "id = " << id << " name = " << name<< " total quantity = " << quantity<< " total borrowed = " << borrowed_books_ids <<"\n";
    }

};

book books[100];

// void search_books_by_prefix() {
//         string n;
//         cout << "Enter book name prefix :";
//         cin >> n;
//         for (int i = 0; i < length_of_books; ++i){
//             if (n =< books[i].name){
//                 for (int j = 0; j < length_of_books; ++j)
//                     cout << books[j].name << "\n";
//             }
//             else
//                 cout << "No books with such prefix\n";
//         }
//     }

bool compare_id(book &a, book& b){
        if(a.id < b.id)
            return true;
        return false;

    }

bool compare_name(book &a, book& b) {
    if (a.name < b.name)
        return true;
    return false;
}

void print_library_by_id() {
    sort(books, books + length_of_books , compare_id );
    for (int i = 0; i < length_of_books; ++i){
        books[i].print();
    }
}

void print_library_by_name() {
    sort(books, books + length_of_books, compare_name);
    for (int i = 0; i < length_of_books; ++i){
        books[i].print();
    }
}

struct user{
    int id;
    string name;

    void add_user() {
        cout << "Enter user name & national id: ";
        cin >> name >> id;
        length_of_users++;
    }
};

user users[100];

void user_borrow_book(int &name) {
    book borrowed[100];
    cout << "Enter user name and book name : ";
    int len = length_of_books_borrowed_by_user;
    cin >> name >> users.borrowed[len];
    len++;

    if(users.borrowed[len] == )

}



int menu(){
    int choice;
    cout << "Library Menu:\n";
    cout << "1) add_book \n";
    cout << "2) search_books_by_prefix \n";
    cout << "3) print_who_borrowed_book_by_name \n";
    cout << "4) print_library_by_id \n";
    cout << "5) print_library_by_name \n";
    cout << "6) add_user \n";
    cout << "7) user_borrow_book \n";
    cout << "8) user_return_book \n";
    cout << "9) print_users \n";
    cout << "10) Exit \n\n";

    return choice;
    
}

void run() {
    int choice = menu();
    while (true) {
    cout << "Enter your menu choice [1 - 10]: ";
    cin >> choice;
    if(choice > 10 || choice < 1)
        cout << "Invalid choice. Try again\n";
    else if (choice == 1)
        books[length_of_books].add_book();

    else if (choice == 4)
        print_library_by_id();

    else if (choice == 5)
        print_library_by_name();

    else if (choice == 6)
        users[length_of_users].add_user();



    else
        break;

    }    

}

int main() {
    run();

    return 0;
}