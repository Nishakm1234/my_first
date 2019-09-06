#include<stdio.h>
int input_array(int x[][2])
{	
	int i,j;
	
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&x[i][j]);
	
	return 0;
}

int add(int a[][2],int b[][2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{	
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int i,j,a[2][2],b[2][2];
	printf("Enter the matrix A\n");
	input_array(a);
	printf("Enter the matrix B\n");
	input_array(b);
	printf("Addition of two matrix\n");
	add(a,b);
	
	return 0;
}
