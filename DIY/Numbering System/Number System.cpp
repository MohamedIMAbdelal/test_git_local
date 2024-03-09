#include<iostream>
#include<cmath>
#include<string>


using namespace std;

//Functions
void bin_to_dec(char arr[] , int size);
void oct_to_dec(char arr[] , int size);
void hex_to_dec(char arr[] , int size);

void bin_to_oct(char bin_num[] , int size);

int main()
{
	//convert from any system to decimal sys
	
	int option ;
	
	
	cout<<"Choose which system you would like to tranfer from to decimal : ";
	cin>>option;
	//get from user number 
	string sys_num ;
	cout<<"Enter your number : ";
	cin>>sys_num;
	//count digits
	int len = sys_num.length();
	char sys_digits[len];
	
	for(int i = 0;i < len;i++)
	{
		sys_digits[i] = sys_num[i];
		cout<<sys_digits[i]<<"\n";
	}
	
	switch(option)
	{
		case 1 :
			bin_to_dec(sys_digits , len);
			break;
		case 2 :
			oct_to_dec(sys_digits , len);
			break;
		case 3 :
			hex_to_dec(sys_digits , len);
			break;
		case 4 :
			bin_to_oct(sys_digits , len);
			break;
	}
	
	
	
	return 0;
}
//Functions here 
void bin_to_dec(char arr[] ,int size)
{
	int sum = 0;
	int bin[size] ;
	int power = size - 1 ;//most significant digit
	int base = 2; // binary base
	for(int j = 0;j < size;j++)
	{
		if(arr[j] == '1')
		{
			bin[j] = 1 ;
		}
		else if(arr[j] == '0')
		{
			bin[j] = 0 ;
		}
		
		sum += bin[j] * pow(base,power);
		power--;
	}
	cout<<"DECIMAL = "<<sum<<"\n";
}

void oct_to_dec(char arr[] ,int size)
{
	int sum = 0;
	int oct[size] ;
	int power = size - 1 ;//most significant digit
	int base = 8;//octal base
	for(int j = 0;j < size;j++)
	{
		switch(arr[j])
		{
			case '0':
				oct[j] = 0;
				break;
				case '1':
				oct[j] = 1;
				break;
				case '2':
				oct[j] = 2;
				break;
				case '3':
				oct[j] = 3;
				break;
				case '4':
				oct[j] = 4;
				break;
				case '5':
				oct[j] = 5;
				break;
				case '6':
				oct[j] = 6;
				break;
				case '7':
				oct[j] = 7;
				break;
		}
		
		sum += oct[j] * pow(base,power);
		power--;
	}
	cout<<"DECIMAL = "<<sum<<"\n";
}

void hex_to_dec(char arr[] ,int size)
{
	int sum = 0;
	int hex[size] ;
	int power = size - 1 ;//most significant digit
	int base = 16;//hexadeciaml base
	for(int j = 0;j < size;j++)
	{
		switch(arr[j])
		{
			case '0':
				hex[j] = 0;
				break;
				case '1':
				hex[j] = 1;
				break;
				case '2':
				hex[j] = 2;
				break;
				case '3':
				hex[j] = 3;
				break;
				case '4':
				hex[j] = 4;
				break;
				case '5':
				hex[j] = 5;
				break;
				case '6':
				hex[j] = 6;
				break;
				case '7':
				hex[j] = 7;
				break;
				case '8':
				hex[j] = 8;
				break;
				case '9':
				hex[j] = 9;
				break;
				case 'A':
				hex[j] = 10;
				break;
				case 'B':
				hex[j] = 11;
				break;
				case 'C':
				hex[j] = 12;
				break;
				case 'D':
				hex[j] = 13;
				break;
				case 'E':
				hex[j] = 14;
				break;
				case 'F':
				hex[j] = 15;
				break;
		}
		
		sum += hex[j] * pow(base,power);
		power--;
	}
	cout<<"DECIMAL = "<<sum<<"\n";
}


void bin_to_oct(char bin_num[] , int size)
{
	int oct_len;
	if(size % 3 == 0)
	{
		oct_len = size / 3 ;
	}
	else if(size % 3 == 1 && bin_num[0] == 1)
	{
		oct_len = (size + 2) / 3 ;
		size += 2 ; 
	}
	
//	string bin_digits[oct_len];
//	short x = 0 ;
//	for(int j = 0;j < oct_len;j++)
//	{
//		for(int k = 0;k < size;k++)
//		{
//			if(k >= x && k <= x+2)
//			{
//				bin_digits[j] += bin_num[k];
//			}	
//		}
////		cout<<x<<"\n";
//		cout<<bin_digits[j]<<"	";
//		x += 3;	
//	}
	

	int oct[oct_len] ;
	short x = 0 ;
	
	for(int j = 0;j < oct_len;j++)
	{
		int sum = 0;
		int power = 2 ;//most significant digit
		int base = 2; // binary base
		
		for(int k = 0;k < size;k++)
		{
			if(k >= x && k <= x+2)
			{
				if(bin_num[k] == '1')
				
					sum += 1 * pow(base,power); 
		
				else if(bin_num[k] == '0')
		
					sum += 0 * pow(base,power); 
		
				power--;
			}	
		}
		oct[j] = sum ;
		cout<<oct[j]<<" ";
		x += 3;	
	}
	
}//End of Function
