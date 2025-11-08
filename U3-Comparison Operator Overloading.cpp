#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    void getData() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    int area() {
        return length * breadth;
    }

    // Overload > operator to compare rectangle areas
    bool operator>(Rectangle r) {
        return this->area() > r.area();
    }
};

int main() {
    Rectangle r1, r2;

    r1.getData();  // Input first rectangle
    r2.getData();  // Input second rectangle

    if (r1 > r2)
        cout << "Rectangle 1 is larger" << endl;
    else
        cout << "Rectangle 2 is larger" << endl;

    return 0;
}
