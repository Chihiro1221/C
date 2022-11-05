#include <stdio.h>

/**
 * 题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
 */

int main() {
    int a[5] = {12, 123, 4, 65, 21};
    int len  = sizeof(a) / sizeof(int);
    int max = 0, min = 0;

    for (int i = 1; i < 5; i++) {
        if (a[i] > a[max]) {
            max = i;
        }
        if (a[i] < a[min]) {
            min = i;
        }
    }

    int temp = a[0];
    a[0]     = a[max];
    a[max]   = temp;

    int temp2  = a[len - 1];
    a[len - 1] = a[min];
    a[min]     = temp2;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
