#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{
	//if else语句中，自上而下执行，若符合条件，则执行相应条件下的代码块，其余的均不执行
	int a = 10;
	int b = 20;
	if (a > b)
	{
		printf("较大的是%d\n",a);
	}
	else
	{
		printf("较大的是%d\n",b);
	}
	//也可以有多个条件，但是依然是自上而下执行，遇到符合条件的就执行，其余不执行，总之最多执行一个代码块
	//若没有条件满足，则不执行if else中的任何代码块
	//if else中同样可以嵌套使用
	int c = 10;
	int d = 20;
	int e = 30;
	if (c > d)
	{
		printf("较大的是%d\n",c);
	}
	else if(d > e)
	{
		printf("较大的是%d\n",d);
	}
	else//若此处不写条件，则表示判断条件包含除上述语句中的所有情况
	{
		printf("较大的是%d\n",e);
	}

	//if else判断语句的实质是括号中的“值”，计算机的底层由“0”“1”组成，“1”表示真，“0”表示假
	//例如(5>1)是正确的，在计算机中表示的实际上是(1),表示判断为真，执行代码
	//(5<1)是错误的，在计算机上表示的实际上是(0),表示判断为假，不执行代码
	if (1)
	{
		printf("正确执行\n");
	}
	if (5 > 10)
	{
		printf("正确执行\n");
	}
	else
	{
		printf("条件为假\n");
	}
	return 0;
}