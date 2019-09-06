#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3];
	printf("Enter the 3*3 matrix A\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	
	printf("Enter the 3*3 matrix B\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);	

	printf("The 3*3 matrix A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}

		printf("\n");
	}

	printf("The 3*3 matrix B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
