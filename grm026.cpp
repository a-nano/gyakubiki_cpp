#include <stdio.h>
#include <vector>
using namespace std;

int main(void)
{
  auto str = "Hello world.";

  for(auto p = str; *p != '\0'; p++) {
    printf("[%c],", *p);
  }
  printf("\n");

  vector<int> v;
  for(int i = 0; i < 10; i++) {
    v.push_back(i);
  }
  
  for(auto it = v.begin(); it != v.end(); it++) {
    printf("%d,", *it);
  }
}
