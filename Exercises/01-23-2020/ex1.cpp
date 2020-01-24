#include <cstdio>
#include <vector>

class A {
 private:
  int _x;
 public:
  void setX(int x) {
    _x = x;
  }
  /*
  The "const" keyword prevents the method from changing
  class attribtes.
  void incX(int x) const {
    _x++;
  }
  */
};

// Passes vector efficiently without risk of change.
void safePrint(const std::vector<int> &v) {
  // Print values.
}

int main() {
  const char *s1 = "Stuff";
  s1 = new char[0x10];
  // Can't do: s1[0] = 'a';

  char *const s2 = const_cast<char *>("Stuff");
  // Can't do: s2 = new char[0x10];
  s2[0] = 'a';
}
