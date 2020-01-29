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
  Class &operator++();
};

Class::Class(std::string name) : _name(name) {
}

const char *Class::getName() {
  return _name.c_str();
}

int Class::getStudents() {
  return _students;
}

Class &Class::operator++() {
  ++_students;
  return *this;
}

int main() {
  Class c1("CS003A");
  printf("%s students: %d\n", c1.getName(), c1.getStudents());

  printf("Students: %d\n", (++c1).getStudents());

  printf("%p (before), %p (after)\n", &c1, &(++c1));

  auto c2 = ++c1;
  printf("c1 students: %d, c2 students: %d\n",
    c1.getStudents(), c2.getStudents());
}
