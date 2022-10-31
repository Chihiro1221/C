#include <stdio.h>

/**
 * 题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
 */

int main(int argc, char const *argv[]) {
    int n;

    printf("please enter five of number:");
    scanf("%d", &n);

    int a = n / 10000;
    int b = n % 10000 / 1000;
    int c = n % 1000 / 100;
    int d = n % 100 / 10;
    int e = n % 10;
    if (a) {
        printf("5位数：%d%d%d%d%d", e, d, c, b, a);
    } else if (b) {
        printf("4位数：%d%d%d%d", d, c, b, a);
    } else if (c) {
        printf("3位数：%d%d%d", c, b, a);
    } else if (d) {
        printf("2位数：%d%d", b, a);
    } else if (e) {
        printf("1位数：%d", a);
    }
    return 0;
}