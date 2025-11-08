#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char *str;

public:
    // Constructor
    MyString(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Display function
    void display() {
        cout << str << endl;
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");

    s1.display();
    s2.display();

    return 0;
}
