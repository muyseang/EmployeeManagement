#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include "Employee.cpp"
using namespace std;

class EmployeeManagement {
private:
    vector<Employee> employees;

public:
    void addEmployee(const Employee& employee) {
        employees.push_back(employee);
        saveToFile();
    }

    void displayAllEmployees() {
        loadFromFile();
        for (const auto& employee : employees) {
            employee.display();
            cout <<endl;
        }

    }
    void saveToFile(const string& filename = "employees.txt") const {
        ofstream file(filename);
        if (file.is_open()) {
            for (const auto& employee : employees) {
                file << employee.getName() << ","
                    << employee.getAge() << ","
                    << employee.getSalary() << endl;
            }
            file.close();
            cout << "Data saved to file." << endl;
        }
        else {
            cerr << "Error opening file." << endl;
        }
    }

    void loadFromFile(const string& filename = "employees.txt") {
        ifstream file(filename);
        if (file.is_open()) {
            employees.clear();
            string line;
            while (getline(file, line)) {
                string name;
                int age;
                double salary;
                stringstream ss(line);
                getline(ss, name, ',');
                ss >> age;
                ss.ignore();
                ss >> salary;
                ss.ignore();
                employees.emplace_back(name, age, salary);
            }
            file.close();
            cout << "Data loaded from file." << endl;
        }
        else {
            cerr << "Error opening file." << endl;
        }
    }

    

};

