#include<iostream>
#include<cmath>
#include<string>


using namespace std;
//Functions
void dec_to_bin(int);
void dec_to_oct(int);
void dec_to_hex(int);
void oct_to_bin(char [] , int);
void hex_to_bin(char [] , int);

int main()
{
	//convert from any system to decimal sys
	
	int option ;
	cout<<"Choose which system you would like to tranfer from to decimal : ";
	cin>>option;
	//get from user number 
	unsigned int sys_num ;
	cout<<"Enter your number : ";
	cin>>sys_num;
	
	//----------------------
	
	string s_num ;
	cout<<"Enter your number : ";
	cin>>s_num;
	
	int len =  s_num.length();
	char num_arr[len] ;
	for(int i = 0;i < len;i++)
	{
		num_arr[i] = s_num[i];
	}
	
	
	//---------------------
	
	switch(option)
	{
	case 1 :
		dec_to_bin(sys_num);
		break;
	case 2 :
		dec_to_oct(sys_num);
		break;
	case 3 :
		dec_to_hex(sys_num);
		break;
	case 4 :
		oct_to_bin(num_arr , len);
		break;
	case 5 :
		hex_to_bin(num_arr , len);
		break;
	}
	
	
	return 0;
}

void dec_to_bin(int dec_num)
{
int rem = 0;
int res = dec_num;//10
int size = 32;
short bin_arr[size] = {0};//4 bits arr
int indx = 0 ;
while(res > 0)
{
rem = res % 2 ;
res /= 2;	
bin_arr[indx] = rem ;
indx++;
}
for(int j = 0;j < size;j++)
{
if(j % 8 == 0)
cout<<"\n";	
cout<<bin_arr[size - (j + 1)]<<" ";	

}

}

void dec_to_oct(int dec_num)
{
int rem = 0;
int res = dec_num;//
int size = 8;//
short bin_arr[size] = {0};
int indx = 0 ;
while(res > 0)
{
rem = res % 8 ;//
res /= 8;	//
bin_arr[indx] = rem ;
indx++;
}
for(int j = 0;j < size;j++)
{
if(j % 8 == 0)
cout<<"\n";	
cout<<bin_arr[size - (j + 1)]<<" ";	

}

}

void dec_to_hex(int dec_num)
{
int rem = 0;
int res = dec_num;//
int size = 8;//
short bin_arr[size] = {0};
int indx = 0 ;
while(res > 0)
{
rem = res % 16 ;//
res /= 16;	//
bin_arr[indx] = rem ;
indx++;
}
for(int j = 0;j < size;j++)
{
if(j % 8 == 0)
cout<<"\n";	
int digit = bin_arr[size - (j + 1)] ;
if(digit >= 10 && digit <= 15)
{
	switch(digit)
	{
		case 10 :
			cout<<"A"<<" ";
			break;
		case 11 :
			cout<<"B"<<" ";
			break;
		case 12 :
			cout<<"C"<<" ";
			break;
		case 13 :
			cout<<"D"<<" ";
			break;
		case 14 :
			cout<<"E"<<" ";
			break;
		case 15 :
			cout<<"F"<<" ";
			break;
	}	
}
else
cout<<bin_arr[size - (j + 1)]<<" ";	

}

}


void oct_to_bin(char oct_num[] , int size)
{
	string octal[size];

	for(int j = 0;j < size;j++)
	{
		switch(oct_num[j])
		{
			case '0':
				octal[j] = "000";
				break;
			case '1':
				octal[j] = "001";
				break;
			case '2':
				octal[j] = "010";
				break;
			case '3':
				octal[j] = "011";
				break;
			case '4':
				octal[j] = "100";
				break;
			case '5':
				octal[j] = "101";
				break;
			case '6':
				octal[j] = "110";
				break;
			case '7':
				octal[j] = "111";
				break;
		}
		
		cout<<octal[j]<<" ";
	
	}
	
}


void hex_to_bin(char hex_num[] , int size)
{
	string hexa[size];

	for(int j = 0;j < size;j++)
	{
		switch(hex_num[j])
		{
			case '0':
				hexa[j] = "0000";
				break;
			case '1':
				hexa[j] = "0001";
				break;
			case '2':
				hexa[j] = "0010";
				break;
			case '3':
				hexa[j] = "0011";
				break;
			case '4':
				hexa[j] = "0100";
				break;
			case '5':
				hexa[j] = "0101";
				break;
			case '6':
				hexa[j] = "0110";
				break;
			case '7':
				hexa[j] = "0111";
				break;
			case '8':
				hexa[j] = "1000";
				break;
			case '9':
				hexa[j] = "1001";
				break;
			case 'A':
				hexa[j] = "1010";
				break;
			case 'B':
				hexa[j] = "1011";
				break;
			case 'C':
				hexa[j] = "1100";
				break;
			case 'D':
				hexa[j] = "1101";
				break;
			case 'E':
				hexa[j] = "1110";
				break;
			case 'F':
				hexa[j] = "1111";
				break;
		}
		
		cout<<hexa[j]<<" ";
	
	}
	
}

