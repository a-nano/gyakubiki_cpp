#include <stdio.h>
#include <iostream>
using namespace std;
int funcNum(int n) {
  cout << "in funcNum" << endl;
  return 0;
}

int funcStr(const char *p) {
  cout << "in funcStr" << endl;
  return 0;
}

int main(void)
{
  funcNum(0);
  funcStr(NULL);
  funcStr(nullptr);
}
