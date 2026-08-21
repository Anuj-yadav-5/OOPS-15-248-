#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    // Private data members provide data hiding
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int number, double initialBalance)
    {
        accountHolder = name;
        accountNumber = number;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount)
    {
        if (amount <= 0){
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (amount > balance){
            cout << "Insufficient balance." << endl;
        }
        else{
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account("Anuj", 1001, 5000);

    account.display();

    cout << "\nDepositing 2000..." << endl;
    account.deposit(2000);
    account.display();

    cout << "\nWithdrawing 1500..." << endl;
    account.withdraw(1500);
    account.display();

    cout << "\nWithdrawing 7000..." << endl;
    account.withdraw(7000);

    return 0;
}