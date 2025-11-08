#include <iostream>
using namespace std;

class Temperature {
    float celsius;
public:
    void getData() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    // Overloading unary minus (-) operator
    void operator-() {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    Temperature t;
    t.getData(); // Input temperature in Celsius
    -t;          // Convert and display in Fahrenheit using operator overloading
    return 0;
}
