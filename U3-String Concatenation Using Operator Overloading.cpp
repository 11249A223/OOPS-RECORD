#include <iostream>
#include <string.h>
using namespace std;

class StringConcat {
    char str[50];

public:
    void getString() {
        cout << "Enter string: ";
        cin >> str;
    }

    // Overload + operator to concatenate two strings
    StringConcat operator+(StringConcat s) {
        StringConcat temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void display() {
        cout << "Resultant String: " << str << endl;
    }
};

int main() {
    StringConcat s1, s2, s3;

    s1.getString();  // Get first string
    s2.getString();  // Get second string

    s3 = s1 + s2;    // Concatenate using overloaded + operator

    s3.display();    // Display concatenated result

    return 0;
}
