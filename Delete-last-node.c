#include <stdio.h>
#include <stdlib.h>
 struct node{
 int data;
 struct node *link; 
 }node;
struct node* createList(int ); 
void displayList(struct node *); 
struct node* delete_end_node(struct node *);

//Driver code
 int main()
 {
  struct node *list;
  int num,data;
  printf("Enter the number of nodes : ");
  scanf("%d",&num);
  list=createList(num);
  displayList(list);
  printf("The list after delete last node is : \n");
  list=delete_end_node(list);
   displayList(list);
   
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

//delete a node in end
 struct node* delete_end_node(struct node *head){
  struct node *curnode,*prevnode;
  if(head==NULL) printf("The list is already empty ");
  else if(head->link==NULL) return delete_first_node(head);
  else{
  curnode=head;
  prevnode=curnode;
 curnode=curnode->link;
   while(curnode->link!=NULL)
   {
   prevnode=curnode;
   curnode=curnode->link;
   } 
   prevnode->link=NULL;
   free(curnode);
  return head;
   }}
