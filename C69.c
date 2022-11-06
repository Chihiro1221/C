#include <stdio.h>

/**
 * 题目：有n个人围成一圈，顺序排号。
 * 从第一个人开始报数（从1到3报数），
 * 凡报到3的人退出圈子，
 * 问最后留下的是原来第几号的那位。
 */
int main() {
    int a[8] = {};
    // 填充每个人的序号
    for (int i = 0; i < 8; i++) {
        a[i] = i + 1;
    }
    // 序号
    int i;
    // 报数
    int s;
    // 参与人数
    int n = 8;
    // 退出人数
    int m = 0;
    int *p = a;
    while (n - 1 > m) {
        if (*(p + i) != 0) {
            s++;
        }
        if (s == 3) {
            s = 0;
            *(p + i) = 0;
            m++;
        }

        i++;

        if (i >= n) {
            i = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (*(p + i) != 0) {
            printf("%2d\n", *(p + i));
        }
    }

    return 0;
}
