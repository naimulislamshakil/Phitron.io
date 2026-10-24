#include <stdio.h>

int main() {
  int x, a, b;
  scanf("%d", &x);
  int arr[x];

  for (int i = 0; i < x; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d %d", &a, &b);
  int insertArr[x + 1];

  for (int i = x; i >= 0; i--) {
    if (i == a) {
      insertArr[i] = b;
    } else if (i < a) {
      insertArr[i] = arr[i];
    } else {
      insertArr[i] = arr[i - 1];
    }
  }

  for (int i = 0; i < x + 1; i++) {
    printf("%d ", insertArr[i]);
  }

  return 0;
}
