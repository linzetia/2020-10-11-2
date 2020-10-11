//分数求和（计算1/1-1/2+1/3-....+1/99-1/100）的值，打印出结果
#include<math.h>
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += (pow(-1, i + 1.0)) * (1.0 / i);//用了pow函数求次方，1/i输出要为double，所以要改为1.0 / i

	}
	printf("sum=%lf\n",sum);
	return 0;
}