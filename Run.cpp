#include <iostream>
#include "EmployeeManagement.cpp"
#include "Inputvalidation.h"
using namespace std;
 
class Run {
public:
    void displayMenu() {
        string name;
        int age;
        double salary;
        EmployeeManagement em;
        while (true) {
            cout << "Employee Management System" << endl;
            cout << "1. Add Employee" << endl;
            cout << "2. Display All Employees" << endl;
            cout << "3. Quit" << endl;
            int choice;
            cout << "Choice: ";
            //int input validation
            if (!getInputInt(choice, "Invalid choice. Please enter a valid integer.", 1, 3))
                continue;

            if (choice == 1) {
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, name);

                cout << "Enter age: ";
                cin >> age;

                cout << "Enter salary: ";
                cin >> salary;

                em.addEmployee(Employee(name, age, salary));
                cout << "Employee added successfully." << endl;
            }
            else if (choice == 2) {
                cout << "" << endl;
                em.displayAllEmployees();
            }
            else if (choice == 3) {
                break;
            }
            else {
                cout << "Invalid choice. Please enter a valid option." << endl;
            }
        }


    }
};