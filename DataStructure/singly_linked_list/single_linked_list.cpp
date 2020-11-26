#include<iostream>


using namespace std;

class node
{
	public:
	int data;
	node * next;
};

void append(node ** head_ref,int new_data)
{
	node * new_node=new(nothrow) node();
	
	new_node->data=new_data;
	
	new_node->next=0;
	
	node*last=*head_ref;
	
	if(*head_ref == 0)
	{
		*head_ref=new_node; //address of head (i.e 0)
		return;
	}
	
	while(last->next !=0)
	{
		last=last->next;
	}
	
	last->next=new_node;
	
}

void push(node ** head_ref,int new_data)
{
	node * new_node=new(nothrow) node();
	
	new_node->data=new_data;
	
	new_node->next=*head_ref;
	
	*head_ref=new_node;
}

void deleteNode(node ** head_ref,int key)
{
	node * temp =*head_ref;
	node* prev=0;
	
	if(temp == 0)
	{
		return;
	}
	
	if(temp !=0 && temp->data==key)
	{
		*head_ref=temp->next;
		 delete temp;
		 return;
	}
	
	while(temp !=0 && temp->data!=key)
	{
		prev=temp;
		temp=temp->next;
	}
	
	prev->next=temp->next;
	
	delete temp;
	
}

void insertAfter(node *prev_node,int new_data)
{
	if(prev_node == 0)
	{
		return;
	}
	
	node *new_node=new(nothrow) node();
	
	new_node->data=new_data;
	
	new_node->next=prev_node->next;
	
	prev_node->next=new_node;
}

void print(node* pnode)
{
	while(pnode != 0)
	{
		cout<<" "<<pnode->data;
		pnode=pnode->next;
	}
}

int main()
{
	node * head=0;     //store address 0
	
	append(&head,1);   //add values at ending 
	
	append(&head,2);
	
	append(&head,3);
	
	push(&head,4);  //add values at begging
	
	print(head);
	
	cout<<endl;
	
	deleteNode(&head,3);
	
	print(head);
	
	cout<<endl;
	
	deleteNode(&head,4);
	
	print(head);
	
	cout<<endl;
	
	append(&head,5);
	
	print(head);
	
	cout<<endl;
	
	
	append(&head,6);
	
	print(head);
	
	cout<<endl;
	
	insertAfter(head->next->next->next,7);
	
	print(head);
	
	cout<<endl;
	
	return 0;
}
