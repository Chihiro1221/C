#include <stdio.h>

/**
 * 学习static,加上static关键字之后该变量就只能是被定义这一次，之后的所有重新定义都将无效
 */

int n = 100;

int main(){
    for(int i = 0; i < 5; i++){
        static int sum = 0;
        sum += i;
        printf("sum is %d\n",sum);
    }
    
    return 0;
}
