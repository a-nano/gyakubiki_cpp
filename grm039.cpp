#include <stdio.h>

int main() {
  int x, m, n;

  x = 10;

  m = x;
  printf("x:%d m:%d\n", x, m);

  n = m = 20;
  printf("m:%d n:%d\n", m, n);

  return 0;
}
