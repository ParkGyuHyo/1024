#include<stdio.h>

int main()
{
	int age, money;
	
	printf("����� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	
	if (age >= 19)
	{
		printf("����� �����Դϴ�.\n");
		money = 15000;
		printf("����� ������ %d�� �Դϴ�.", money);
	}
	else
	{
		printf("����� �̼������Դϴ�.\n");
		money = 9000;
		printf("����� ������ %d�� �Դϴ�.", money)	
	}
	
	return 0;
}
