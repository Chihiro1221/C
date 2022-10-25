#include <stdio.h>

/**
 * 一个数如果恰好等于它的因子之和，这个数就称为"完数"。
 * 例如6=1＋2＋3.
 * 编程找出1000以内的所有完数。
 * @param m
 * @return
 */

int perfectNumber(int m) {
  int s = 0;
  for (int i = 1; i < m; i++) {
    if (m % i == 0) {
      s += i;
    }
  }
  if (s == m) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  for (int i = 1; i <= 1000; i++) {
    if (perfectNumber(i)) {
      printf("全数:%d\n", i);
    };
  }
  return 0;
}
