#include <stdio.h>
#include <math.h>
/**
 * 判断 101 到 200 之间的素数。
 * 什么是素数(质数)?
 *  只能被1或自身整除的数
 */

int isPrimeNumber(int i) {
    int j;
    int m = (int) sqrt((double) i);
    for (j = 2; j <= m; j++) {
        if (i % j == 0) {
            break;
        }
    }
    return j > m ? 1 : 0;
}

int main() {
    int i;
    int sum = 0;
    for (i = 101; i <= 200; i++) {
        if (isPrimeNumber(i)) {
            printf("%d\n", i);
            sum++;
        }
    }
    printf("一共有质数：%d\n", sum);
    return 0;
}