#include<stdio.h>
int findmod(int a,int b)
{
	return a%b;
}
int main()
{
	int m;
	m=findmod(15,8);
	printf("Mod=%d\n",m);
	return 0;
}
