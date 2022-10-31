#include <stdio.h>

/**
 * 题目：判断一个数字是否为质数。
 * 程序分析：质数（prime number）又称素数，有无限个。一个大于1的自然数，除了1和它本身外，不能被其他自然数整除。
 */
int main(int argc, char const *argv[]) {
    int n;
    scanf("%d", &n);
    int i, f = 1;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            f = 0;
        }
    }
    printf(f ? "prime" : "not prime");
    return 0;
}