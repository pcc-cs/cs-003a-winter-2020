#include <cstdio>
#include <iostream>

struct Student {
  unsigned int studentId;
  std::string firstName;
  std::string lastName;
  std::string *courseIds;
  float gpa;
  bool active = false;

  std::string name();
};

std::string Student::name() {
  return firstName + " " + lastName;
}

int main() {
  Student s1;
  s1.studentId = 45322;
  s1.firstName = "Lisa";
  s1.lastName = "Connolly";
  printf("ID: %d, Name: %s %s\n",
    s1.studentId, s1.firstName.c_str(), s1.lastName.c_str());

  Student s2 = {332114, "Joe", "Montana"};
  printf("ID: %d, Name: %s %s\n",
    s2.studentId, s2.firstName.c_str(), s2.lastName.c_str());

  Student *s2p = &s2;
  printf("ID: %d, Name: %s %s\n",
    s2p->studentId, s2p->firstName.c_str(), s2p->lastName.c_str());

  Student s3 = {.gpa = 3.5};
  printf("gpa = %f\n", s3.studentId, s3.gpa);

  std::cout << "s1: " << s1.name() << ", s2: " << s2.name() << std::endl;
}
