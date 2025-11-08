#include <iostream>
using namespace std;

class Book {
    string title, author;
    float price;

public:
    // Default constructor
    Book() {
        title = "";
        author = "";
        price = 0;
    }

    // Parameterized constructor
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    // Copy constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    // Display function
    void display() {
        cout << "Title: " << title
             << ", Author: " << author
             << ", Price: " << price << endl;
    }
};

int main() {
    Book b1; // Default constructor
    Book b2("C++ Programming", "Bjarne Stroustrup", 750.50); // Parameterized constructor
    Book b3(b2); // Copy constructor

    cout << "Default Constructor Object:" << endl;
    b1.display();

    cout << "Parameterized Constructor Object:" << endl;
    b2.display();

    cout << "Copy Constructor Object:" << endl;
    b3.display();

    return 0;
}
