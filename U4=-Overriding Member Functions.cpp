#include <iostream>
using namespace std;

class Account {
public:
    virtual void displayBalance() {
        cout << "Generic account balance.\n";
    }
};

class Savings : public Account {
public:
    void displayBalance() override {
        cout << "Savings Account Balance: ₹5000\n";
    }
};

class Current : public Account {
public:
    void displayBalance() override {
        cout << "Current Account Balance: ₹10000\n";
    }
};

int main() {
    Account *acc;  // Pointer to base class
    Savings s;
    Current c;

    acc = &s;      // Point to Savings object
    acc->displayBalance();  // Calls Savings version

    acc = &c;      // Point to Current object
    acc->displayBalance();  // Calls Current version

    return 0;
}
