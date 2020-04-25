#include"stdio.h"//编译预处理命令
void main()//函数无返回值
{
	int num,price,total;
	printf("Please input num and price:");//输入数字和价格
	scanf("%d%d",&num,&price);//给数字和价格赋值
	total=num*price;//总价等于数字乘以价格
	printf("\nThe amount of consumption will be %d*%d=%d.",num,price,total);//将总价求出
}