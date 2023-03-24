#include <stdio.h>
#include <stdlib.h>
#include "linked list.h"
void find_pair(struct node *head,int val);
//Driver code
int main(){
    int num; 
    struct node *list=NULL;
    printf("How many nodes do you want ?: ");
    scanf("%d",&num);
   list=createList(num);
   printf("The list is :\n");
   displayList(list);
   printf("\nEnter the number : ");
    scanf("%d",&num);
    find_pair(list, num);
 
    return 0;  
}
//find pair in list whose sum is equal to given value
void find_pair(struct node *head,int val){
	struct node *temp=head,*snode=head;
	while(snode->link!=NULL){ 
		temp=snode->link;
		while(temp!=NULL){
	if(temp->data+snode->data==val){
	printf("\n%d + %d = %d ",temp->data,snode->data,val);	
			}
		temp=temp->link;
		}
		snode=snode->link;
	}
}
