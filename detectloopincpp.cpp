#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int data;
	struct node* next;
};


void push(struct node**head_ref,int new_data)
{
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
int detectloop(struct node* head)
{
	struct node* slow_ptr=head;
	struct node* fast_ptr=head;
	while(slow_ptr&&fast_ptr&&fast_ptr->next!=NULL)
	{
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		if(slow_ptr==fast_ptr)
		{
			cout<<"yeaaah loop";
			return 1;
		}
		
	}
return 0;	
}
int main()
{ 
struct node*head=NULL;
push(&head,20);
push(&head,14);
push(&head,65);
push(&head,112);
head->next->next->next->next=head;
detectloop(head);
return 0;
}
