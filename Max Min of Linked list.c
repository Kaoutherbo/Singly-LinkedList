#include<stdio.h>
#include<stdlib.h>
struct node{
int DATA;
struct node*next; 
};
int Add_Node(struct node*list,int data){
 struct node*p;
 p=(struct node*)malloc(sizeof(struct node));
  if(l==NULL){
 
  p->DATA =data;
  p->next=NULL;
  l=p;
  }
  else{
   p->DATA=data;
   p->next=NULL;
   l=p;
  }
  return p->DATA;
}
int main(){
struct node *l;
 l=NULL;
 int i,n,max,min,a[n];
 printf("Enter the number of elements : ");
for(i=0;i<n; i++){
printf(" Enter a number:  "); 
scanf(" %d",&a[i]); 
} 
 max=Add_Node(l,a[0]);min=Add_Node(l,a[0]);
 for( i=1;i<n;i++){ 
  if(max<Add_Beg_Node(l,a[i])){
   max=Add_Node(l,a[i]);
  }
  if(min>Add_Node(l,a[i])){
   min=Add_Node(l,a[i]);
  }
 }
 printf("\nThe maximum is : %d \n The minimum is : %d",max,min);
 return 0;
}
