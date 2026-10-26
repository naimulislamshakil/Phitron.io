// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long long arr[n];
  long long revers[n];

  for (int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }

  for (int i = n - 1; i >= 0; i--) {
    revers[n - 1 - i] = arr[i];
  }

  for (int i = 0; i < n; i++) {
    printf("%ld ", revers[i]);
  }

  return 0;
}
