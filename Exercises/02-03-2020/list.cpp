#include "list.h"

Node *List::add(int value) {
  Node *nodep = new Node{value, NULL};
  if (_tail == NULL) {
    _head = _tail = nodep;
  } else {
    _tail->next = nodep;
    _tail = nodep;
  }
  return nodep;
}

Node *List::find(int value) {
  for (Node *p = _head; p != NULL; p = p->next) {
    if (p->value == value) {
      return p;
    }
  }
  return NULL;
}
