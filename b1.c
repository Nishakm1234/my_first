#include<stdio.h>
int add(int x,int y)
{
	if(y==0)
		return x;
	else
		return add(x^y,(x&y)<<1);
}
int main()
{
	int sum;
	sum=add(5,6);
	printf("Sum=%d",sum);
	return 0;
}
	
	
