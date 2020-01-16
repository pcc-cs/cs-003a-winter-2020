#include <string>
#include <cstring>
#include "student.h"

#define SIZE 0x100

CsStudent::CsStudent(int studentId, const char *coding) : Student(studentId) {
  size_t len = strlen(coding);
  char *copy = new char[len+1];
  strncpy(copy, coding, len);
  _coding = copy;
}

const char *CsStudent::getSummary() {
  char *buffer = new char[SIZE];
  snprintf(buffer, SIZE, "ID: %d\nGPA: %.2f\nCoding: %s\n",
    _studentId, _gpa, _coding);
  return buffer;
}
