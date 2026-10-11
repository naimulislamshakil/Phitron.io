// P. First digit !
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);

  while (x >= 10) {
    x /= 10;
  }

  if (x % 2 == 0) {
    printf("EVEN\n");
  } else {
    printf("ODD\n");
  }

  return 0;
}
