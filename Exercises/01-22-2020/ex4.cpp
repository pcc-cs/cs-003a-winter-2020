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

bool compare1(int a, int b) {
  printf("a = %2d, b = %2d\n", a, b);
  return a > b;
}

bool compare2(int a, int b) {
  printf("a = %2d, b = %2d\n", a, b);
  return abs(a) > abs(b);
}

int main() {
  std::vector<int> v1;

  for (int i = 0; i < 10; i++) {
    v1.push_back(i * -100);
  }
  print(v1);

  std::sort(v1.begin(), v1.end(), compare1);
  print(v1);

  std::sort(v1.begin(), v1.end(), compare2);
  print(v1);
}
