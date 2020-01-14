#include <cstdio>

class A {
 public:
  void f1() {
    printf("A::f1()\n");
  }
  void f2() {
    printf("A::f2()\n");
  }
 protected:
  void r1() {
    printf("A::r1()\n");
  }
 private:
  void p1() {
    printf("A::p1()\n");
  }
};

class B : public A {
 public:
  void f1() {
    printf("B::f1()\n");
  }
  void f3() {
    printf("A::f3()\n");
  }
  void r1Access() {
    r1();
  }
};

int main() {
  A a1;
  B b1;

  a1.f1();
  a1.f2();
  printf("\n");

  b1.f1();
  b1.f2();
  b1.r1Access();
  printf("\n");

  A a2 = b1;
  a2.f1();
  a2.f2();
  printf("\n");
}
