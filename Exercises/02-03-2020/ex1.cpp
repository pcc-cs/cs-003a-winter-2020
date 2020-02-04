#include <cstdio>
#include "list.h"

int main() {
  List list;

  Node *n1p = list.add(100);
  printf("n1p->value = %d\n", n1p->value);

  for (int i = 101; i < 300; i += 12) {
    list.add(i);
  }

  auto dump = [](Node *np) {
    if (np == NULL) {
      printf("Not found\n");
    } else {
      printf("Value = %d\n", np->value);
    }
  };
  dump(list.find(221));
  dump(list.find(222));
}
