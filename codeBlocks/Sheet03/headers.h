#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

//======================================================
//node declaration
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
//functions declarations
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
//=====================================================


#endif // HEADERS_H_INCLUDED
