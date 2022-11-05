#include <stdio.h>
#include <string.h>

/**
 * 在不适用strcmp函数，实现两个字符串比较
 */
int myStrcmp(char *s1, char *s2) {
    int len1 = sizeof(s1) / sizeof(char);
    int len2 = sizeof(s2) / sizeof(char);
    int t1 = 0, t2 = 0;
    for (int i = 0; i < len1; i++) {
        t1 += s1[i];
    }

    for (int i = 0; i < len2; i++) {
        t2 += s2[i];
    }

    printf("t1 = %d\nt2 = %d\n", t1, t2);
    return t1 - t2;
}

int main() {
    char s1[] = "houdunren.com";
    char s2[] = "HOUDUNREN>COM";
    int  len1 = sizeof(s1) / sizeof(char);
    int  len2 = sizeof(s2) / sizeof(char);
    int  t1 = 0, t2 = 0;
    for (int i = 0; i < len1; i++) {
        t1 += s1[i];
    }

    for (int i = 0; i < len2; i++) {
        t2 += s2[i];
    }

    if (t1 > t2) {
        printf("大于");
    } else if (t1 < t2) {
        printf("小于");
    } else {
        printf("等于");
    }

    return 0;
}
