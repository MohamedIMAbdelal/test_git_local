#include<iostream>


using namespace std ;


int main()
{
	// z = 122 , a = 97
	//Z = 90 , A = 65
//	cout<<(int)'A';

char ch ;
int x ;
cin>>ch;

x = ch ;

if(x >= 97 && x <= 122)
{
	if(x < 122)
	x++;
	else
	x = 97;
}
	
	cout<<(char)x<<endl;
	
	
	return 0 ;
}
