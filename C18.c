#include <stdio.h>

// 求s=a+aa+aaa+aaaa+aa...a的值
// 其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)
// 几个数相加有键盘控制。

int main() {
  int s = 0;
  int a = 2;
  int t = a;
  int result = 0;
  printf("please input on number for control numbers:");
  scanf("%d", &s);

  result += t;
  for (int i = 1; i <= s; i++) {
    a *= 10;
    t += a;
    result += t;
  }
  printf("result is %d", result);
  return 0;
}
