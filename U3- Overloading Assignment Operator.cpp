#include <iostream>
#include <string.h>
using namespace std;

class Book {
    char title[50];
    float price;

public:
    void getData() {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter price: ";
        cin >> price;
    }

    // Overload assignment operator
    void operator=(Book &b) {
        strcpy(title, b.title);
        price = b.price;
    }

    void display() {
        cout << "Title: " << title << ", Price: " << price << endl;
    }
};

int main() {
    Book b1, b2;

    b1.getData();  // Input book details

    b2 = b1;       // Use overloaded = operator

    cout << "\nCopied Book Details:\n";
    b2.display();  // Display copied data

    return 0;
}
