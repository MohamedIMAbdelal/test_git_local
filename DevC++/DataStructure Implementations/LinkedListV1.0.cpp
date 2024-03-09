#include<iostream>
#include<cstdlib>
using namespace std;
struct node {
	int data;
	node* next;
};
node* Head = NULL;

void insertNode(int value);
void displayNodes();
void deleteNode(int value);
int main(void)
{
	

//insertNode(5);	
//insertNode(10);
//insertNode(20);
//insertNode(30);
int numOfInputs , value;

cout<<"Enter Number of inputs : ";
cin>>numOfInputs;

while(numOfInputs)
{
	cout<<"Enter Value : ";
	cin>>value;
	insertNode(value);
	numOfInputs--;
}
	
displayNodes();
deleteNode(2);	
displayNodes();	

malloc();

	return 0;
}


void insertNode(int value)
{
	node *new_node , *last;
	new_node = new node;
	new_node->data = value;
	last = Head;
	
	if(Head == NULL)
	{
		Head = new_node;
		new_node->next = NULL;
	}
	
	else
	{
		while(last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;	
		new_node->next = NULL;
		
	}
	
}

void displayNodes()
{
	node* current_node;
	if(Head == NULL)
		cout<<"The Linked List is Empty \n";
	else
	{
		current_node = Head;
		while(current_node != NULL)
		{
			cout<<current_node->data<<" ";
			current_node = current_node->next;
		}
	}
	
	cout<<"\n";
}

void deleteNode(int value)
{
	node *current_node , *previous_node;
	current_node = Head;
	previous_node = Head;
	
	if(current_node->data == value)
	{
		Head = current_node->next;
		delete(current_node);
		return;
	}
	while(current_node->data != value)
	{
		previous_node = current_node;
		current_node = current_node->next;	
	}
	previous_node->next = current_node->next;
	delete(current_node);	
	
}
