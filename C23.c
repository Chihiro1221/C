#include <stdio.h>

/**
 * 题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
 */
int main() {
    float a = 1, b = 2;
    float sum = 0;
    int i, temp;
    for (i = 0; i < 20; i++) {
        sum += b / a;
        temp = b;
        b = a + b;
        a = temp;
    }
    printf("sum=%f\n",sum);
    return 0;
}