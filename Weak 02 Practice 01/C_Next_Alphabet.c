// C. Next Alphabet
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <stdio.h>

int main() {
  char c;
  scanf("%c", &c);

  if (c == 'z') {
    printf("a");
  } else {
    printf("%c", c + 1);
  }

  return 0;
}
