#include <stdio.h>

int main() {
  int x, y;

  x = y = 10;
  printf("x:%d y:%d\n", x, y);
  if(x != y) {
    printf("xとyはひとしくない\n");
  } else {
    printf("xとyは等しい\n");
  }

  y = 20;
  printf("x:%d y:%d\n", x, y);
  if(x != y) {
    printf("xとyは等しくない\n");
  } else {
    printf("xとyは等しい\n");
  }
}
