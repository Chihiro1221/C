#include <stdio.h>
/**
 题目：有 1、2、3、4
 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？ known:
        1. have only three number
        2. differ from one another
        3. don't repeat
    output:
        1. count
        2. all of the output
 */
int main(int argc, const char *argv[]) {
  int hundred, decade, theUnit;
  int count = 0;
  for (hundred = 1; hundred < 5; hundred++) {
    for (decade = 1; decade < 5; decade++) {
      for (theUnit = 1; theUnit < 5; theUnit++) {
        if (hundred != decade && decade != theUnit && hundred != theUnit) {
          printf("%d%d%d\n", hundred, decade, theUnit);
          count++;
        }
      }
    }
  }
  printf("count:%d\n", count);
  return 0;
}
