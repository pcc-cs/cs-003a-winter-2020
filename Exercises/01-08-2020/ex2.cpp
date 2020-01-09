#include <cstdio>
#include <iostream>

using namespace std;

void print1(int a[][2], int size) {
  printf("%-3s%-3s%-6s\n", "i", "j", "v");
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%-3d%-3d%-6d\n", i, j, a[i][j]);
    }
  }
  printf("\n");
}

void print2(int a[][2], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "a[" << i << "][" << j << "] = " << a[i][j] << endl;
    }
  }
  cout << endl;
}

int main() {
  int a1[3][2];

  int a2[][2] = {{10, 20}, {-1, -2}, {200, 7}};
  print1(a2, 3);

  int size;
  cout << "size: ";
  cin >> size;
  int (*a3)[2] = new int[size][2];
  print1(a3, size);

  auto a4 = new int[size][3][6][2];
}
