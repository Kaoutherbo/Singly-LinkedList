#include <stdio.h>
#include <stdlib.h>
 struct node{
 int data;
 struct node *link; 
 }node;
struct node* createList(int ); 
void displayList(struct node *); 
int lenght_list(struct node *);
struct node* delete_middle_node(struct node *);
//Driver code
 int main()
 {
  struct node *list;
  int num,data;
  printf("Enter the number of nodes : ");
  scanf("%d",&num);
  list=createList(num);
  displayList(list); 
  printf("The list after deleting in middle : \n");
   list= delete_middle_node(list);
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



  //function that calculate the lenght of list
int lenght_list(struct node *head){
 int len=0;
  while(head!=NULL)
  {
  head=head->link;
   len++;
  }
  return len;
}
   
 //delete the middle node
   struct node* delete_middle_node(struct node *head){
    struct node *curnode,*prenode;
    if(head==NULL) printf("The list is empty! ");
    else{
    curnode=head->link;
    prenode=head;
    int count,len=lenght_list(head);
   if(len%2==0) count=len/2;
   else count=(len+1)/2;
   while((count--)>2){
    prenode=curnode;
    curnode=curnode->link;
   }
   prenode->link=curnode->link;
   free(curnode);
    return head; 
    }
     }
