#include <stdio.h>
#include <stdlib.h>
#include "linked list.h"
struct node* rotate_list_right_side(struct node
*head,int num);
//Driver code
int main(){
    int a[10],num,key; 
    struct node *list=NULL;
    printf("How many nodes do you want ?: ");
    scanf("%d",&num);
   list=createList(num);
   printf("The list is :\n");
   displayList(list);
  printf("\nEnter the number of rotation : ");
  scanf("%d",&key);
  list=rotate_list_right_side(list,key);
  printf("The list after rotation is :\n");
  displayList(list);
    return 0;  
}
//rotate a list
struct node* rotate_list_right_side(struct node
*head,int num){
 struct node *snode=head,*temp=head,*curnode=head;
 if(head==NULL)return NULL;
 else{
 while(snode->link!=NULL)
 {
  snode=snode->link;
 }
 for(int i=0;i<num;i++){
  snode->link=curnode;
 temp=curnode->link;
  curnode->link=NULL;
  snode=curnode;
  curnode=temp;
 }}
 return temp;
 }
