#include <stdio.h>

/**
 * 题目：利用递归方法求5!。
 */
int recursion(int n) {
    return n == 1 ? n : n * recursion(n - 1);
}

int main() {
    int n = 0;
    printf("please enter number:");
    scanf("%d", &n);

    printf("result = %d\n", recursion(n));
    return 0;
}
