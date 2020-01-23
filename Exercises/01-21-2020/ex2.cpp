#include <cstdio>

class Class {
 private:
  int _size;
 public:
  static const int MAX_SIZE = 30;
  explicit Class(int);
  int getSize();
};

Class::Class(int size) {
  if (size > MAX_SIZE) {
    throw "size too large!";
  }
  _size = size;
}

int Class::getSize() {
  return _size;
}

int main() {
  printf("Max size = %d\n", Class::MAX_SIZE);
  try {
    Class c1(30);
    printf("c1 size = %d\n", c1.getSize());
  } catch (const char *error) {
    fprintf(stderr, "Error: %s\n", error);
  }
}
