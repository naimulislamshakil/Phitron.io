// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <stdio.h>
#include <string.h>

int main() {
  int n, m, x;
  int freq[100001] = {0};
  scanf("%d %d", &n, &m);

  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    freq[x]++;
  }

  for (int i = 1; i <= m; i++) {
    printf("%d\n", freq[i]);
  }

  return 0;
}
