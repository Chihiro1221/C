#include <stdio.h>

/**
 * 题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
 */

void printArr(int a[],int length) {
    for (int i = 0; i < length; i++) {
        printf("%d,", a[i]);
    }
}

int main() {
    int a[11] = {100,40,28,19,16,13,9,7,4,1};
    int length = sizeof(a) / sizeof(int);
    int b = 10;

    printf("原数组为:");
    printArr(a,length);
    printf("\n");

    if (b > a[9]) {
        a[10] = b;
    } else {
        for (int i = 0; i < length; i++) {
            if (b > a[i]) {
                continue;
            } else {
                int j;
                for (j = length - 2; j >= i; j--) {
                    a[j + 1] = a[j];
                }
                a[j + 1] = b;
                break;
            }
        }
   }

    printf("现数组为:");
    printArr(a,length);

    return 0;
}
