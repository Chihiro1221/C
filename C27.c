#include <stdio.h>

/**
 * 题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
 */

void repeatInput(int i){
	int s;
	if(i == 1){
		s = getchar();
		putchar(s);
	}else{
		s = getchar();
		repeatInput(i - 1);
		putchar(s);
	}
}

int main(int argc, char const *argv[])
{
    printf("please input five of string:");
	repeatInput(5);
	return 0;
}