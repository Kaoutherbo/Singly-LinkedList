#include <stdio.h>
#include <stdlib.h>
 struct node{
 int data;
 struct node *link; 
 }node;
struct node* createList(int ); 
void displayList(struct node *); 
struct node* delete_first_node(struct node *);
int lenght_list(struct node *);
struct node* delete_node(struct node*,int);

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
    printf("Enter the position you want to delete it : ");
    scanf("%d",&pos);
   }while(pos>len&&pos<0);
   printf("The list after delete the position  : \n");
   list=delete_node(list,pos);
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
   
 //delete the first node
 struct node* delete_first_node(struct node *head){ 
  if(head==NULL) printf("The list is already empty ");
  else{
 struct node*temp;
  temp=head;
 head=temp->link; 
   free(temp);
  return head;
}
  }
     //delete node due to the position 
     struct node* delete_node(struct node *head,int position){
      struct node *curnode,*prenode;
      if(head==NULL) printf("The list is empty! ");
      else if(head->link==NULL||position==1) return delete_first_node(head);
      else{
    curnode=head;
    prenode=head;
    while((position--)>1){
    prenode=curnode;
    curnode=curnode->link;
   }
   prenode->link=curnode->link;
   free(curnode);
    return head;
       
   }
  }
