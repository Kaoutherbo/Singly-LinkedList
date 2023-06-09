#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
struct node{
 int data;
 struct node *link;
};
//add node in the begining of the list
struct node* add_node_in_start(struct node *head ,int num){
 struct node *newNode;
 newNode=(struct node *)malloc(sizeof(struct node));
 newNode->data=num;
 newNode->link=head;
 head=newNode;  
 return head;
}
//add node in the end of the list
struct node* add_node_in_end(struct node *head,int num){
 struct node *snode=head,*newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data=num;
 if(head==NULL) return NULL;
 else{
 newNode->link=NULL;
 while(snode->link!=NULL){
  snode=snode->link;
 }
 snode->link=newNode;
 }
 return head;
}
// calculate the lenght of the list
int lenght_list(struct node *head){
 struct node *snode=head;
 int len=0;
 if(snode==NULL) return NULL;
 else{
  while(snode!=NULL){
   len++;
   snode=snode->link;
  }
 }
 return len;
}
//add node in the middle of the list 
struct node* add_node_in_middle(struct node *head,int num){
struct node *snode=head,*newNode;int i,middle;
newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=num;
if(head==NULL) return NULL;
else if(lenght_list(snode)<2) return add_node_in_start(snode,num);
else{
if(lenght_list(snode)%2==0) middle=lenght_list(snode)/2;
else middle=(lenght_list(snode)+1)/2;
for(i=0;i<middle;i++){
 snode=snode->link;
}
newNode->link=snode->link;
snode->link=newNode;
}
return head;
}
//display the list
void displayList(struct node *head){
 if(head==NULL) printf("The list is empty!");
 else{
  while(head!=NULL){
   printf(" %d ",head->data);
   head=head->link;
  }
 }
}
//reverse the list
struct node*reverse_linked_list(struct node*head){
 struct node *prevnode,*currnode,*snode=head;
 if(snode==NULL)return NULL;
 else{
  prevnode=snode;
  currnode=snode->link;
  snode=snode->link;
  prevnode->link=NULL;
  while(snode->link!=NULL){
   snode=snode->link;
   currnode->link=prevnode;
   prevnode=currnode;
   currnode=snode;
  }
  snode=prevnode;
 }
 return head;
 }
 //merge the two lists
struct node* merge_lists(struct node*head1,struct node*head2){
 struct node*snode;
 snode=head1;
 while(snode->link!=NULL){
  snode=snode->link;
 }
 snode->link=head2;
 return head1;
}//delete the first node
struct node* delete_first_node(struct node *head){ 
  if(head==NULL) return NULL;
  else{
 struct node*temp;
  temp=head;
 head=temp->link; 
   free(temp);
  return head;
}
  }
//delete a node in end
 struct node* delete_last_node(struct node *head){
  struct node *curnode,*prevnode;
  if(head==NULL) return NULL;
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
   head=prevnode;
  return head;
   }} 
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
    }}
//delete node due to the position 
     struct node* delete_node(struct node *head,int position){
      struct node *curnode,*prenode;
      if(head==NULL) return NULL;
      if(head->link==NULL) return delete_first_node(head);
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
       
   }}  
//delete list
struct node* delete_list(struct node*head){
 if(head==NULL) printf("The list is empty!");
else if(head->link==NULL) return delete_first_node(head);
 else{
  while(head->link!=NULL){
   head=head->link;
   free(head);
  }
  head->link=NULL;
  free(head);
  return head;
 }
}
//function that calculate sum of data of linked list
int sum_list(struct node *snode){
 int s=0;    
 if(snode==NULL) return s;
 else
 {
  while(snode!=NULL)
  {
          s+=snode->data; 
   snode=snode->link; 
  }
  return s;
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
//search for element in linked list
bool search_element(struct node *head,int data){
 if(head==NULL) return false;
 else{
  while(head->link!=NULL){
   head=head->link;
   if(head->data==data)
   {
    return true;break;
   }
  }
 }
return false;
 }
//occurence of given element in list
int occurence_element_list(struct node *head,int data){
 int count=0;
 if(head==NULL)return 0;
 else{
  while(head!=NULL){
   if(head->data==data) count++;
   head=head->link;
   } 
   
  }
 return count;
 }
//linked list is palindrom or not
 bool is_palindrom_list(struct node *head){
  struct node *snode;
  snode=reverse_linked_list(head);
  while(head!=NULL&&snode!=NULL){
  if(snode->data!=head->data) {return false;break;} 
   snode=snode->link;
   head=head->link;
        }
  return true;
  }
//get the data correspondding to the index of the node
int get_data_from_list(struct node*head,int index){
   int count=0;
   struct node*snode;
   snode=head;
  if(snode==NULL)return NULL;
  else{
   while(snode!=NULL)
   {
    count++;
    if(count==index)
    {
     return snode->data;break;
    }
    snode=snode->link;
   }}}
   //insert node in any position
struct node* insert_node(struct node *head,int position,int data){
     struct node *snode,*newNode;
      if(head==NULL) printf("The list is empty! ");
      else if(position==1) return add_node_in_start(head,data);
      else if(position==lenght_list(head)) return add_node_in_end(head,data);
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
   }}
//convert a linked list into an array
void convert_list_to_array(struct node*head,int* arr){
  struct node *snode=head;
  if(head==NULL) printf("The list is empty!");
  else{
  int i=0;
   int arr[100];
  while(snode!=NULL){
   arr[i]=snode->data;
   snode=snode->link;
   i++;  
  }}}
 //convert linked list into string
 char* convert_list_to_string(struct node*head){
  struct node *snode=head;
  int i=0;
  char *str=(char*)malloc(sizeof(char));
  while(snode!=NULL)
  {
   sprintf(str+i,"%d ",snode->data);
   snode=snode->link;
   i+=strlen(str+i);  
  }
  return str;
  }
//create node
 struct node* add_node(struct node *head,int num){
  struct node *tail, *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=num;
  newnode->link=NULL;
  if(head==NULL)
  {
  	head=newnode;
  	tail=newnode;
  }
  else
  {
  	tail->link=newnode;
  	tail=newnode;
  }
  return head;
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
        printf("Enter the data : ");
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
     printf("Enter the data : ");
                scanf("%d", &data);
  newNode->data = data; 
  newNode->link= NULL; 
 temp->link = newNode; 
                
  temp = temp->link; 
            }
        }
        return head;
    }
