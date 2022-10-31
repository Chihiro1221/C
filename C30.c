#include <stdio.h>

/**
 * 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
 */

int main(int argc, char const *argv[]) {
    int n;

    printf("please enter five of number:");
    scanf("%d", &n);

    int a = n / 10000;
    int b = n % 10;

    int c = n % 10000 / 1000;
    int d = n % 100 / 10;

    if (a == b && c == d) {
        printf("回文数字");
    } else {
        printf("不是回文数字");
    }
    return 0;
}