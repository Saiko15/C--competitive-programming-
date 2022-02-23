#include<iostream>
using namespace std;

int statuses[20][6], length[20], spec, stat, spec_num;
    string names[20][6], name;

void print_choices(){
    cout << "Enter your choice:\n";
    cout << "1) Add new patient\n";
    cout << "2) Print all patients\n";
    cout << "3) Get next patient\n";
    cout << "4) Exit\n";
}

void add_patient(){
    cout << "Enter specialization, name, status: ";
    cin >> spec >> name >> stat;
    int pos = length[spec];
    if (pos >= 5)
        cout << "Sorry we can't add more patients for this specialization.";
    else {
    specializations[count] = spec;
    names[count] = name;
    statuses[count] = stat;
    count++;
    }
}

void print_patient(){
    int tmp;
    
            cout << "There are " << count << " patients in specialization " << specializations[count] <<"\n";
            for (int i = 0; i < count; ++i){
                if (statuses[i] == 0)
                    cout << names[i] <<" regular\n";
                else
                    cout << names[i] << " urgent\n";
            } 
    
}
           
void get_next_patients(){
    cout << "Enter specialization :";
    cin >> spec_num;
    for (int i = 0; i <= count; ++i){
        if(spec_num == specializations[count]){
            cout << names[count] <<" please go with the Dr \n";
            count--;
        }
        else
            cout << "No patients at the moment. Have rest, Dr\n";
    }
}


int main() {
    
    while(true)
    {
        int choice;
        
        print_choices();
        cin >> choice;

        if (choice < 1 || choice > 4)
            cout <<"Invalid choice. Try again\n";

        if(choice == 1)
            add_patient();
        
        if (choice == 2)
            print_patient();

        if (choice == 3)
            get_next_patients();


        if (choice == 4)
            break;
        
    }
}