#include <iostream>
#include <string>
using namespace std;

// Function template to find maximum
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Explicit template argument
    cout << "Max(int): " << findMax<int>(10, 20) << endl;

    // Template argument deduction
    cout << "Max(double): " << findMax(3.14, 2.72) << endl;

    // Using with strings
    cout << "Max(string): " << findMax(string("apple"), string("banana")) << endl;

    return 0;
}
