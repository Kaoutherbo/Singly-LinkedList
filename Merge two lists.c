#include <stdio.h>
#include <stdlib.h>
 struct node{
 int data;
 struct node *link; 
 }node;
struct node* createList(int ); 
void displayList(struct node *); 
int lenght_list(struct node *);
struct node* merge_lists(struct node*,struct node*);
struct node* delet_list(struct node*);
//Driver code
int main(){
struct node *list1,*list2;
int num1,num2; 
 printf("Enter the number of nodes in the first list: ");
 scanf("%d",&num1);
 printf("Enter the number of nodes in the second list: ");
 scanf("%d",&num2);
 list1=createList(num1);
 list2=createList(num2);
 printf("The Final list after merging the two lists: \n");
 list1=merge_lists(list1,list2);
 displayList(list1);
 printf("Th deletion of the list : \n");
 list1=delet_list(list1);
 displayList(list1); 
 return 0;
}
// * Create a list of n nodes
struct node* createList(int n)
{
    struct node *newNode, *temp,*head;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));  
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else     
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; 
        head->link = NULL; 
        temp = head;  
        for(i=2; i<=n; i++)
        {
  newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
  printf("Unable to allocate memory.");
                break;
            }
            else
            {
     printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
  newNode->data = data; 
  newNode->link= NULL; 
 temp->link = newNode; 
                
  temp = temp->link; 
            }
        }
        return head;
    }
void displayList(struct node *head)
{
    struct node *temp;   
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
 printf("Data = %d\n", temp->data);
            temp = temp->link;             
        }
    }}
//merge the two lists
struct node* merge_lists(struct node*head1,struct node*head2){
 struct node*snode;
 snode=head1;
 while(snode->link!=NULL){
  snode=snode->link;
 }
 snode->link=head2;
 return head1;
  } 
