#include<stdio.h>

void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target++= *source++;        
    }    
    *target = '\0';
} 
     
int compare_string(char *str1,char *str2)
{
while(*str1++==*str2++)
 return 1;
}

main()
{
    char source[100], target[100],str1[100],str2[100]; 
    int cmp,res;   
    printf("Enter source string\n");    
    gets(source);    
    copy_string(target, source);    
    printf("Target string is \"%s\"\n", target); 
    printf("Enter string1\n");    
    gets(str1);
    printf("Enter string2\n");    
    gets(str2);
    cmp=compare_string(str1,str2); 
    if(cmp==1)
    printf("Strings are same\n");
    else
    printf("Strings are different\n"); 
    return 0;
}


