#include <cstdio>


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
  Color operator+(const Color);
  const char *get() {
    return NAMES[static_cast<int>(_c)];
  }
};

Color Color::operator+(const Color other) {
  switch (_c) {
    case Colors::RED:
      switch (other._c) {
        case Colors::RED:
          return Color(Colors::RED);
        case Colors::GREEN:
          return Color(Colors::YELLOW);
        case Colors::BLUE:
          return Color(Colors::MAGENTA);
      }
    case Colors::GREEN:
      switch (other._c) {
        case Colors::RED:
          return Color(Colors::YELLOW);
        case Colors::GREEN:
          return Color(Colors::GREEN);
        case Colors::BLUE:
          return Color(Colors::CYAN);
      }
    case Colors::BLUE:
      switch (other._c) {
        case Colors::RED:
          return Color(Colors::MAGENTA);
        case Colors::GREEN:
          return Color(Colors::CYAN);
        case Colors::BLUE:
          return Color(Colors::BLUE);
      }
    default:
      return Color(Colors::UNKNOWN);
  }
}

int main() {
  Color c1(Colors::RED), c2(Colors::GREEN), c3(Colors::BLUE);
  Color c4 = c1+c1;  // Red
  Color c5 = c1+c2;  // Yellow
  Color c6 = c1+c3;  // Magenta
  Color c7 = c1+c5;  // ?
  printf("%s + %s = %s\n", c1.get(), c1.get(), c4.get());
  printf("%s + %s = %s\n", c1.get(), c2.get(), c5.get());
  printf("%s + %s = %s\n", c1.get(), c3.get(), c6.get());
  printf("%s + %s = %s\n", c1.get(), c5.get(), c7.get());
}
