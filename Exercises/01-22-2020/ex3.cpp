#include <vector>
#include <algorithm>
#include <cstdio>

int main() {
  std::vector<int> v1;

  for (int i = 0; i < 10; i++) {
    v1.push_back(i * 100);
    printf("v1.size() = %2d, v1.capacity() = %2d\n",
      v1.size(), v1.capacity());
  }
  printf("\n");

  int v = 200;
  if (std::find(v1.begin()+3, v1.end(), v) == v1.end()) {
    printf("%d not found!\n", v);
  } else {
    printf("%d found!\n", v);
  }
}
