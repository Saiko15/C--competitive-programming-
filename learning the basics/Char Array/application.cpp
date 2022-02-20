// ● Help our factory in managing his employees. Create a program that does the
// following:
// ○ Display the following choices:
// ■ Enter your choice:
// ■ 1) Add new employee
// ■ 2) Print all employees
// ■ 3) Delete by age
// ■ 4) Update Salary by name
// ○ You will keep the program running forever. Display the choices and user input from 1 to 4
// ● For choice 1: Allow the manager to enter information of an employee
// ○ Ask user to input: Name, Age, Salary and Gender letter
// ○ Add the information to your database
// ● For choice 2: Print all employees. Line per employee
// ● For choice 3: User enter to values, start age and end age
// ○ Find all employees with: start_age <= age <= end_age and remove them
// ● For choice 4: User enter name, then salary
// ○ Find the employee and update his salary
#include<iostream>
using namespace std;

int main() {
    int choice = 0;
    string name[100];
    char gender[100];
    int age[100], salary[100], i = 0;
    while (choice != -1){
        cout << "Enter your choice:\n";
        cout << "1) Add new employee\n";
        cout << "2) Print all employees\n";
        cout << "3) Delete by age\n";
        cout << "4) Update Salary by name\n";
        
        cin >> choice;
        
        if (choice == 1){
            cout << " Enter name :";
            cin >> name[i];
            cout << " Enter age :";
            cin >> age[i];
            cout << " Enter salary :";
            cin >> salary[i];
            cout << " Enter gender :";
            cin >> gender[i];
            i++;
        }
        else if (choice == 2){
            for (int j = 0 ; j < i; ++j){
                if (age[j] != -1)
                    cout << name[j] << " " << age[j] << " " << salary[j] <<  " " << gender[j] << "\n";
            }
        }
        else if (choice == 3){
            int start_age, end_age;
            cout << "Enter start age and end age : ";
            cin >> start_age >> end_age;

            for (int j = 0; j < i; ++j){
                if (age[j] >= start_age && age[j] <= end_age ){
                    
                    age[j] = -1;
                    
                }
            }
        }

        else if (choice == 4){
            int update_salary_by_name;
            string updated_name;
            cout << "Enter name : ";
            cin >> updated_name;
            for (int j = 0 ; j < i; ++j){
                if(updated_name == name[j]){
                    cout << "Enter Salary : ";
                    cin >> update_salary_by_name;
                    salary[j] = update_salary_by_name;
                }


            }
        }

        

        
    }
}