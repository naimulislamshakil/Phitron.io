// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <stdio.h>
#include <string.h>

int main() {
  char s[100001];
  char change[100001];
  fgets(s, 100001, stdin);

  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == ',') {
      change[i] = ' ';
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      change[i] = s[i] + 32;
    } else if (s[i] >= 'a' && s[i] <= 'z') {
      change[i] = s[i] - 32;
    }
  }
  printf("%s", change);
  return 0;
}
