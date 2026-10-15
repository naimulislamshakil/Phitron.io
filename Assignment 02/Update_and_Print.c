// https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-10/challenges/update-and-print/problem?isFullScreen=true

#include <stdio.h>

int main() {
  int n, x, v;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  scanf("%d %d", &x, &v);

  for (int i = n - 1; i >= 0; i--) {
    if (i == x) {
      printf("%d ", v);
    } else {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}
