#include<stdio.h>
int main()
{
	int choice;
	printf("WHo is the Captain of Indian Cricket Team\n");
	printf("0-Dhoni\n1-Virat\n2-Hardik\n3-Sachin\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 0:printf("No,Dhoni was the captain before Virat\n");
			break;
		case 1:printf("Yes,Virat is the captain of Indian Cricket Team\n");
			break;
		case 2:printf("No,Hardik is one of the player\n");
			break;
		case 3:printf("No,Sachin was a great player\n");
			break;
		default:printf("Enter a correct option\n");
			break;
	}
	return 0;
}
