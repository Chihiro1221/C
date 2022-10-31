#include <stdio.h>
#include <string.h>

/**
 * 题目：删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母。
 */
int main(int argc, char const *argv[]) {
    char url[] = "https://houdunren.com";
    printf("%s\n",url);
    char s = ':';
    int i, j;
    for (i = 0; i < strlen(url); i++) {
        if (url[i] == s) {
            for (j = i; j < strlen(url); j++) {
                url[j] = url[j + 1];
            }
        }
    }
    printf("%s\n", url);
    return 0;
}