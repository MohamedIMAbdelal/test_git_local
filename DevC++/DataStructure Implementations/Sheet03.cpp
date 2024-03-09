#include<iostream>

using namespace std;
//node declartion 
struct node {
	int data ;
	node* next;
};
node* Head = NULL;
node *head1 = NULL , *head2 = NULL;
//===========================
struct doubleNode {
	int data;
	doubleNode* next;
	doubleNode* prev;
};
doubleNode* doubleHead = NULL;
//==========================
//functions declartions
void insertNode(int value);//insert node in single ll
void inputNodes();//take multiple nodes in single ll
void displayNodes();//display nodes values of single ll
void revDisplay();//display reverse of nodes value in S ll
void displayReverse();//display reverse of nodes value in double ll
void insertDoubleNode(int value);//insert node in D ll
void inputDoubleNodes();//take more nodes in D ll
void displayDoubleNodes();//display nodes values in D ll
int countNodes();
void insertNodeInMiddle(int value);

void insertAnyNode(node* &head ,int value);//insert any node in single ll
void inputAnyNodes(node* &head);//take multiple nodes in single ll
void displayAnyNodes(node* head);

void removeDupes(doubleNode* &head);
void empty(node* &head);
void insertCirNode(node* &head , int value);
void displayCirNodes(node* head);
void inputCirNodes(node* &head);
int main()
{
//	inputNodes();
//	insertNodeInMiddle(33);
//	displayNodes();
//	revDisplay();
	
//	insertDoubleNode(10);
//	insertDoubleNode(20);
//	insertDoubleNode(50);
//	displayDoubleNodes();
//	displayReverse();
//	cout<<doubleHead<<"\t"<<doubleHead->next<<"\t"<<doubleHead->prev<<"\n";
//	inputDoubleNodes();
//	displayDoubleNodes();
//	displayReverse();
	
//	cout<<countNodes();
	
//	insertAnyNode(head1 , 10);
//	insertAnyNode(head2 , 15);
//	displayAnyNodes(head1);
//	displayAnyNodes(head2);
//	empty(head1);
//	displayAnyNodes(head1);
//	inputAnyNodes(head1);
//	inputAnyNodes(head2);
//	displayAnyNodes(head1);
//	displayAnyNodes(head2);


//	inputDoubleNodes();
//	displayDoubleNodes();
//	removeDupes(doubleHead);
//	displayDoubleNodes();
	
	insertCirNode(head1 , 10);
	insertCirNode(head1 , 20);
	insertCirNode(head1 , 30);
	displayCirNodes(head1);
	inputCirNodes(head2);
	displayCirNodes(head2);
	return 0;
}
//========================
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
//================================
void inputNodes()
{
	int numOfNodes;
	int nodeValue ;
	cout<<"Enter number of Nodes you want to fill : ";
	cin>>numOfNodes;
	if(numOfNodes)
	{
		for(int i = 1;i <= numOfNodes;i++)
		{
			cout<<"Enter Node # "<<i<<" : ";
			cin>>nodeValue;
			insertNode(nodeValue);
		}
	}
	else
	cout<<"Enter only positive numbers \n";
}
//==================
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

//==============================
void displayReverse()
{
	doubleHead->prev = NULL;
	doubleNode* current_node , *lastNode;
	if(doubleHead == NULL)
		cout<<"The Double Linked List is Empty \n";
	else
	{
		current_node = doubleHead;
		while(current_node != NULL)
		{
			lastNode = current_node;
			current_node = current_node->next;
		}
		while(lastNode != NULL)
		{
			cout<<lastNode->data<<" ";
//			cout<<lastNode<<"\t";
			lastNode = lastNode->prev;
		}
		
			
		
		
		
	}
	
	cout<<"\n";
}
//=================================
void insertDoubleNode(int value)
{
	doubleNode *new_node , *lastNode;
	new_node = new doubleNode;
	new_node->data = value;
	lastNode = doubleHead;
	
	if(doubleHead == NULL)
	{
		doubleHead = new_node;
		new_node->next = NULL;
		new_node->prev = doubleHead;
	}
	
	else
	{
		while(lastNode->next != NULL)
		{
			lastNode->prev = lastNode;
			lastNode = lastNode->next;
		}
		lastNode->next = new_node;
		new_node->prev = lastNode;	
		new_node->next = NULL;
		
	}
	
}
//================================
void displayDoubleNodes()
{
	doubleNode* current_node;
	if(doubleHead == NULL)
		cout<<"The Double Linked List is Empty \n";
	else
	{
		current_node = doubleHead;
		while(current_node != NULL)
		{
			cout<<current_node->data<<" ";
//			cout<<current_node<<"\t";
			current_node = current_node->next;
		}
	}
	
	cout<<"\n";
}
void inputDoubleNodes()
{
	int numOfNodes;
	int nodeValue ;
	cout<<"Enter number of Nodes you want to fill : ";
	cin>>numOfNodes;
	if(numOfNodes)
	{
		for(int i = 1;i <= numOfNodes;i++)
		{
			cout<<"Enter Node # "<<i<<" : ";
			cin>>nodeValue;
			insertDoubleNode(nodeValue);
		}
	}
	else
	cout<<"Enter only positive numbers \n";
}

