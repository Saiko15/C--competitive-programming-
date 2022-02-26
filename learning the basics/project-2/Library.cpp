#include<iostream>
#include<algorithm>
using namespace std;


int length;

struct book{
    int id, quantity, borrowed_books_ids;
    string name, who_borrowed;



    void add_book() {
        cout << " Enter book info : id & name& total quantity : ";
        cin >> id >> name >> quantity;
        length++;
    }

    void search_books_by_prefix() {
        string n;
        cout << "Enter book name prefix :";
        cin >> n;
        for (int i = 0; i < length; ++i){
            if (n =< books[i].name){
                for (int j = 0; j < length; ++j)
                    cout << books[j].name << "\n";
            }
            else
                cout << "No books with such prefix\n";
        }
    }

    bool compare_id(book &a, book& b){
        if(a.id < b.id)
            return true;
        return false;

    }

    void print_library_by_id() {
        sort(books[length], compare_id );
        for (int i = 0; i < length; ++i){
            cout << "id = " << books[i].id << " name = " << books[i].name<< " total quantity = " << books[i].quantity<< " total borrowed = " << books[i].borrowed_books_ids;
        }
    }
};

book books[100];

struct user{
    int id[100];
    string name[100], borrowed[100];
};


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

    cin >> choice;

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
        books[length].add_book();

    else if (choice == 4)
        books.print_library_by_id();



    else
        break;

    }    

}

int main() {

}