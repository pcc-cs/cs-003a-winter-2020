#include "tree.h"

Node *addNode(Node *root, Node *p) {
  if (p->value < root->value) {
    if (root->left == NULL) {
      return root->left = p;
    } else {
      return addNode(root->left, p);
    }
  }
  if (root->right == NULL) {
    return root->right = p;
  } else {
    return addNode(root->right, p);
  }
}

Node *Tree::add(int value) {
  Node *p = new Node{value, NULL, NULL};
  if (_root == NULL) {
    return _root = p;
  }
  return addNode(_root, p);
}
