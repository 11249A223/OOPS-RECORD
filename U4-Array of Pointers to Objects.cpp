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
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Array of pointers to Student objects
    Student *s[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        s[i] = new Student; // dynamically allocate memory
        s[i]->getData();
    }

    cout << "\nStudent Details:\n";
    // Display data and free memory
    for (int i = 0; i < n; i++) {
        s[i]->showData();
        delete s[i]; // free memory
    }

    return 0;
}
