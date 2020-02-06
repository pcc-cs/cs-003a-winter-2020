#ifndef TREE_H_
#define TREE_H_

#include <cstdlib>

struct Node {
  int value;
  Node *left;
  Node *right;
};

class Tree {
 private:
  Node *_root = NULL;
 public:
  Node *add(int);
  Node *find(int);
};

#endif  // TREE_H_
