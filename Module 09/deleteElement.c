#include <stdio.h>

int main() {
  int x, a;
  scanf("%d", &x);
  int arr[x - 1];

  for (int i = 0; i < x; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &a);
  for (int i = a; i < x; i++) {
    arr[i] = arr[i + 1];
  }

  for (int i = 0; i < x - 1; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
