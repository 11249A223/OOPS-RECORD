#include <iostream>
using namespace std;

class Department {
public:
    string deptName;

    // Constructor
    Department(string d) {
        deptName = d;
        cout << "Department " << deptName << " created." << endl;
    }

    // Destructor
    ~Department() {
        cout << "Department " << deptName << " destroyed." << endl;
    }
};

class University {
    string uniName;
    Department dept;  // Composition: University "has a" Department

public:
    // Constructor using member initializer list
    University(string u, string d) : uniName(u), dept(d) {
        cout << "University " << uniName << " initialized." << endl;
    }

    // Display function
    void display() {
        cout << "University: " << uniName
             << ", Department: " << dept.deptName << endl;
    }

    // Destructor
    ~University() {
        cout << "University " << uniName << " closed." << endl;
    }
};

int main(
