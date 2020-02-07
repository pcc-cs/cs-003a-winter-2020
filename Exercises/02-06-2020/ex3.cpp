#include <cstdio>

template <class T>
class Item {
 private:
  T _value;
 public:
  explicit Item(T value) : _value(value) {
  }
  T getValue() {
    return _value;
  }
};

int main() {
  Item<int> intItem(100);
  printf("intItem.getValue() = %d\n", intItem.getValue());

  Item<const char *>stringItem("Hello");
  printf("stringItem.getValue() = \"%s\"\n", stringItem.getValue());
}
