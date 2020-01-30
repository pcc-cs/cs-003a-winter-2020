#ifndef COUNTER_H_
#define COUNTER_H_

class Counter {
 private:
  int _max;
  int _count = 0;
 public:
  explicit Counter(int);
  Counter(const Counter &);
  Counter &operator++();
  int getMax();
  int getCount();
};

#endif  // COUNTER_H_
