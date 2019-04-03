/* 倍精度の実数を扱う */

#include <stdio.h>
#include <float.h>

int main(void)
{
  double x1 = 100.23;
  double x2 = DBL_MAX;
  double x3 = DBL_MIN;

  printf("sizeof double: %d\n", sizeof(double));
  printf("x1: %f\n", x1);
  printf("x2 max: %e\n", x2);
  printf("x3 min: %e\n", x3);
}
