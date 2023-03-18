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
int min_element_list(struct node*); 
int max_element_list(struct node*); 
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
 printf(" \n The maximum value in this list is: %d \n The minimum value in this list is: %d", max_element_list(list), min_element_list(list)); 
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
// maximum element in list
int max_element_list(struct node *snode){
	int max;
	max=snode->data;
	while(snode!=NULL){
	if(max<snode->data){
	max=snode->data;
	}
	snode=snode->link;	
	}
	return max;
	}

//minimum element in the list	
	int min_element_list(struct node *snode){
	int min;
	min=snode->data;
	while(snode!=NULL)
	{
	if(min>snode->data)
	{
	min=snode->data;	
	}
	snode=snode->link;	
	}
	return min;
	} 
