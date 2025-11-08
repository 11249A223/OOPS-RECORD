#include <iostream>
using namespace std;

class Loan;

class Account {
    float balance;
public:
    void getBalance() {
        cout << "Enter account balance: ";
        cin >> balance;
    }
    friend void checkEligibility(Account, Loan);
};

class Loan {
    float loanAmount;
public:
    void getLoan() {
        cout << "Enter loan amount: ";
        cin >> loanAmount;
    }
    friend void checkEligibility(Account, Loan);
};

void checkEligibility(Account a, Loan l) {
    if (a.balance >= 2 * l.loanAmount) {
        cout << "✅ Eligible for loan" << endl;
    } else {
        cout << "❌ Not eligible for loan" << endl;
    }
}

int main() {
    Account acc;
    Loan ln;

    acc.getBalance(); // User inputs the account balance
    ln.getLoan();     // User inputs the loan amount
    checkEligibility(acc, ln); // Checking eligibility based on balance and loan amount

    return 0;
}
