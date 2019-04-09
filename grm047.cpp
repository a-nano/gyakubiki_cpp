#include <stdio.h>

int main() {
  unsigned int x;
  x = 0xFFFF0000;

  printf("x:%08X\n", x);
  printf("~ x = %08X\n", ~ x);

  return 0;
}
