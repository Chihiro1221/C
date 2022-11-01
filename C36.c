#include <stdio.h>

/**
 * 题目：求100之内的素数。
 */
int isPrime(int i) {
    int t = 1;
    for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
            return 0;
        }
    }
    return t;
}

int main(int argc, char const *argv[]) {
    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%d\t", i);
        }
    }
    return 0;
}