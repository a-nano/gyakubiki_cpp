#include <stdio.h>
#include <ctype.h>

int main() {
  char ch1, ch2;

  printf("�Q�������́F");
  scanf("%c%c", &ch1, &ch2);

  if(isalpha(ch1) && isalpha(ch2)) {
    printf("[%c][%c]�͗����A���t�@�x�b�g\n", ch1, ch2);
  } else {
    printf("[%c][%c]�͂��̑��̕���\n", ch1, ch2);
  }

  return 0;
}
