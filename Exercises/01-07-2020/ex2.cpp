#include <cstdio>

int ok() {
  int a = 100;
  return a;  // OK, but not what we want!
}

int *bad() {
  int a = 100;
  return &a;  // DO NOT DO THIS!!!
}

int *goodA() {
  int *ap = new int;
  *ap = 100;
  return ap;
}

int *goodB(int size, int start) {
  int *ap = new int[size];
  for (int i = 0; i < size; i++) {
    ap[i] = start+i;
  }
  return ap;
}

int main() {
  int *ap;

  ap = goodA();
  printf("%p, %d\n", ap, *ap);
  delete ap;

  int size = 0x10;
  ap = goodB(size, 100);
  for (int i = 0; i < size; i++) {
    printf("ap[%d] = %d\n", i, ap[i]);
  }
  delete [] ap;
}
