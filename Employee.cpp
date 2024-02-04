#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include "Person.cpp"
using namespace std;

// Employee class derived from Person
class Employee:public Person {
private:
    double salary;
public:
    Employee(const string& name, int age, double salary)
        : Person(name, age), salary(salary) {}

    double getSalary() const { return salary; }
    void updateName(const string& newName) {
        name = newName;
    }

    void display() const override {
       cout <<"Employee Details" << endl;
       cout << "Name: " << name << endl;
       cout << "Age: " << age << endl;
        cout << "Salary: " << salary <<endl;
    }
   
};


