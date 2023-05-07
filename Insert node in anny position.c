#include <stdio.h>
#include <stdlib.h>
 struct node{
 int data;
 struct node *link; 
 }node;
struct node* createList(int ); 
void displayList(struct node *); 
int lenght_list(struct node *);
struct node* insert_node(struct node *,int,int);
struct node* add_node_in_start(int,struct node*);

//Driver code
 int main()
 {
  struct node *list;
  int num,data,pos; 
  printf("Enter the number of nodes : ");
  scanf("%d",&num);
  list=createList(num);
  displayList(list);

  int len=lenght_list(list);
   do{
    printf("Enter the position you want to add in it : ");
    scanf("%d",&pos);
   }while(pos>len&&pos<0);
    printf("Enter the data of the node insert : ");
   scanf("%d",&data);

   list=insert_node(list,pos,data);
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
   
 
 //insert node in the first position
struct node* add_node_in_start(int n,struct node *head){
 struct node *new_node;
new_node=(struct node *)malloc(sizeof(struct node));
 if(new_node==NULL)
 {
 printf("Memory can not be allocated "); 
 }
 else
 {
  new_node->data=n;
  new_node->link=head;
  head=new_node;
 
    }return head;}
  
    //insert node in any position
    struct node* insert_node(struct node *head,int position,int data){
     struct node *snode,*newNode;
      if(head==NULL) printf("The list is empty! ");
      else if(position==1) return add_node_in_start(data,head);
      else{
    snode=head;
    while((position--)>1){
    snode=snode->link;
   }
   newNode=(struct node*)malloc(sizeof(struct node));
   newNode->data=data;
   newNode->link=snode->link;
   snode->link=newNode;
     return head;  
   }
    }
