#include <stdio.h>

/**
 * 利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
 */
int main() {
    int scope = 0;
    printf("please input your scope:\n");
    scanf("%d", &scope);
    char *level = scope >= 90 ? "A" : scope >= 60 ? "B" : "C";
    printf("your scope is %c\n", *level);
}