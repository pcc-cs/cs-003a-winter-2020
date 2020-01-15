#include <cstdio>
#include <cstdlib>

class Account {
 private:
  int _accountId = rand();
  float _balance;
  friend void printSummary(Account *);
 public:
  explicit Account(float balance) : _balance(balance) {
  }
  float getBalance() {
    return _balance;
  }
};

void printSummary(Account *ap) {
  printf("%10s: %d\n%10s: %6.2f\n",
    "Account ID", ap->_accountId, "Balance", ap->getBalance());
}

int main() {
  Account a(100.0);
  printSummary(&a);
}
