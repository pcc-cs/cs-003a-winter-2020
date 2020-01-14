#include <cstdio>

static int v1;  // Static

int main() {
  int v2;  // Automatic
  int *v3p = new int;  // Dynamic

  printf("&v1 = %p, &v2 = %p, v3p = %p\n", &v1, &v2, v3p);
}
