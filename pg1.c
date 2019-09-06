#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d^2=%d\n",a[i],a[i]*a[i]);
	}
	return 0;
}
