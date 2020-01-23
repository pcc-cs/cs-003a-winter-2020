#include <cstdio>

int main() {
  int x = 100;
  int y = x;
  int &z = x;

  printf("%d\n", x);

  y++;
  printf("%d\n", x);

  z++;
  printf("%d\n", x);
}