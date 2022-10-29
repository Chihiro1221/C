#include <stdio.h>

/**
 * 题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。
 * 问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。
 * 问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
 */

int f(int i) {
    int a = 0;
    if (i == 1) {
        a = 10;
    } else {
        a += f(i - 1) + 2;
    }
    return a;
}

int main(int argc, char const *argv[]) {
    int age = f(5);
    printf("total age is:%d\n", age);
    return 0;
}