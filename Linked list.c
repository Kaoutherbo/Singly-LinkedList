#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
 int data;
 struct node *link;
};
struct node* createList(struct node*,int num); 
void displayList(struct node*); 
int lenght_list(struct node*);
struct node* merge_lists(struct node*,struct node*);
struct node* delet_list(struct node*);
struct node* delete_node(struct node*);
struct node* insert_node(struct node*);
struct node* add_node_in_start(struct node*,int num);
struct node* add_node_in_end(struct node*,int num);
struct node* add_node_in_middle(struct node*,int num);
struct node* reverse_list(struct node* );
struct node* delete_first_node(struct node* );
struct node* delete_last_node(struct node* );
struct node* delete_middle_node(struct node* );
bool search_element(struct node* ,int num);
char* convert_list_to_string(struct node*);
void convert_list_to_array(struct node*);
int occurence_element_list(struct node* ,int num);
int get_data_from_list(struct node* ,int num);
bool is_palindrom_list(struct node*);
int min_element_list(struct node*);
int max_element_list(struct node*);
int sum_list(struct node*);
