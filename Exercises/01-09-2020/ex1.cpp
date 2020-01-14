#include <iostream>
#include "account.h"

int main() {
  Account a1(10);

  std::cout << a1.getBalance() << std::endl;
  std::cout << a1.deposit(100) << std::endl;
  std::cout << a1.withdraw(50) << std::endl;
  std::cout << std::endl;

  Account *a2p = new Account(20);
  std::cout << a2p->getBalance() << std::endl;
  std::cout << a2p->getAccountNumber() << std::endl;
  std::cout << std::endl;
  delete a2p;

  Account a3 = Account(30, 3221456);
  std::cout << a3.getBalance() << std::endl;
  std::cout << a3.getAccountNumber() << std::endl;
  std::cout << std::endl;
}
