#include <stdio.h>

/**
 * 题目：写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
 */
int main(){
    char s[] = "houdunren.com";
    char *p = s;
    int len = 0;
    while(*p != '\0'){
        p++;
        len++;
    }
    printf("length is %d\n",len);
    return 0;
}