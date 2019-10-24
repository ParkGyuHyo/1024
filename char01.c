#include<stdio.h>

int main()
{
	char ch;
	
	printf("대문자 입력 : ");
	scanf("%c", &ch);
	
	printf("%c의 소문자는 %c 입니다.", ch, (ch+32));
	
	return 0;
}
