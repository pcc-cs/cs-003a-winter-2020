#include "tree.h"

int main() {
  Tree t1;
  int values[] = {10, 7, 5, 12, 3, 4};

  for (int v : values) {
    t1.add(v);
  }
}
