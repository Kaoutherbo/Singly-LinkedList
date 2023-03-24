#include <stdio.h>
#include <stdlib.h>
#include "linked list.h"
struct node* reorder_even_odd_numbers_in_list(struct node *head);
//Driver code
int main(){
    int a[10],num,key; 
    struct node *list=NULL;
    printf("How many nodes do you want ?: ");
    scanf("%d",&num);
   list=createList(num);
   printf("The list is :\n");
   displayList(list);
 list=reorder_even_odd_numbers_in_list(list);
  printf("\nThe list after reorder the element is :\n");
  displayList(list);
    return 0;  
}
// reorder a list placing all even numbered nodes ahead of all odd numbered nodes
struct node* reorder_even_odd_numbers_in_list(struct node *head)
{
struct node *snode=head,*temp=head;int count=0;
if(head==NULL)	return NULL;
 else{
	while(snode->link!=NULL){
		temp=snode->link;
	   while(temp!=NULL)
	   {
	   	if(temp->data%2==0)
	   	{
	   	int swap=snode->data;
	   	   snode->data=temp->data;
	   		temp->data=swap;		
	   	}
	   	temp=temp->link;
	   }
			
	snode=snode->link;
		}
}
return head;
	}
