#include <cstdio>
#include <string>

class Class {
 private:
  std::string _name;
  int _students = 0;
 public:
  explicit Class(std::string);
  const char *getName();
  int getStudents();
  Class operator++(int);
};

Class::Class(std::string name) : _name(name) {
}

const char *Class::getName() {
  return _name.c_str();
}

int Class::getStudents() {
  return _students;
}

Class Class::operator++(int) {
  Class copy = *this;
  _students++;
  return copy;
}

int main() {
  Class c1("CS003A");
  printf("%s students: %d\n", c1.getName(), c1.getStudents());

  printf("Students: %d\n", (c1++).getStudents());

  auto c2 = c1++;
  printf("c1 students: %d, c2 students: %d\n",
    c1.getStudents(), c2.getStudents());
}