//===========================
int countNodes()
{
	int count = 0;
	node* current = Head;
	if(current == NULL)
	{
		return count;
		cout<<"The Linked List is Empty \n";
	}
	else
	{
		while(current != NULL)
		{
			count++;
			current = current->next;
		}
	}
	return count;
}
void revDisplay()
{
	node* current;
	int count = countNodes();
	for(int i = count;i > 0;i--)
	{
		current = Head;
		int n = 1;
		while(n < i)
		{
			current = current->next;
			n++;
		}
		cout<<current->data<<" ";
	}
	cout<<"\n";
}
//====================================
void insertNodeInMiddle(int value)
{
	node* current = Head;
	node* newNode = new node;
	newNode->data = value;
	node* tempNode;
	int num = countNodes();
	int pos = 0;
	if(num % 2 == 0)
	pos = num / 2 ;
	else
	pos = (num / 2) + 1;
	
	while(pos > 1)
	{
		current = current->next;
		pos--;
	}
	tempNode = current->next;
	current->next = newNode;
	newNode->next = tempNode;
	tempNode = NULL;
}
//==============================================================================
void insertAnyNode(node* &head , int value)
{
	node *new_node , *last;
	new_node = new node;
	new_node->data = value;
	last = head;
	
	if(head == NULL)
	{
		head = new_node;
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
//================================
void inputAnyNodes(node* &head)
{
	int numOfNodes;
	int nodeValue ;
	cout<<"Enter number of Nodes you want to fill : ";
	cin>>numOfNodes;
	if(numOfNodes)
	{
		for(int i = 1;i <= numOfNodes;i++)
		{
			cout<<"Enter Node # "<<i<<" : ";
			cin>>nodeValue;
			insertAnyNode(head , nodeValue);
		}
	}
	else
	cout<<"Enter only positive numbers \n";
}
//==================
void displayAnyNodes(node* head)
{
	node* current_node;
	if(head == NULL)
		cout<<"The Linked List is Empty \n";
	else
	{
		current_node = head;
		while(current_node != NULL)
		{
			cout<<current_node->data<<" ";
			current_node = current_node->next;
		}
	}
	
	cout<<"\n";
}

//===================================
void empty(node* &head)
{
	while (head != NULL) 
	{
        node* temp = head;
        head = head->next;
        delete temp;
    }
}
//==============================
void removeDupes(doubleNode* &head)
{
	doubleNode* current = head;
	doubleNode* Temp;
	while(current != NULL)
	{
	doubleNode* tempNode = current->next;
		while(tempNode != NULL)
		{
			if(current->data == tempNode->data)
			{
				tempNode->data = 0;
			}
			
			tempNode = tempNode->next;	
		}
		current = current->next;
	}
	
}

//=======================================

void insertCirNode(node* &head , int value)
{
	node *new_node , *last;
	new_node = new node;
	new_node->data = value;
	last = head;
	
	if(head == NULL)
	{
		head = new_node;
		new_node->next = head;
	}
	
	else
	{
		while(last->next != head)
		{
			last = last->next;
		}
		last->next = new_node;	
		new_node->next = head;
		
	}
	
}
void displayCirNodes(node* head)
{
	node* current_node;
	if(head == NULL)
		cout<<"The Circular Linked List is Empty \n";
	else
	{
		current_node = head;
		do
		{
			cout<<current_node->data<<" ";
			current_node = current_node->next;
		}while(current_node != head);
	}
	
	cout<<"\n";
}

void inputCirNodes(node* &head)
{
	int numOfNodes;
	int nodeValue ;
	cout<<"Enter number of Nodes you want to fill : ";
	cin>>numOfNodes;
	if(numOfNodes)
	{
		for(int i = 1;i <= numOfNodes;i++)
		{
			cout<<"Enter Node # "<<i<<" : ";
			cin>>nodeValue;
			insertCirNode(head , nodeValue);
		}
	}
	else
	cout<<"Enter only positive numbers \n";
}
