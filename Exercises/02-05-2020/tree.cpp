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

Node *findNode(Node *root, int value) {
  if (root == NULL) {
    return NULL;
  }
  if (root->value == value) {
    return root;
  }
  return findNode(value < root->value ? root->left : root->right, value);
}

Node *Tree::find(int value) {
  return findNode(_root, value);
}
