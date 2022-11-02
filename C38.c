#include <stdio.h>

/**
 * 题目：求一个3*3矩阵对角线元素之和
 */
int main(){
    int n[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i;
    int sum = 0;
    for(i = 0; i <3; i++){
        sum += n[i][i];
    }

    printf("sum of opposite angle line is %d\n",sum);
    return 0;

}
