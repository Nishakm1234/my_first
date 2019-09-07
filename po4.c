#include<stdio.h>
int main()
{
char * name1="nisha";
char name2[]="Mathew";
printf("%.3s\n",name1);
printf("%s\n",name2);
printf("%c\n",name1[2]);
printf("%c\n",name2[4]);
printf("%c\n",name1[2]+1);
printf("%c\n",name1[2]+2);
printf("%s\n",name1+name1[1]-name1[3]);
}
