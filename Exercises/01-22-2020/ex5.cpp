#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>

void print(const std::vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    printf("v[%2d] = %3d\n", i, v[i]);
  }
  printf("\n");
}

int main() {
  std::vector<int> v;
  for (int i = 0; i < 10; i++) {
    v.push_back(i * -100);
  }

  print(v);

  std::sort(v.begin(), v.end(), [](int a, int b) {
    return abs(a) > abs(b);
  });
  print(v);
}
