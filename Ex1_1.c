#include"stdio.h"//����Ԥ��������
void main()//�����޷���ֵ
{
	int num,price,total;
	printf("Please input num and price:");//�������ֺͼ۸�
	scanf("%d%d",&num,&price);//�����ֺͼ۸�ֵ
	total=num*price;//�ܼ۵������ֳ��Լ۸�
	printf("\nThe amount of consumption will be %d*%d=%d.",num,price,total);//���ܼ����
}