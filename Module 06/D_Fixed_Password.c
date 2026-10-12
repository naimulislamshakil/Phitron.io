// D. Fixed Password
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include <stdio.h>

int main() {
  int x;

  while (scanf("%d", &x)) {
    if (x == 1999) {
      printf("Correct\n");
      break;
    } else {
      printf("Wrong\n");
    }
  }
  return 0;
}
