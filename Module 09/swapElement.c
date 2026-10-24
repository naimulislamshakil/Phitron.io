#include <stdio.h>

int main() {
  int x, temp;
  scanf("%d", &x);
  int arr[x];

  for (int i = 0; i < x; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i <= x / 2; i++) {
    int j = x - 1 - i;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  for (int i = 0; i < x; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
