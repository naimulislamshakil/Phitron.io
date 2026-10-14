// B. Searching
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  long long arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }

  long long x;
  scanf("%lld", &x);

  long long position = -1;

  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      position = i;
      break;
    }
  }

  printf("%lld\n", position);

  return 0;
}
