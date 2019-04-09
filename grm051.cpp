#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  int i;

  for(i=0, ch='a'; i < 10; i++, ch++) {
    printf("[%c]", ch);
  }

  return 0;
}
