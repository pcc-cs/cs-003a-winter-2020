#include <cstdio>
#include <cstdint>
#include <string>
#include <iostream>

uintmax_t fib(int n) {
  return n < 2 ? 1 : fib(n-1) + fib(n-2);
}

bool isPalindrome(std::string s) {
  if (s.length() < 2) {
    return true;
  }
  if (s[0] == s[s.length()-1]) {
    return isPalindrome(s.substr(1, s.length()-2));
  }
  return false;
}

int main() {
  for (int i = 0; i < 20; i++) {
    printf("F(%2d) = %d\n", i, fib(i));
  }

  std::string s;
  printf("\nEnter string to check if a palindrome:\n");
  while (std::cin >> s) {
    printf("%20s : %-s\n", s.c_str(), isPalindrome(s) ? "Yes" : "No");
  }
}
