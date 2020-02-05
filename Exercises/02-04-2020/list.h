#ifndef LIST_H_
#define LIST_H_

#include <cstdlib>
#include <vector>

struct Node {
  int value;
  Node *next;
};

class List {
 private:
  Node *_head = NULL;
  Node *_tail = NULL;
 public:
  Node *add(int);
  Node *find(int);
  Node *remove(int);
  std::vector<int>all();
};

#endif  // LIST_H_
