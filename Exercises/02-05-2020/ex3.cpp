#include <cstdio>
#include <cstdlib>

class Student {
 private:
  static int _currentId;
  int _id;
 public:
  Student() : _id(_currentId++) {
  }
  int getId() {
    return _id;
  }
};

int Student::_currentId = 101;

class CSStudent : public Student {
 public:
  int getId() {
    return 1000+Student::getId();
  }
};

class Util {
 public:
  static int add(int a, int b) {
    return a+b;
  }
  static int mul(int a, int b) {
    return a*b;
  }
};

int main() {
  Student s1, s2, s3;
  printf("s1.getId() = %d, s2.getId() = %d, s3.getId() = %d\n",
    s1.getId(), s2.getId(), s3.getId());

  CSStudent s4;
  printf("s4.getId() = %d\n", s4.getId());

  int a = 10, b = 20;
  printf("Util.add(%d, %d) = %d\n", a, b, Util::add(a, b));
  printf("Util.mul(%d, %d) = %d\n", a, b, Util::mul(a, b));
}
