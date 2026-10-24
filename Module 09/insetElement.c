#include <stdio.h>

int main() {
  int x, a, b;
  scanf("%d", &x);
  int arr[x + 1];

  for (int i = 0; i < x; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d %d", &a, &b);

  if (a < 0 || a > x) {
    return 0;
  }

  for (int i = x; i > a; i--) {
    arr[i] = arr[i - 1];
  }

  arr[a] = b;

  for (int i = 0; i < x + 1; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
