#include<iostream>
using namespace std;
//
const int SIZE = 5;
int queue[SIZE];
int front = -1 , rear = -1;
//
bool isFull();
bool isEmpty();
//int getSize();
void enqueue(int value);
void dequeue();
void display();
int peek();
//
int main()
{
	
	enqueue(5);
	enqueue(10);
	enqueue(15);
	display();
	dequeue();
	enqueue(20);
	dequeue();
	dequeue();
	enqueue(25);
	display();
	cout<<peek();
	
	
	
	
	
	
	
	
	
	return 0;
}

bool isFull()
{
	if(rear == SIZE - 1)
		return 1;
	else
		return 0;
}

bool isEmpty()
{
	if(rear == -1 && front == -1)
		return 1;
	else
		return 0;
}
void enqueue(int value)
{
	if(isFull())
		cout<<"Queue is Full\n";
		
	else
	{
		if(isEmpty())
		{
			front++;
			rear++;
			queue[rear] = value;	
		}
		else
		{
			rear++;
			queue[rear] = value;
		}	
	}
}

void dequeue()
{
	if(isEmpty())
		cout<<"Queue is Empty\n";
	else if(front <= rear)
	{
		front++;
	}	
}
void display()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty\n";
	}
	else
	{
		for(int i = front;i <= rear;i++)
		{
			cout<<"element #"<<(1+i)<<" of Queue = "<<queue[i]<<endl;
		}
	}
}
int peek()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty\n";
		return -1;
	}	
	else if(front <= rear)
	{
		return queue[front];
	}	
}
