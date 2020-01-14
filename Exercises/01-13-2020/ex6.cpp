#include <cstdio>

class A {
 private:
  int _a;
 public:
  explicit A(int a) : _a(a) {
  }
  void dump() {
    printf("_a = %d\n", _a);
  }
};

class B : public A {
 public:
  void f1() {
    printf("B::f1()\n");
  }
  explicit B(int a) : A(a) {
  }
};

int main() {
  B b1(100);

  b1.dump();
  printf("\n");
}
