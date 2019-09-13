// C program to implement 
// the above approach 
#include<stdio.h> 
#include<stdlib.h> 
  
/* structure for a node */
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
  
/* Function to insert a node at the beginning of a Circular 
   linked list */
void insert_begin(struct Node **head, int data) 
{ 
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node)); 
    struct Node *temp = *head; 
    ptr1->data = data; 
    ptr1->next = *head; 
  
    /* If linked list is not NULL then set the next of last node */
    if (*head!= NULL) 
    { 
        while (temp->next != *head) 
            temp = temp->next; 
        temp->next = ptr1; 
    } 
    else
        ptr1->next = ptr1; /*For the first node */
  
    *head= ptr1; 
} 

void insert_end(struct Node **head, int data) 
{ 
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node)); 
    struct Node *temp = *head; 
    ptr1->data = data; 
    ptr1->next = NULL;
    /* If linked list is not NULL then set the next of last node */
    if (*head!= NULL) 
    { 
        while (temp->next != *head) 
            temp = temp->next; 
        temp->next=ptr1;
    	ptr1->next=*head;
    } 
    else
    {
        ptr1->next = ptr1; /*For the first node */
  
    	*head= ptr1; 
    }
} 

 
/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head) 
{ 
    struct Node *temp = head; 
    if (head != NULL) 
    { 
        do
        { 
            printf("%d ", temp->data); 
            temp = temp->next; 
        } 
        while (temp != head); 
	
    } 
    printf("\n");
} 
  
/* Driver program to test above functions */
int main() 
{ 
    /* Initialize lists as empty */
    struct Node *head = NULL; 
  
    int n, pos,ch;


	while(1)
	{
		printf ("1.insert at beginning\n2.print\n3.insert at end\n4.exit\nEnter your choice:\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:printf ("enter the numbers to insert :");
				scanf ("%d", &n);
				insert_begin(&head, n);
				break;
			
			case 2:printf("Contents of Circular Linked List\n "); 				       printList (head);
				break;
			case 3:printf ("enter the numbers to insert :");
				scanf ("%d", &n);
				insert_end(&head, n);
				break;
			
			case 4:exit(1);
		}
	}
  
    
    return 0; 
} 
