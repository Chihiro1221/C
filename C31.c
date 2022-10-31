#include <stdio.h>

/**
 * 题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
 */
int main(int argc, char const *argv[]) {
    char s;
    printf("please enter first letter:");
    scanf("%s", &s);
    switch (s) {
        case 'm':
            printf("monday\n");
            break;
        case 't':
            printf("please enter next one of letter:");
            scanf("%s", &s);
            if (s == 'u') {
                printf("tuesday\n");
            } else if (s == 'h') {
                printf("thursday\n");
            } else {
                printf("unknown\n");
            }
            break;
        case 'w':
            printf("wednesday\n");
            break;
        case 'f':
            printf("friday\n");
            break;
        case 's':
            printf("please enter next one of letter:");
            s = getchar();
            if (s == 'a') {
                printf("saturday\n");
            } else if (s == 'u') {
                printf("sunday\n");
            } else {
                printf("unknown\n");
            }
            break;
    }

    return 0;
}