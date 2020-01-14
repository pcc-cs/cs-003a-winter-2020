#include <cstdio>

void inc1(int a) {
  a++;
}

// Avoid this!
void inc2(int &a) {
  a++;
}

void inc3(int *ap) {
  (*ap)++;
}

int main() {
  int x = 100;

  inc1(x);
  printf("inc1(): %d\n", x);

  inc2(x);
  printf("inc2(): %d\n", x);

  inc3(&x);
  printf("inc3(): %d\n", x);
}
