#include <tuple>
#include <set>
#include <map>
#include <cstdio>

int main() {
  std::tuple<int, int, int> t1 = {10, 20, 30};
  printf("t1 = (%d, %d, %d)\n",
    std::get<0>(t1), std::get<1>(t1), std::get<2>(t1));

  std::set<int> s1;
  s1.insert(10);
  s1.insert(10);
  s1.insert(20);
  for (int x : s1) {
    printf("x = %2d\n", x);
  }
  printf("s1.count(10) = %d\n", s1.count(10));
  printf("s1.count(15) = %d\n", s1.count(15));
  if (s1.find(10) != s1.end()) {
    printf("10 is in the set!\n");
  }

  std::map<std::string, int> m1;
  m1["foo"] = 100;
  m1["bar"] = 200;
  m1["bar"] = 300;
  printf("m1[\"foo\"] = %d, m1[\"bar\"] = %d\n",
    m1["foo"], m1["bar"]);
  if (m1.count("bar") > 0) {
    printf("Key \"bar\" exists!\n");
  }

  typedef std::map<std::string, int>::iterator Iterator;
  for (Iterator it = m1.begin(); it != m1.end(); it++) {
    printf("m1<%s, %d>\n", it->first.c_str(), it->second);
  }
}
