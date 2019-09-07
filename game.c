#include <stdio.h>
#include <stdlib.h>

void printMatrix(char val)
{
    unsigned char i,j;
    if(!val){
        /*For blank matrix*/
 
        for(i=0;i<3;i++)
	{    
       		 printf("\t\t\t");       
        	 for(j=0;j<3;j++)
		 {
			printf("[%3c ] ",mat[i][j]);
		 } 
		 printf("\n");
        }
 
        return;
    }
        for(i=0;i<3;i++)
	{
            printf("\t\t\t");
            for(j=0;j<3;j++)
	    {
		printf("[%3c ] ",mat[i][j]);
	    } 
		printf("\n");
        }
        return;
}
