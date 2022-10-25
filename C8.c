//
//  九九乘法表.c
//  algorithm
//
//  Created by 王浩楠 on 2022/10/8.
//
#include <stdio.h>

int main() {
  printf("请继续输入哈哈哈哈");
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d × %d = %d\t", j, i, j * i);
    }

    printf("\n");
  }
  return 0;
}
