#include <stdio.h>

/**
 * 题目：打印出如下图案（菱形）
 *
   *
  ***
 *****
*******
 *****
  ***
   *
 */
int main() {
    int i, j, s;
    for (i = 0; i < 4; i++) {
        for (s = i; s < 3; s++) {
            printf(" ");
        }

        for (j = 0; j <= 2 * i ; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (s = 0; s <= i; s++) {
            printf(" ");
        }

        for (j = 2 * i; j <= 4 ; j++) {
            printf("*");
        }

        printf("\n");
    };

    return 0;
}