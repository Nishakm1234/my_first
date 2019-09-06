#include<stdio.h>
#include<stdlib.h>
int input_array(int row,int col,int x[][2])
{	
	int i,j;
	
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&x[i][j]);
	
	return 0;
}

int multiply(int a[][2],int b[][2],int m,int n,int p,int q,int c[][2])
{
	int i,j,k,sum=0;
	
	printf("Multiplication of two matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{	
			for(k=0;k<p;k++)
			{
				sum+=a[i][k]*b[k][j];
        		}
 		
       			c[i][j] = sum;
        		sum = 0;
		}
		
	}
	printf("Product of the matrices:\n");
 
    	for(i=0;i<m;i++)
	{
      		for(j=0;j<q;j++)
        		printf("%d\t", c[i][j]);
 
      		printf("\n");
	}
}

int main()
{
	int i,j,a[2][2],b[2][2],c[2][2],m,n,p,q;
	printf("Enter the no of rows and columns of matrix A\n");
	scanf("%d%d",&m,&n);
	printf("Enter the matrix A\n");
	input_array(m,n,a);
	printf("Enter the no of rows and columns of matrix B\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("Multiplication is not possible\n");
		exit(0);
	}
	printf("Enter the matrix B\n");
	input_array(p,q,b);
	
	multiply(a,b,m,n,p,q,c);
	
	return 0;
}
