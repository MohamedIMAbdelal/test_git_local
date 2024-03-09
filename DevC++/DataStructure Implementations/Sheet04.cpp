#include<iostream>
using namespace std;
//global variables
const int size = 5;
int stack[size];
int top = -1;
//implementing using Arrays
void push(int value);
int pop();
int peek();
void display();
bool isEmpty();
bool isFull();
void fillStack();
//=====================================
//implementing using Linked List
struct node
{
	int data;
	node* next;
};
node* top_node = NULL;
void push_node(int value);
int pop_node();
int peek_node();
void display_node();

int main()
{
	
//	push(5);
//	push(10);
//	push(15);
//	display();
//	cout<<"pop = "<<pop()<<endl;	
//	display();
//	cout<<"peek = "<<peek()<<endl;	
//	display();
//isEmpty();
//fillStack();
//isFull();
//push(10);
//display();

//=====================
//	push_node(5);
//	push_node(10);	
//	push_node(15);
//	display_node();
//	cout<<"pop = "<<pop_node()<<endl;	
//	display_node();
//	cout<<"peek = "<<peek_node()<<endl;	
//	display_node();
		
	return 0;
}

//implementing using Arrays

void push(int value)
{
	if(top == size - 1)
		cout<<"STACK OVERFLOW.\n";
	else
	{
		top++;
		stack[top] = value;
	}
}

int pop()
{
	if(top == -1)
	{
		cout<<"STACK UNDERFLOW. \n";
		return -1;
	}
		
	else
	{
		return stack[top--];
	}
}

int peek()
{
	if(top == -1)
	{
		cout<<"STACK UNDERFLOW. \n";
		return -1;
	}
		
	else
	{
		return stack[top];
	}	
}

void display()
{
	if(top == -1)
	{
		cout<<"STACK UNDERFLOW. \n";
	}
		
	else
	{
		for(int i = top;i >=0;i--)
		{
			cout<<"value of element #"<<i<<" = "<<stack[i]<<endl;
		}
		cout<<"\n";
	}	
}
bool isEmpty()
{
	if(top <= -1)
	{
		cout<<"Stack is Empty"<<endl;
		return 1;
	}	
	return 0;
}
bool isFull()
{
	if(top >= size - 1)
	{
		cout<<"Stack is Full"<<endl;
		return 1;
	}
	return 0;
}
void fillStack()
{
	if(isFull())
	return;
	
	else
	{	int value = 0;
		for(int i = 0;i < size;i++)
		{
			cout<<"Enter Stack element no # "<<(i+1)<<" : ";
			cin>>value;
			push(value);
		}
	}
}
//implementing using LinkedList
void push_node(int value)
{
	node* newNode ;
	newNode = new node;
	newNode->data = value;
	newNode->next = top_node;
	top_node = newNode;
}
int pop_node()
{
	
	if(top_node == NULL)
	{
		cout<<"STACK UNDERFLOW. \n";
		return -1;
	}
		
	else
	{
		int value = top_node->data;
		node* first_node = top_node;
		top_node = first_node->next; 
		delete(first_node);
		return value;
	}
}

int peek_node()
{
	if(top_node == NULL)
	{
		cout<<"STACK UNDERFLOW. \n";
		return -1;
	}
		
	else
	{
		int value = top_node->data;
		return value;
	}
} 
void display_node()
{
	node* curr = top_node;
	if(top_node == NULL)
	{
		cout<<"STACK UNDERFLOW. \n";
	}
	
	else
	{
		while(curr != NULL)
		{
			cout<<curr->data<<" ";
			curr = curr->next;
		}
		cout<<"\n";
	}
}
