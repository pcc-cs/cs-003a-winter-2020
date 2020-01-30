#include <cstdio>

class Counter {
 private:
  int _max;
  int _count = 0;
 public:
  explicit Counter(int max) : _max(max) {
  }
  Counter(const Counter &c) {
    _max = c._max;
  }
  Counter &operator++() {
    if (_count < _max) {
      ++_count;
    }
    return *this;
  }
  int getMax() {
    return _max;
  }
  int getCount() {
    return _count;
  }
};

int main() {
  Counter c1(1);
  printf("c1: count = %d, max = %d\n", c1.getCount(), c1.getMax());
  ++c1;
  printf("c1: count = %d, max = %d\n", c1.getCount(), c1.getMax());
  ++c1;
  printf("c1: count = %d, max = %d\n", c1.getCount(), c1.getMax());

  Counter c2 = c1;
  printf("c2: count = %d, max = %d\n", c2.getCount(), c2.getMax());
}
