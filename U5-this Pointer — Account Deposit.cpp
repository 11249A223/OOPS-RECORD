#include <iostream>
using namespace std;

class Account {
    double balance;

public:
    Account(double b = 0.0) : balance(b) {}

    void deposit(double balance) { 
        this->balance += balance; // update member variable
    }

    void show() const { 
        cout << "Balance: " << balance << endl; 
    }
};

int main() {
    Account a(1000.0);
    a.show();           // Balance: 1000
    a.deposit(500.0);   
    a.show();           // Balance: 1500
    return 0;
}
