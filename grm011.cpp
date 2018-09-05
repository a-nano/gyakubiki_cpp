/* 64ビットで数値を扱う */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  long long x1 = 10;
  long long x2 = _I64_MAX;
  long long x3 = _I64_MIN;

  printf("sizeof long long: %d\n", sizeof(long long));
  printf("x1: %lld\n", x1);
  printf("x2: %lld %llx\n", x2, x2);
  printf("x3: %lld %llx\n", x3, x3);
}
