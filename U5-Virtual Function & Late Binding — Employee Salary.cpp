#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;

public:
    Employee(const string& n = "") : name(n) {}

    // Virtual function for salary calculation
    virtual double calculateSalary() { return 0.0; }

    // Virtual function to display employee details
    virtual void show() {
        cout << "Employee: " << name << ", Salary: " << calculateSalary() << endl;
    }

    virtual ~Employee() {} // Virtual destructor
};

class FullTime : public Employee {
    double basic, bonus;

public:
    FullTime(const string& n, double b, double bo) : Employee(n), basic(b), bonus(bo) {}

    double calculateSalary() override {
        return basic + bonus;
    }

    void show() override {
        cout << "FullTime: " << name << ", Salary: " << calculateSalary() << endl;
    }
};

class PartTime : public Employee {
    double hourlyRate;
    int hours;

public:
    PartTime(const string& n, double r, int h) : Employee(n), hourlyRate(r), hours(h) {}

    double calculateSalary() override {
        return hourlyRate * hours;
    }

    void show() override {
        cout << "PartTime: " << name << ", Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee* e1 = new FullTime("Alice", 40000, 5000);
    Employee* e2 = new PartTime("Bob", 300.0, 80);

    // Late binding: calls derived class implementations
    e1->show();
    e2->show();

    // Free allocated memory
    delete e1;
    delete e2;

    return 0;
}
