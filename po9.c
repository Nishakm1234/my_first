#include<stdio.h>
int main()
{
int x=10;
float p=22.9;
double a=29.9;
char *str="string";
int*y=&x;
float *q=&p;
double*b=&a;
printf("%d\n",sizeof(x));
printf("%d\n",sizeof(y));
printf("%d\n",sizeof(p));
printf("%d\n",sizeof(q));
printf("%d\n",sizeof(a));
printf("%d\n",sizeof(b));
printf("%d\n",sizeof(str));
}
