// C. Even, Odd, Positive and Negative
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int even_count = 0;
  int odd_count = 0;
  int positive_count = 0;
  int negative_count = 0;

  for (int i = 1; i <= n; i++) {
    int x;
    scanf("%d", &x);

    if (x % 2 == 0) {
      even_count++;
    } else {
      odd_count++;
    }
    if (x > 0) {
      positive_count++;
    } else if (x < 0) {
      negative_count++;
    }
  }

  printf("Even: %d\n", even_count);
  printf("Odd: %d\n", odd_count);
  printf("Positive: %d\n", positive_count);
  printf("Negative: %d\n", negative_count);

  return 0;
}
