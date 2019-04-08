#include <stdio.h>

int main(void)
{
  char str[] = "Hello,";
  printf("str: %s\n", str);

  int ary[5] = {0, 1, 2, 3, 4};
  for(int i = 0; i < 5; i++) {
    printf("[%d]", ary[i]);
  }

  printf("\n");
  for(int *p = ary, i = 0; i < 5; p++, i++) {
    printf("[%d]", *p);
  }
  printf("\n");
}
