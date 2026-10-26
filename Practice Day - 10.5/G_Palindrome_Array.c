// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int isSame = 1;
  long long arr[n], revers[n];

  for (int i = 0; i < n; i++) {
    scanf("%lld", &arr[i]);
  }

  for (int i = n - 1; i >= 0; i--) {
    revers[n - 1 - i] = arr[i];

    if (revers[n - 1 - i] == arr[n - 1 - i]) {
      isSame = 1;
    } else {
      isSame = 0;
      break;
    }
  }

  if (isSame == 1) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}
