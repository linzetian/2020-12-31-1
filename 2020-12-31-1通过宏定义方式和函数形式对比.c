//通过宏定义方式和函数形式对比
#include<stdio.h>
#define MAX(X,Y) (X>Y)?(X):(Y)
int main()
{
	int a = 10;
	int b = 20;
	int max = MAX(a,b);
	printf("%d",max);
	return 0;
}