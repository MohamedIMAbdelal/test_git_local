#include<iostream>

using namespace std ;

int main()
{
	
	unsigned short int num ;
	short int place , count = 0 , max = 0;
	unsigned short int score[num];
	
	cin>>num>>place;

	for(int i = 0;i < num;i++)
	{
		cin>>score[i];
		if(score[i] > max) 
		max = score[i];
	}
	
	if(score[place-1] > 0)
	{
	
	for(int j = 0;j < num;j++)
	{
		if(score[j] >= score[place-1])
		count++;
	}

	count = 0 ;
	}
	
	if(score[place-1] == 0 && max != 0)
	{
	
	for(int j = 0;j < num;j++)
	{
		if(score[j] > score[place-1])
		count++;
	}

	}
	
	cout<<count<<"\n";
}
