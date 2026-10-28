// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <stdio.h>
#include <string.h>

int main() {
  int isActive = 1;
  char s[1001];
  char revers[1001];

  fgets(s, 1001, stdin);

  int len = strlen(s);

  if (len > 0 && s[len - 1] == '\n') {
    s[--len] = '\0';
  }

  for (int i = len - 1; i >= 0; i--) {
    revers[len - 1 - i] = s[i];
  }

  revers[len] = '\0';

  if (strcmp(s, revers) == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}
