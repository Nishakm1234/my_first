#include<stdio.h>
int swap(int *a,int *b)
{
int *temp;
temp=a;
a=b;
b=temp;
printf("a=%d\n",*a);
printf("b=%d\n",*b);
}
int main()
{
int a=2,b=4;
swap(&a,&b);
}
