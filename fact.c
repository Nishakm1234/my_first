#include<stdio.h>
int fact(int a)
{
	if(a==0)
		return 1;
	else
		return a*fact(a-1);
}
int main()
{
	int x;
	x=fact(6);
	printf("Factorial=%d\n",x);
	return 0;
}
