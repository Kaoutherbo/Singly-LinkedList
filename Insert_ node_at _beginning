#include <stdio.h>
#include <stdlib.h>
//* Structure of a node (declaration of singaly linked list) 
struct node {
    int data;        
    struct node *next; 
}*head;

void createList(int n);
void insertNodeAtBeginning(int data);
void displayList();
//Driver code
int main()
{
    int n, data;

    
 // * Create a singly linked list of n nodes
    
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    createList(n);
// *Display data of singaly linked list
    printf("\nData in the list \n");
    displayList();

    
   // * Insert data at the beginning of the singly linked list
    
    printf("\nEnter data to insert at beginning of the list: ");
    scanf("%d", &data);
    insertNodeAtBeginning(data);
//*Display the data of singalay linked list after insert the data at the beginning 
    printf("\nData in the list \n");
    displayList();

    return 0;
}

// * Create a list of n nodes
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));
   //  * If unable to allocate memory for head node  
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
     //* Input data of node from the user
         
        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data; 
        head->next = NULL;

        temp = head;  
  // * Create n nodes and adds to linked list
        for(i=2; i<=n; i++)
        {
  newNode = (struct node *)malloc(sizeof(struct node));

  /* If memory is not allocated for newNode */
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
  newNode->next = NULL; 

 temp->next = newNode; 
                
  temp = temp->next; 
            }
       } 
    }

// * Create a new node and inserts at the beginning of the linked list.

void insertNodeAtBeginning(int data)
{
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
    newNode->data = data; 
    newNode->next = head; 
    head = newNode;
    }
}
 //* Display the list 
void displayList()
{
    struct node *temp;
  //   * If the list is empty i.e. head = NULL   
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
 printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
        }
    }
}
