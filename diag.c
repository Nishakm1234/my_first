#include<stdio.h>
int main()
{
	int a[5][5],i,j;
	printf("Enter the 5*5 matrix\n");
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	printf("The diagonal elements are as follows\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((i==j)||(i+j==4))
				printf("%d\t",a[i][j]);
			
			else
				printf("\t");
		}
		printf("\n");
	}
	return 0;
}
