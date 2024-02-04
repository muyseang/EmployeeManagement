#include <string>
#include <iostream>
using namespace std;

class Person {
protected:
   string name;
    int age;

public:

    Person(const string& name, int age)
        : name(name), age(age) {}

    string getName() const { return name; }
    int getAge() const { return age; }

    virtual ~Person() {}

    virtual void display() const = 0;
};
