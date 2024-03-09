#include<iostream>

using namespace std ;

int main()
{
	double a , b , c , d ;
	
	cin>>a>>b>>c>>d;
	
	bool isEqual = false;
	// (+ , - , *)
	//a+b+c , a-b-c , a+b-c , a-b+c , a*b+c , a+b*c , a-b*c  , a*b-c
	//34688642 -851839419 395784949 490743112
	
	if(a+b+c == d  || a-b-c == d)
	isEqual = true ;
	
	else if(a+b-c == d || a-b+c == d)
	isEqual = true ;
	
	else if(a*b+c == d || a+b*c == d)
	isEqual = true ;
	
	else if(a-b*c == d || a*b-c == d)
	isEqual = true ;
	
	if(isEqual)
	cout<<"YES\n";
	else
	cout<<"NO\n";

	
	
	return 0;
}
