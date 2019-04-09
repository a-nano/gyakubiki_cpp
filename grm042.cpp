#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
  int m = 10;
  m += 20;

  printf("m = %d\n", m);

  string s;
  s = "Hello ";
  s += "C++ world.";
  cout << "s = " << s << endl;

  return 0;
}
