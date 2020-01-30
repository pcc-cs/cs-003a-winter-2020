#include <cstdio>

namespace A {
const char *clz = "CS003A";
int count = 40;

class Student {
 private:
  double _grade = 0;

 public:
  double getGrade() { return _grade; }
};
}  // namespace A

namespace B {
const char *clz = "CS003C";
int count = 30;

namespace C {
enum class Book {
  PYTHON2, PYTHON3
};
}  // namespace C
}  // namespace B

// Don't use this!
using namespace A;

int main() {
  printf("A::clz = %s, A::count = %d\n", A::clz, A::count);
  printf("clz = %s, count = %d\n", clz, count);

  printf("A::Student().getGrade() = %.2f\n", A::Student().getGrade());

  printf("B::clz = %s, B::count = %d\n", B::clz, B::count);

  printf("B::C::Book::PYTHON3 = %d\n", B::C::Book::PYTHON3);
}
