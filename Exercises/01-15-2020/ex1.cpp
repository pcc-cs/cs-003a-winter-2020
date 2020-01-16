#include <cstdio>
#include <cstdlib>
#include "student.h"

int main() {
  const char *summary;

  Student s1(rand());
  s1.setGpa(3.4);
  summary = s1.getSummary();
  printf("%s\n", summary);
  delete [] summary;

  CsStudent s2(rand(), "C++");
  s2.setGpa(3.9);
  summary = s2.getSummary();
  printf("%s\n", summary);
  delete [] summary;
}
