#include <cstdio>

template <class T>
void swap(T &a, T &b) {
  T c = a;
  a = b;
  b = c;
}

int main() {
  int a = 10, b = 20;
  swap(a, b);
  printf("a = %d, b = %d\n", a, b);

  const char *x = "Hello", *y = "World";
  swap(x, y);
  printf("x = %s, y = %s\n", x, y);
}
