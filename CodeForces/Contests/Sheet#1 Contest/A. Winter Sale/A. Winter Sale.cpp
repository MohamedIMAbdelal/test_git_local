#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
	
	float x , p , sum;
	cin>>x>>p;
	sum =100 / (100 - x ) * p ;
	cout<<fixed<<setprecision(2)<<sum<<endl;
	

	return 0 ;
}

