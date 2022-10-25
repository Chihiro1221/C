#include <stdio.h>

 int main() {
  int a = 20, b = 15, c = 1, t;
  //    int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
  //    int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
  //    int middle =  (a + b + c) - max - min;
  //
  //    printf("%d %d %d\n",min,middle,max);
  if (a > b) {
    t = a;
    a = b;
    b = t;
  }
  if (a > c) {
    t = a;
    a = c;
    c = t;
  }
  if (b > c) {
    t = b;
    b = c;
    c = t;
  }
  printf("%d %d %d\n", a, b, c);
  return 0;
}
