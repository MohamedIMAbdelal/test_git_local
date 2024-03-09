#include<iostream>
#include<cmath>
#include<string>


using namespace std;
//Functions
void dec_to_bin(int);


int main()
{
	//convert from any system to decimal sys
	
	int option ;
	
//	cout<<"Choose which system you would like to tranfer from to decimal : ";
	cin>>option;
	//get from user number 
	int sys_num ;
	cout<<"Enter your number : ";
	cin>>sys_num;
	
	switch(option)
	{
	case 1 :
	dec_to_bin(sys_num);
	break;
	}
	
	return 0;
}

void dec_to_bin(int dec_num)
{
int rem = 0;
int res = dec_num;//10
int size = 4;
int bin_arr[size];//8 bits arr
int indx = 0 ;
while(res > 0)
{
rem = res % 2 ;
res /= 2;
//cout<<rem<<" ";	
bin_arr[indx] = rem ;
indx++;
}
for(int j = 0;j < size;j++)
{
cout<<bin_arr[size - (j + 1)]<<" ";		
}

}
