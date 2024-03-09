#include<iostream>

using namespace std;

int main()
{
	
	unsigned short int weight ;
	
//	cout<<"Enter watermelon's Weight : ";
	cin>>weight;
	
	if(weight > 2)
	{
	if(weight % 2 == 0)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
	
	else
	cout<<"NO\n";
	
	return 0 ;
}
