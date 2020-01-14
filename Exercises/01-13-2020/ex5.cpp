#include <cstdio>

class A {
 public:
  virtual void f1() = 0;
};

class B : public A {
 public:
  void f1() {
    printf("B::f1()\n");
  }
};

class C : public A {
 public:
  void f1() {
    printf("C::f1()\n");
  }
};

void callF1(A *ap) {
  ap->f1();
}

int main() {
  B b1;
  C c1;

  b1.f1();
  printf("\n");

  c1.f1();
  printf("\n");

  A *a2p = &b1;
  callF1(a2p);
  printf("\n");

  A *a3p = &c1;
  callF1(a3p);
  printf("\n");
}
