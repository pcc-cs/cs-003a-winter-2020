#include <cstdio>
#include "counter.h"

int main() {
  Counter c1(1);
  printf("c1: count = %d, max = %d\n", c1.getCount(), c1.getMax());
  ++c1;
  printf("c1: count = %d, max = %d\n", c1.getCount(), c1.getMax());
  ++c1;
  printf("c1: count = %d, max = %d\n", c1.getCount(), c1.getMax());

  Counter c2 = c1;
  printf("c2: count = %d, max = %d\n", c2.getCount(), c2.getMax());
}
