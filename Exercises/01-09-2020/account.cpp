#include "account.h"

Account::Account(double amount) {
  balance = amount;
}

Account::Account(double amount, unsigned int number) :
  balance(amount), accountNumber(number) {
}

double Account::getBalance() {
  return balance;
}

unsigned int Account::getAccountNumber() {
  return accountNumber;
}

double Account::deposit(double amount) {
  return balance += amount;
}

double Account::withdraw(double amount) {
  return balance -= amount;
}
