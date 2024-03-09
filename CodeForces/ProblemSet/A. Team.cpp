#include<iostream>

using namespace std ;

int main()
{
	
int problem , view , sum = 0 , count = 0;
cin>>problem;

for(int i = 1; i <= problem;i++)
{
	for(int j = 1;j <= 3;j++)
	{
		cin>> view;
		sum += view ;
	}
	if(sum > 1)
	count++;
	sum = 0;
}	
	
cout<<(count)<<"\n";	
	
	
	
	return 0;
}
