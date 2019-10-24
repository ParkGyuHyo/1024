#include<stdio.h>

int main()
{
	int age, money;
	
	printf("당신의 나이를 입력하시오 : ");
	scanf("%d", &age);
	
	if (age >= 19)
	{
		printf("당신은 성인입니다.\n");
		money = 15000;
		printf("당신의 입장료는 %d원 입니다.", money);
	}
	else
	{
		printf("당신은 미성년자입니다.\n");
		money = 9000;
		printf("당신의 입장료는 %d원 입니다.", money)	
	}
	
	return 0;
}
