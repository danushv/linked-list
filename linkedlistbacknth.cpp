#include<iostream>
#include<algorithm>
using namespace std;
struct node
{ 
int data;
struct node* next;
};
void push(struct node** head_ref,int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=new_data;
new_node->next=(*head_ref);
(*head_ref)=new_node;
}
void printNthFromLast(struct node* head,int n)
{
	int len=0,i;
	struct node*temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		len++;
	}
	while(len<n)
	return;
	temp=head;
	for(i=1;i<len-n+1;i++)
	{
		temp=temp->next;
		 cout<<temp->data;
		return;
	} 
}
	int main()
	{
		struct node* head=NULL;
		push(&head,20);
		push(&head,4);
		push(&head,15);
		push(&head,35);
		printNthFromLast(head,2);
return 0;
	}
	
	

