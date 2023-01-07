#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 10,j= 1,mul=1;
	int sum[11] = { 0 };
	for (; i > 0; i--)
	{
		for (mul=1,j = 1; j <= i; j++)
		{
			mul = mul * j;
			sum[i] = mul;
		}
		printf("%d的阶乘为%d\n",i, sum[i]);
	}
	int x = 0;
	for (i = 0;i < 11;i++)
		x = x + sum[i];
	printf("所求值为:%d",x);
	

		
}