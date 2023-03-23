#include <stdio.h>
#include <stdlib.h>
#include "linked list.h"
struct node* swap_list(struct node*,int);
//Driver code
int main(){
    int a[10],num,key; 
    struct node *list=NULL;
    printf("How many nodes do you want ?: ");
    scanf("%d",&num);
   list=createList(num);
   printf("The list before swap :\n");
   displayList(list);
   do{
   printf("\nEnter the number of swap ");
   scanf("%d",&key);
   	}while(key<=0||key>=lenght_list(list));
 list=swap_list(list,key);
 printf("The list after swap :\n");
  displayList(list);
    return 0;  
}
//swap function
struct node* swap_list(struct node*head,int num){
struct node *first_list=NULL,*last_list=NULL,*middle_list=NULL,*curnode=head,*temp;
int count=0;
	if(curnode==NULL)printf("The list is empty ");
	else{
		while(curnode!=NULL){
			count++;
			if(count<=num){
		if(first_list==NULL){
 first_list=add_node(first_list,curnode->data);
			
					}
				else
				{
first_list=add_node_in_start(first_list,curnode->data);		}

			}
		else if(count >lenght_list(head)-num){
			if(last_list==NULL){
	last_list=add_node(last_list,curnode->data);
			}
			else {
last_list=add_node_in_start(last_list,curnode->data);
			}
			
			}
else {
			if(middle_list==NULL){
middle_list=add_node(middle_list,curnode->data);
				}
			else{
middle_list=add_node_in_end(middle_list,curnode->data);
			}
			
		}
			curnode=curnode->link;
		}
		
			
	temp=first_list;
first_list=merge_lists(last_list,middle_list);	
first_list=merge_lists(first_list,temp);
		
	}
	return first_list;
	}
