#include <string>

class Account {
  double balance;
  unsigned int accountNumber;
 public:
  explicit Account(double);
  Account(double, unsigned int);
  double getBalance();
  unsigned int getAccountNumber();
  double deposit(double);
  double withdraw(double);
};
