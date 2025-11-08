#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    void getData() {
        cout << "Enter Roll and Name: ";
        cin >> roll >> name;
    }

    void showData() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    Student *ptr;

    ptr = &s1;       // Pointer points to the object
    ptr->getData();  // Access member function using pointer
    ptr->showData(); // Access member function using pointer

    return 0;
}
