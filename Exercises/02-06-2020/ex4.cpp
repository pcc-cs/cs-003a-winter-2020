#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> n = {10, 2, -3, 4, 7};
  auto maxp = std::max_element(n.begin(), n.end(), [](int a, int b) {
    return a < b;
  });
  printf("Max = %d\n", *maxp);
}
