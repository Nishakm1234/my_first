#include<stdio.h>
int main()
{
	char x;
	char res;
	printf("Enter a lower case letter\n");
	scanf("%c",&x);
	res=x-31;
	printf("Result is %c\n",res);
	if(res=='A'||res=='E'||res=='I'||res=='O'||res=='U')
		printf("It is a vowel\n");
	else
		printf("It is not a vowel\n");
	return 0;
}
	
