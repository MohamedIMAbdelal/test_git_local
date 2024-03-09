#include<iostream>

using namespace std ;

int main()
{
	
	unsigned int elem ;
	float sum = 0 ;
//	cout<<"Enter Num of elem array : "; 
	cin>>elem;
	
	float arr[elem] ;
	for(int i = 0;i < elem;i++)
	{
		cin>>arr[i];
		sum += arr[i];
	}
	
	if(sum >= 0)
	cout<<sum<<"\n";
	else
	cout<<-sum<<"\n";

	return 0; 
}
