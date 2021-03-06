#include <cstdio>
#include <cstdlib>
#include <cmath>

#define CHAR() static_cast<unsigned char>(rand() % 256)

class Color {
 private:
  unsigned char *_rgb;
 public:
  Color(unsigned char r, unsigned char g, unsigned char b) {
    _rgb = new unsigned char[3];
    _rgb[0] = r;
    _rgb[1] = g;
    _rgb[2] = b;
  }
  void dump() {
    printf("rgb(%d, %d, %d)\n", _rgb[0], _rgb[1], _rgb[2]);
  }
  ~Color() {
    printf("Color destructor!\n");
    delete [] _rgb;
  }
};

class CarColor : public Color {
 private:
  char *_buffer;
 public:
  CarColor(unsigned char r, unsigned char g, unsigned char b) :
    Color(r, g, b) {
      _buffer = new char[0x100];
    }
  ~CarColor() {
    printf("CarColor destructor!\n");
    delete [] _buffer;
  }
};

void randomColor() {
  Color c(CHAR(), CHAR(), CHAR());
  c.dump();
}

void randomCarColor() {
  CarColor c(CHAR(), CHAR(), CHAR());
  c.dump();
}

int main() {
  for (int i = 0; i < 3; i++) {
    randomColor();
  }
  printf("\n");
  for (int i = 0; i < 3; i++) {
    randomCarColor();
  }
}
