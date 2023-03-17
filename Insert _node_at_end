#include <stdio.h>
#include <stdlib.h>
//Declaration of linked list
struct node {
    int data;           
    struct node *link; 
};
//some functions 
struct node* createList(int n);
void displayList(struct node*); 
struct node* add_node_in_start(int, struct node *); 
//Driver code
int main()
{
    int n, data; 
    struct node *list; 
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
     list=createList(n);
    printf("\nData in the list : \n");
    displayList(list); 
     printf("Enter the data you want to add it at end : ");
    scanf("%d",&data);
    list=add_node_at_end(data,list);
    printf("The list after adding the data in end is : \n");
    displayList(list);
    return 0;
    }
//* Create a list of n nodes
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
//procedure to display the data of the list
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
//procedure that add a node at the end 
struct node* add_node_at_end(int n,struct node *head){
	struct node *new_node,*snode;
	
new_node=(struct node *)malloc(sizeof(struct node));
	if(new_node==NULL)
	{
	printf("Memory can not be allocated ");	
	}
	else
	{
		new_node->data=n;
		new_node->link=NULL;
		snode=head;
		while(snode->link!=NULL)
		{
			snode=snode->link;
		}
		snode->link=new_node;		
     }
return head;
}
