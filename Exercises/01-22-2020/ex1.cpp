#include <vector>
#include <cstdio>

void div1(std::vector<int> &v, int f) {
  for (int i = 0; i < v.size(); i++) {
    v[i] /= f;
  }
}

void div2(std::vector<int> &v, int f) {
  for (int &x : v) {
    x /= f;
  }
}

int main() {
  std::vector<int> v1;
  v1.push_back(100);
  printf("v1[0] = %d\n", v1[0]);
  printf("\n");

  v1.push_back(200);
  v1.push_back(300);
  for (int x : v1) {
    printf("x = %d\n", x);
  }
  printf("\n");

  for (int i = 0; i < v1.size(); i++) {
    printf("v1[%d] = %d\n", i, v1[i]);
  }
  printf("\n");

  printf("div1()\n");
  div1(v1, 2);
  for (int i = 0; i < v1.size(); i++) {
    printf("v1[%d] = %d\n", i, v1[i]);
  }
  printf("\n");

  printf("div2()\n");
  div2(v1, 2);
  for (int i = 0; i < v1.size(); i++) {
    printf("v1[%d] = %d\n", i, v1[i]);
  }
  printf("\n");
}
