#include <cstdio>

void print(int a[], int size) {
  for (int i = 0; i < size; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
  printf("\n");
}

const int SIZE = 3;

int main() {
  int a1[10];
  print(a1, 10);

  int a2[] = {10, 20, 30};
  print(a2, 3);

  int a3[5] = {10, 20, 30};
  print(a3, 5);

  int a4[SIZE];
  print(a4, SIZE);

  int *a5 = a4;
  print(a5, SIZE);

  a5[1] = 1000;
  printf("a5[1] = %d, *(a5+1) = %d\n", a5[1], *(a5+1));
}
