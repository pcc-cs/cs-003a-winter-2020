#include <cstdio>
#include "tree.h"

int main() {
  Tree t1;
  int values[] = {10, 7, 5, 12, 3, 4};

  for (int v : values) {
    t1.add(v);
  }

  auto dump = [](Node *np) {
    if (np == NULL) {
      printf("NULL\n");
    } else {
      printf("Value = %d\n", np->value);
    }
  };
  dump(t1.find(5));
  dump(t1.find(20));
}
