#include <cstdio>

// Static variables
int xy[] = {10, 20};
int x = xy[0];
int y = xy[1];

int main() {
  int a = 100;
  printf("a = %d\n", a);

  int *ap = &a;
  printf("&a = %p\n", ap);

  *ap = 1;
  printf("a = %d\n", a);

  int b = 200;
  printf("&b = %p\n", &b);

  printf("&x = %p, &y = %p\n", &x, &y);

  int *xp = &x;
  xp++;
  printf("&x (after increment) = %p\n", xp);
  printf("x = %d, *xp = %d\n", x, *xp);
}
