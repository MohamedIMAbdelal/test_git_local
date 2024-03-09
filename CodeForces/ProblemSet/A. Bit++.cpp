#include<iostream>

using namespace std;

int x = 0 ;
void Plus(char ch , string s);
void Minus(char ch , string s);

int main()
{
	
int n ;
cin>>n;

string stat ;
char x = 'X';
char sign ;

for(int i = 1;i <= n;i++)
{
	cin>>stat;
	sign = stat[1];
	
	if(sign == '+')
		Plus(x,stat);
	if(sign == '-')
		Minus(x,stat);
}

		
	cout<<::x<<" "; // print global variables
	
	
	
	
	
	return 0;
}

void Plus(char ch , string s)
{
	if(ch == s[0])
	{
		x++;	
	}
	if(ch == s[2])
	{
		++x;
	}
//	cout<<x<<" ";
}

void Minus(char ch , string s)
{
	if(ch == s[0])
	{
		x--;	
	}
	if(ch == s[2])
	{
		--x;
	}
//	cout<<x<<" ";
}
