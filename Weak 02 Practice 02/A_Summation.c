// A. Summation
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  long long arr[n];
  long long sum = 0;

  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
    sum += arr[i];
  }

  if (sum < 0) {
    sum = -sum;
  }

  printf("%lld\n", sum);

  return 0;
}
