#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
}*first = NULL;

void insert_begin() 
{
	struct node *nn=(struct  node*)malloc(sizeof(struct node));
	struct node *temp=(struct  node*)malloc(sizeof(struct node));
	
	if(first==NULL)
	{
		printf("enter  the data\n");
		scanf("%d",&nn->data);
		nn->next=NULL;
		first=nn;
	}
	else
	{
		printf("enter  the data\n");
		scanf("%d",&temp->data);
        	temp->next = first; 
		first=temp;
 
	}
	
}
void insert_end()
{
	struct node *temp;
	struct node *nn=(struct  node*)malloc(sizeof(struct node));
	printf("enter  the data\n");
	scanf("%d",&nn->data);
	nn->next=NULL;
	temp=first;
   	while(temp->next!=NULL)
     		temp=temp->next;
   		temp->next=nn;
}
void display() 
{
	struct node *temp;
	temp = first;
	if (temp == NULL) 
	{
       		printf("no elements\n");
        	return;
	}
    	printf("elements in linked list are\n");
   	while (temp != NULL) 
	{
        	printf("%d\n", temp->data);
        	temp = temp->next;
	}
}

void delete_begin() 
{
	struct node  *temp;
	temp = first;
	first = first->next;
	temp->next = NULL;
	free(temp);
}


void delete_end()
{
    struct node *temp, *prev;
    if(first == NULL)
    {
        printf(" There is no element in the list.\n");
    }
    else
    {
        temp = first;
        prev = first;
        
        while(temp->next!= NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp == first)
        {
            first= NULL;
        }
        else
        {
            prev->next = NULL;
        }
        free(temp);
    }
}
int main() 
{
	int  op;  
	do {
		printf("1.insert in begin\n2.delete at start\n3.display\n4.insert at end\n5.delete at end\n6.exit\n");
        	printf("enter option\n");
        	scanf("%d", &op);
        	switch (op) 
		{
          		case 1:insert_begin();
				break;
          		case 2:delete_begin();
				break;
          		case 3:display(); 
		 		break;
			case 4:insert_end();
				break;
			case 5:delete_end();
				break;
	  		case 6:exit(0);
        	}
    	} 
	while (op != 7);
}

