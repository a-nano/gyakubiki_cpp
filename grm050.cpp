#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;

  printf("�P�������́F");
  scanf("%c", &ch);

  if(!isalpha(ch)) {
    printf("[%c]�̓A���t�@�x�b�g�ł͂Ȃ�", ch);
  } else {
    printf("[%c]�̓A���t�@�x�b�g\n", ch);
  }

  return 0;
}
