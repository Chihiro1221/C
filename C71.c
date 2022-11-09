#include <stdio.h>

/**
 * 题目：编写input()和output()函数输入，输出5个学生的数据记录。
 */
struct student {
    char name[20];
    char sex[5];
    int age;
};

void input(struct student *stus, int len) {
    for (int i = 0; i < len; i++) {
        scanf("%s %s %d", stus[i].name, stus[i].sex, &stus[i].age);
    }
}

void output(struct student *stus, int len) {
    for (int i = 0; i < len; i++) {
        printf("name=%s,sex=%s,age=%d\n", stus[i].name, stus[i].sex, stus[i].age);
    }
}

int main() {
    struct student stus[5];
    int len = sizeof(stus) / sizeof(struct student);

    input(stus, len);
    output(stus, len);

    return 0;
}