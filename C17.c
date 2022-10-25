#include <stdio.h>

/**
 * 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
 */
int main() {
    char s;
    int letters = 0, numbers = 0, space = 0, others = 0;
    while ((s = getchar()) != '\n') {
        if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z')) {
            letters++;
        } else if (s >= '0' && s <= '9') {
            numbers++;
        } else if (s == ' ') {
            space++;
        } else {
            others++;
        }
    }
    printf("letters:%d\nnumbers:%d\nspace:%d\nothers:%d\n", letters, numbers, space, others);
    return 0;
}