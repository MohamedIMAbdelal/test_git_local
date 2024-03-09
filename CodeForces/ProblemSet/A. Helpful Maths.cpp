#include<iostream>
#include<string>
using namespace std;

int main()
{
	string eq ;
	cin>>eq;
	short int len = eq.length();
	char letters[len];
	int max = letters[len-1];
	for(int i = 0;i < len;i++)
	{
		letters[i] = eq[i];
		
		if(letters[i] == '+')
			continue;
		else
		{
		if(max > letters[i])
		 letters[i] = max;
		}
	
	}	
	for(int i = 0;i < len;i++)
	{
		cout<<letters[i]<<" ";
	}
	
}
