#include <stdio.h>

/**
 * 程序分析：国际象棋棋盘由64个黑白相间的格子组成，分为8行*8列。用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。
 * @return int
 */
int main() {
    for (int i = 1; i <= 64; i++) {
        i % 2 == 0 ? printf("😊") : printf("😭");
        if (i % 8 == 0) {
            printf("\n");
        }
    }
}