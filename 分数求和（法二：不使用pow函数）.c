//分数求和（计算1/1-1/2+1/3-....+1/99-1/100）的值，打印出结果（法二：不使用pow函数）
#include<stdio.h>
int main()
{
	int i = 0;
	int flat = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += flat*1.0 / i;
		flat = -flat;
	}
	printf("sum=%lf", sum);
}