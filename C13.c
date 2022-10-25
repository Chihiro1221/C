#include <stdio.h>
#include <math.h>

/**
 * 打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。
 * 例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
 */
int main() {
    for (int i = 100; i < 1000; i++) {
        int digit = i % 10;
        int decade = i % 100 / 10;
        int hundred = i / 100;
        if (pow(digit, 3) + pow(decade, 3) + pow(hundred, 3) == i) {
            printf("水仙花数字：%d\n", i);
        }
    }

    return 0;
}