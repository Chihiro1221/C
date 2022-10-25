#include <stdio.h>
/**
 * 输入两个正整数m和n，求其最大公约数和最小公倍数。
 * 程序分析：
    （1）最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；
    （2）求最大公约数用辗转相除法（又名欧几里德算法）
 * 假如需要求 1997 和 615 两个正整数的最大公约数，用欧几里得算法，运算步骤如下：
 * 1997 / 615 = s（余 152)
 * 615 / 152 = 4（余 7)
 * 152 / 7 = 21（余 5）
 * 7 / 5 = 1（余 2）
 * 5 / 2 = 2（余 1）
 * 2 / 1 = 2（余 0）至此最大公约数为1
 */
int main() {
    int a = 1997;
    int b = 615;
    int temp = a * b;
    int r;
    r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    printf("最大公约数为：%d\n最小公倍数是：%d\n",b,temp / b);
    return 0;
}