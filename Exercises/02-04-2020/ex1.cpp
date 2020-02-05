#include <cstdio>
#include "list.h"

int main() {
  List list;

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
  dump(list.find(101));
  dump(list.find(222));
  printf("\n");

  Node *n2p = list.remove(101);
  dump(n2p);
  dump(list.find(101));

  auto all = list.all();
  for (int i = 0; i < all.size(); i++) {
    printf("%-6d%s", all[i], i%6 == 5 ? "\n" : "");
  }
  printf("\n");
}
