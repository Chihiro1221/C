#include <stdio.h>
#define N 10

/**
 * 题目：将一个数组逆序输出。
 */


int main(){
    int a[N]={0,1,2,3,4,5,6,7,8,9};
    int length = sizeof(a) / sizeof(int);

    for(int i = 0; i < length / 2; i++){
        int t = a[i];
        a[i] = a[length - 1 - i];
        a[length - 1 - i] = t;
    }

    for(int j = 0; j < length; j++){
        printf("%-2d",a[j]);
    }
}
