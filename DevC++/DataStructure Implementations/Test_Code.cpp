#include<iostream>

using namespace std;
//Function declration
void print_array(int arr[] , int size_arr);
void change_array_element(int arr[] , int size_arr);
void insert_element_array(int arr[] , int size_arr);

int main()
{

//int test_arr[] = {10,30,50,60,70};
//int size = sizeof(test_arr) / sizeof(test_arr[0]);
//print_array(test_arr,size);

const int n = 10;
int arry[] = {10,30,50,60,70};
int j = 6;
while(j--)
insert_element_array(arry , n);
print_array(arry , n);



  return 0;
}

//function defintion 
void print_array(int arr[] , int size_arr){
	if(size_arr < 1)
		cout<<"There are nothing to print \n";
	else
	for(int i = 0;i < size_arr;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";	
}
//
void change_array_element(int arr[] , int size_arr){
	int elem_pos = -1, new_value = 0;
	//validation
	while(elem_pos <= 0 || elem_pos > size_arr)
	{
	cout<<"Enter The Element Position You want to change and new value : ";
	cin>>elem_pos>>new_value;	
	}
	
	int index = elem_pos - 1;
	arr[index]  = new_value;
	
	
}

void insert_element_array(int arr[] , int size_arr){
	int pos = -1 , value = 0 ;
	int capacity = sizeof(arr) / sizeof(arr[0]);
	if(capacity >= size_arr)
		cout<<"There no enough space in the array \n";
	while(pos <= 0 || pos > size_arr)
	{
	cout<<"Enter The Element Position You want to insert and the value : ";
	cin>>pos>>value;	
	}
	int indx = pos - 1;
	for(int i = size_arr - 1;i > indx;i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[indx] = value;
	
	
}










