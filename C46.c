#include <stdio.h>
#define PI 3.14
#define INT int
#define AREA(a,b) a * b * b

/**
 * 学习 define 宏定义的用法:
 * 1. 定义字面量
 * 2. 替换某种操作符
 * 3. 定义函数
 */
int main(){
    INT r = 2;
    float result = PI * r * r;
    printf("result is %f\n",result);
    printf("result is %f\n",AREA(PI,r));
}
