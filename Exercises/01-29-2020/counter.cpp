#include "counter.h"

Counter::Counter(int max) : _max(max) {
}

Counter::Counter(const Counter &c) {
  _max = c._max;
}

Counter &Counter::operator++() {
  if (_count < _max) {
    ++_count;
  }
  return *this;
}

int Counter::getMax() {
  return _max;
}

int Counter::getCount() {
  return _count;
}
