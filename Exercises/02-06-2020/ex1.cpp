#include <cstdio>
#include <stdexcept>

double divide(double a, double b) {
  if (b == 0) {
    std::invalid_argument e("Can't divide by 0!");
    throw e;
  }
  return a/b;
}

double process(double a, double b) {
  printf("Processing %.2f/%.2f...\n", a, b);
  if (a < 0 || b < 0) {
    throw std::range_error("Values must be non-negative!");
  }
  return divide(a, b);
}

int main() {
  double a, b;
  printf("Enter a and b: ");
  scanf("%lf %lf", &a, &b);

  try {
    printf("%.2f/%.2f = %.2f\n", a, b, process(a, b));
  } catch (std::logic_error e) {
    fprintf(stderr, "Error: %s\n", e.what());
  } catch (std::range_error e) {
    fprintf(stderr, "Error: %s\n", e.what());
  }
}
