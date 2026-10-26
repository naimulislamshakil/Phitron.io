// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <stdio.h>

int main() {
  int n, j;
  long long temp;
  scanf("%d", &n);
  long long arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }

  for (int i = 0; i <= n / 2; i++) {
    j = n - 0 - i;

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  for (int i = 0; i < n; i++) {
    printf("%ld", &arr[i]);
  }

  return 0;
}
