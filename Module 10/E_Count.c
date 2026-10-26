// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <stdio.h>
#include <string.h>

int main() {
  char s[1000001];
  fgets(s, 1000001, stdin);
  int count = 0;

  //   printf("%d", strlen(s));

  for (int i = 0; i < strlen(s) - 1; i++) {
    // printf("%d\n", s[i]);
    count = count + (s[i] - '0');
  }

  printf("%d", count);

  return 0;
}
