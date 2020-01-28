#include <cstdio>
#include <cstring>

int add(int a, int b) {
  return a+b;
}

const char *add(const char *a, const char *b) {
  char *r = new char[strlen(a)+strlen(b)+1];
  r[0] = 0;
  strncat(r, a, strlen(a));
  strncat(r, b, strlen(b));
  return r;
}

int main() {
  printf("10 + 20 = %d\n", add(10, 20));
  printf("\"Fizz\" + \"Buzz\" = %s\n", add("Fizz", "Buzz"));
}
