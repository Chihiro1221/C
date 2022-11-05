#include <stdio.h>
/**
 * 题目：有 n 个整数，使其前面各数顺序向后移 m 个位置，最后m个数变成最前面的 m 个数。
 * 1 2 3 4 5
 * 5,1,2,3,4
 * 4,5,1,2,3
 *
 */
int main() {
    int  a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int  len = sizeof(a) / sizeof(int);
    int *p;
    int  n = 5;

    for (int i = 0; i < n; i++) {
        p        = a + len - 1;
        int temp = *p;
        while (p > a) {
            *p = *(p - 1);
            p--;
        }
        *p = temp;
    }

    for (int i = 0; i < len; i++) {
        printf("%-4d", a[i]);
    }
    return 0;
}
