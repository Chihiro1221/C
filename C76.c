#include <stdio.h>

double even(int n) {
    double sum = 0;
    int a = 1;
    for (int i = 2; i <= n; i += 2) {
        sum += (double) a / i;
    }
    return sum;
}

double odd(int n) {
    double sum = 0;
    int a = 1;
    for (int i = 1; i <= n; i += 2) {
        sum += a / i;
    }

    return sum;
}


int main() {
    /**
     * 题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。
     */
    double (*pf)(int);
    int n;
    printf("please input one of number:");
    scanf("%d", &n);

    if (n % 2 == 0) pf = even;
    else pf = odd;

    printf("result is %lf\n", pf(n));
    return 0;
}