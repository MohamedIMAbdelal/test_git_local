#include<iostream>
#include<typeinfo>
using namespace std;


int main()
{
	
	double n , k , a , s;
	cin>>n>>k>>a;
	
	s = (n * k )/ a;
	//1.7e308
	double c = s - (int)s ;
	if(s > 2147483647 &&  c > 0)
	cout<<"double"<<endl;
	else if(s > 2147483647 )
	cout<<"long long"<<endl;
	else if(s <= 2147483647)
	cout<<"int"<<endl;
	
	cout<<typeid(s).name();
	
	
	return 0 ;
}
