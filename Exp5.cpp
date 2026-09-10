//Design a class to represent a bank account with proper data hiding and member functions for deposit and withdrawal operations. 
#include <iostream>
using namespace std;
class BankAccount {
private:
    int balance;
public:
    BankAccount(int initialBalance);
    void deposit(int amount);
    void withdraw(int amount);
    int getBalance() const;
};  
int main() {
    BankAccount account(1000); 
    cout << "Initial Balance: " << account.getBalance() << endl;

    account.deposit(500);
    cout << "Balance after deposit: " << account.getBalance() << endl;

    account.withdraw(300);
    cout << "Balance after withdrawal: " << account.getBalance() << endl;

    return 0;
}    
