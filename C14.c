#include <stdio.h>

/**
* 将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
*/

int main() {
    int m = 90;
    int i;
    for (i = 2; i <= m; i++) {
        while (m % i == 0) {
            printf("%d\n", i);
            m = m / i;
        }
    }
    return 0;
}