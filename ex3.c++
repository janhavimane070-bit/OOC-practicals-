#include <iostream>
#include <string>
using namespace std;


class Account
{
protected:
    int accountNo;
    string name;
    double balance;

public:
    Account(int accNo, string n, double bal)
    {
        accountNo = accNo;
        name = n;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    virtual void accountStatement()
    {
        cout << "\n----- Account Statement -----\n";
        cout << "Account No : " << accountNo << endl;
        cout << "Name       : " << name << endl;
        cout << "Balance    : " << balance << endl;
    }
};


class SavingsAccount : public Account
{
public:
    SavingsAccount(int accNo, string n, double bal)
        : Account(accNo, n, bal)
    {
    }

    void accountStatement() override
    {
        cout << "\n----- Savings Account -----\n";
        cout << "Account No : " << accountNo << endl;
        cout << "Name       : " << name << endl;
        cout << "Balance    : " << balance << endl;
    }
};


class CheckingAccount : public Account
{
public:
    CheckingAccount(int accNo, string n, double bal)
        : Account(accNo, n, bal)
    {
    }

    void accountStatement() override
    {
        cout << "\n----- Checking Account -----\n";
        cout << "Account No : " << accountNo << endl;
        cout << "Name       : " << name << endl;
        cout << "Balance    : " << balance << endl;
    }
};

int main()
{
    int choice;
    double amount;

    SavingsAccount savings(101, "Janhavi", 5000);

    cout << "===== BANKING SYSTEM =====\n";

    do
    {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Account Statement";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            savings.deposit(amount);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            savings.withdraw(amount);
            break;

        case 3:
            savings.accountStatement();
            break;

        case 4:
            cout << "Thank you for using Banking System.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
