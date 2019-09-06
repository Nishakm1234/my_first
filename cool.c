#include<stdio.h>
int main()
{
	int rate;
	char name[15];
	printf("What is your name?\n");
	scanf("%s",name);
	printf("Rate your coolness between 1 to 10\n");
	scanf("%d",&rate);
	if(rate>7)
		printf("%s,Dude you are cool\n",name);
	else
		printf("%s,Better luck next time\n",name);
	return 0;
}
