#include <iostream>


enum class Colors {
  RED, GREEN, BLUE, CYAN, MAGENTA, YELLOW, UNKNOWN
};

static const char *NAMES[] = {
  "Red", "Green", "Blue", "Cyan", "Magenta", "Yellow", "?"
};
class Color {
 private:
  Colors _c;
 public:
  explicit Color(Colors c) : _c(c) {
  }
  const char *get() {
    return NAMES[static_cast<int>(_c)];
  }
};

std::ostream &operator<<(std::ostream &os, Color c) {
  os << c.get();
  return os;
}

int main() {
  Color c1(Colors::RED), c2(Colors::GREEN), c3(Colors::BLUE);
  std::cout << c1 << ", " << c2 << ", " << c3 << std::endl;
}
