#include<stdio.h>
int main()
{
char *name[]={"ravi","ravindra","ravindralala"};
printf("%s\n",*name+1);
printf("%s\n",*(name+2)+7);
}
