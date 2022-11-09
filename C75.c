#include <stdio.h>

/**
 * 题目：输入一个整数，并将其反转后输出。
 */

int main() {
    int n = 1234576;
    int remainder;
    int m = 0;
    while (n != 0) {
        remainder = n % 10;
        m = m * 10 + remainder;
        n /= 10;
    }

    printf("inverse number is %d\n", m);
    return 0;
}