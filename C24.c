#include <stdio.h>

/**
 * 题目：求1+2!+3!+...+20!的和。
 */
int main() {
    long double sum = 0;
    int i;
    long double a = 1;
    for (i = 1; i <= 20; i++) {
        a = a * i;
        sum += a;
    }
    printf("sum=%Lf\n", sum);
    return 0;
}