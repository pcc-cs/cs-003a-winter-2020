#include <cstdio>

enum {
  A, B, C
};

enum {
  X, Y = 10, Z
};

// Avoid this in favor of enum class.
enum A {
  A1, A2, A3
};

enum class B {
  B1, B2, B3
};

int main() {
  printf("A = %d, B = %d, C = %d\n", A, B, C);

  printf("X = %d, Y = %d, Z = %d\n", X, Y, Z);

  printf("A1 = %d, A2 = %d, A3 = %d\n", A1, A2, A3);
  printf("A::A1 = %d, A::A2 = %d, A::A3 = %d\n", A::A1, A::A2, A::A3);
  enum A a = A3;
  printf("a = %d\n", a);

  printf("B::B1 = %d, B::B2 = %d, B::B3 = %d\n", B::B1, B::B2, B::B3);
  enum B b = B::B2;
  printf("b = %d\n", b);
}
