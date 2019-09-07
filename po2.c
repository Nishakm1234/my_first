#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int b[2][2]={0,1,2,3};
int i,j;
for(i=0;i<5;i++)
printf("%d\n",i[a]);
for(i=0;i<5;i++)
printf("%d\n",a[i]);
for(i=0;i<2;i++)
for(j=0;j<2;j++)
printf("%d\n",b[i][j]);
for(i=0;i<2;i++)
for(j=0;j<2;j++)
printf("%d\n",j[b][i]);
}
