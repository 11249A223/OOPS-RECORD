#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    void getData() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    // Overload the + operator
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.getData();  // Get first complex number
    c2.getData();  // Get second complex number

    c3 = c1 + c2;  // Add using overloaded + operator

    cout << "Sum = ";
    c3.display();  // Display result

    return 0;
}
