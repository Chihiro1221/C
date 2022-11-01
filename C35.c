#include <stdio.h>

/**
 * 题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
 */
int main(int argc, char const *argv[]) {
    char s[21] = "https://houdunren.com";
    char *p = s;
    int length;

    // 计算字符长度
    while (*p != '\0') {
        length++;
        p++;
    }

    for (int i = 0; i < length / 2; i++) {
        char t = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = t;
    }

    printf("%s\n", s);
    return 0;
}