#include <string>
#include "student.h"

#define SIZE 0x100

Student::Student(int studentId) : _studentId(studentId) {
}

void Student::setGpa(float gpa) {
  _gpa = gpa;
}

const char *Student::getSummary() {
  char *buffer = new char[SIZE];
  snprintf(buffer, SIZE, "ID: %d\nGPA: %.2f\n", _studentId, _gpa);
  return buffer;
}
