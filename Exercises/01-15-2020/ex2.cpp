#include <cstdio>

enum class CODE {
  NEGATIVE_VALUES = 100
};

struct Error {
 public:
  CODE code;
};

float div(float a, float b) {
  // Throws a const char *
  if (b == 0) {
    throw "Division by 0!";
  }

  // Throws an Error struct
  if (a < 0 || b < 0) {
    Error e = {CODE::NEGATIVE_VALUES};
    throw e;
  }

  return a / b;
}

int main() {
  float a, b;
  scanf("%f %f", &a, &b);

  try {
    printf("%.2f / %.2f = %.2f\n", a, b, div(a, b));
  } catch (const char *error) {
    fprintf(stderr, "Error: %s\n", error);
  } catch (Error error) {
    fprintf(stderr, "Error code: %d\n", error.code);
  }
}
