#include "list.h"

Node *List::add(int value) {
  Node *p = new Node{value, NULL};
  if (_tail == NULL) {
    _head = _tail = p;
  } else {
    _tail->next = p;
    _tail = p;
  }
  return p;
}

Node *List::find(int value) {
  for (Node *p = _head; p != NULL; p = p->next) {
    if (p->value == value) {
      return p;
    }
  }
  return NULL;
}

Node *List::remove(int value) {
  if (_head == NULL) {
    return NULL;
  }
  if (_head->value == value) {
    Node *p = _head;
    if (_head == _tail) {
      _head = _tail = NULL;
    } else {
      _head = _head->next;
    }
    return p;
  }
  for (Node *p = _head; p->next != NULL; p = p->next) {
    if (p->next->value == value) {
      Node *q = p->next;
      p->next = p->next->next;
      return q;
    }
  }
  return NULL;
}

std::vector<int> List::all() {
  std::vector<int> all;
  for (Node *p = _head; p != NULL; p = p->next) {
    all.push_back(p->value);
  }
  return all;
}
