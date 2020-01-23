#include <cstdio>

class Class {
 private:
  int _size;
 public:
  static const int MAX_SIZE = 30;
  const int OTHER_CONST = 10;
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
  Class c1(10), c2(20);

  printf("&c1.OTHER_CONST = %p, &c2.OTHER_CONST = %p\n",
    &c1.OTHER_CONST, &c2.OTHER_CONST);
}
