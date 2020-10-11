//分数求和（计算1/1-1/2+1/3-....+1/99-1/100）的值，打印出结果（法三）
#include<stdio.h>
int main()
{
	int i = 0;
	double sum1 = 0;
	double sum2 = 0;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)//余数为1，说明为奇数
		{
			sum1 += 1.0 / i;
		}
		else if (i % 2 == 0)//用if也行，else if和if形成交集  //余数为0说明为偶数
		{
			sum2 += -1.0 / i;
		}
	}
	sum = sum1 + sum2;
	printf("sum=%lf\n",sum);
	return 0;
}